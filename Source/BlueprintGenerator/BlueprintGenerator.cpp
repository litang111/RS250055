#include "BlueprintGenerator.h"
#include "AssetToolsModule.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "ObjectTools.h"
#include "Factories/BlueprintFactory.h"
#include "Engine/SimpleConstructionScript.h"
#include "K2Node_VariableGet.h"
#include "K2Node_IfThenElse.h"
#include "K2Node_CallFunction.h"
#include "K2Node_Event.h"
#include "K2Node_CustomEvent.h"
#include "EdGraph/EdGraph.h"
#include "EdGraphSchema_K2.h"
#include "EdGraphSchema_K2_Actions.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet2/CompilerResultsLog.h"

// 控制台命令实现
static FAutoConsoleCommand GenerateBPFullCommand(
    TEXT("bp.GenerateFull"),
    TEXT("Generate a new blueprint with components\nUsage: bp.GenerateFull BlueprintName ParentClass PackagePath MeshPath"),
    FConsoleCommandWithArgsDelegate::CreateLambda([](const TArray<FString>& Args) {
        if (Args.Num() < 1) {
            UE_LOG(LogTemp, Error, TEXT("Usage: bp.GenerateFull BlueprintName [ParentClass] [PackagePath] [MeshPath]"));
            return;
        }

        FString BlueprintName = Args[0];
        UClass* ParentClass = (Args.Num() > 1) ? LoadClass<AActor>(nullptr, *Args[1]) : AActor::StaticClass();
        FString PackagePath = (Args.Num() > 2) ? Args[2] : TEXT("/Game/Blueprints");
        FString MeshPath = (Args.Num() > 3) ? Args[3] : TEXT("");

        UBlueprint* NewBP = UBlueprintGenerator::CreateNewBlueprint(BlueprintName, ParentClass, PackagePath);
        if (!NewBP) return;

        if (!MeshPath.IsEmpty()) {
            UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, *MeshPath);
            UBlueprintGenerator::AddStaticMeshComponentToBlueprint(NewBP, Mesh);
        }
    })
);

UBlueprint* UBlueprintGenerator::CreateNewBlueprint(FString BlueprintName, UClass* ParentClass, FString PackagePath)
{
    // 提供运行时默认值（UHT不支持的默认参数移到这里）
    if (!ParentClass) {
        ParentClass = AActor::StaticClass();
    }

    if (PackagePath.IsEmpty()) {
        PackagePath = TEXT("/Game/Blueprints");
    }

    // 确保名称有效
    FString ValidName = ObjectTools::SanitizeObjectName(BlueprintName);

    // 创建完整路径
    FString AssetPath = PackagePath + "/" + ValidName;
    FString PackageName = AssetPath + "." + ValidName;

    // 检查是否已存在（避免使用已弃用的ANY_PACKAGE）
    if (FindObject<UBlueprint>(nullptr, *PackageName))
    {
        UE_LOG(LogTemp, Warning, TEXT("Blueprint %s already exists"), *PackageName);
        return nullptr;
    }

    // 创建资产
    FAssetToolsModule& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");

    UBlueprintFactory* Factory = NewObject<UBlueprintFactory>();
    Factory->ParentClass = ParentClass;
    Factory->BlueprintType = BPTYPE_Normal; // <<< 确保类型为普通蓝图
 
    UBlueprint* NewBlueprint = Cast<UBlueprint>(AssetTools.Get().CreateAsset(
        ValidName,
        PackagePath,
        UBlueprint::StaticClass(),
        Factory
    ));

    if (!NewBlueprint)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create blueprint"));
        return nullptr;
    }

    // 设置父类并编译
    NewBlueprint->ParentClass = ParentClass;
    FKismetEditorUtilities::CompileBlueprint(NewBlueprint);



    // 添加布尔变量
    FEdGraphPinType BoolPinType;
    BoolPinType.PinCategory = UEdGraphSchema_K2::PC_Boolean;
    AddVariableToBlueprint(NewBlueprint, "bIsActive", BoolPinType, "false");

    // 添加逻辑判断
    AddLogicToBlueprint(NewBlueprint);

    return NewBlueprint;
}
UK2Node_Event* FindBeginPlayNode(UEdGraph* Graph)
{
    for (UEdGraphNode* Node : Graph->Nodes)
    {
        UK2Node_Event* EventNode = Cast<UK2Node_Event>(Node);
        if (EventNode && EventNode->GetFunctionName() == "ReceiveBeginPlay")
        {
            return EventNode;
        }
    }
    return nullptr;
}
void UBlueprintGenerator::AddLogicToBlueprint(UBlueprint* Blueprint)
{
    UEdGraph* EventGraph = FBlueprintEditorUtils::FindEventGraph(Blueprint);
    if (!EventGraph) return;

    // 1. 创建BeginPlay事件节点
    /*UK2Node_Event* BeginPlayNode = FBlueprintEditorUtils::AddEvent(
        Blueprint,
        FName("ReceiveBeginPlay")
    );*/
    UK2Node_Event* BeginPlayNode = FindBeginPlayNode(EventGraph);
    if (BeginPlayNode == nullptr)
    {
        BeginPlayNode = NewObject<UK2Node_Event>(EventGraph);
        BeginPlayNode->EventReference.SetExternalMember(FName("ReceiveBeginPlay"), AActor::StaticClass());
        BeginPlayNode->bOverrideFunction = true;
        EventGraph->AddNode(BeginPlayNode);

        BeginPlayNode->NodePosX = -300;
        BeginPlayNode->NodePosY = 0;
    }

    // 2. 创建变量获取节点
    UK2Node_VariableGet* VarGetNode = NewObject<UK2Node_VariableGet>(EventGraph);
    VarGetNode->VariableReference.SetSelfMember("bIsActive");
    VarGetNode->AllocateDefaultPins();
    VarGetNode->NodePosX = -100;
    VarGetNode->NodePosY = 0;
    EventGraph->AddNode(VarGetNode);

    // 3. 创建分支节点
    UK2Node_IfThenElse* BranchNode = NewObject<UK2Node_IfThenElse>(EventGraph);
    BranchNode->AllocateDefaultPins();
    BranchNode->NodePosX = 100;
    BranchNode->NodePosY = 0;
    EventGraph->AddNode(BranchNode);

    // 4. 创建打印字符串节点（True分支）
    UK2Node_CallFunction* PrintTrueNode = NewObject<UK2Node_CallFunction>(EventGraph);
    PrintTrueNode->SetFromFunction(UKismetSystemLibrary::StaticClass()->FindFunctionByName("PrintString"));
    PrintTrueNode->AllocateDefaultPins();
    PrintTrueNode->NodePosX = 300;
    PrintTrueNode->NodePosY = -100;
    EventGraph->AddNode(PrintTrueNode);

    // 设置打印内容
    UEdGraphPin* StringPin = PrintTrueNode->FindPinChecked(FName("InString"));
    StringPin->DefaultValue = "is 1";

    // 5. 创建打印字符串节点（False分支）
    UK2Node_CallFunction* PrintFalseNode = NewObject<UK2Node_CallFunction>(EventGraph);
    PrintFalseNode->SetFromFunction(UKismetSystemLibrary::StaticClass()->FindFunctionByName("PrintString"));
    PrintFalseNode->AllocateDefaultPins();
    PrintFalseNode->NodePosX = 300;
    PrintFalseNode->NodePosY = 100;
    EventGraph->AddNode(PrintFalseNode);

    // 设置打印内容
    StringPin = PrintFalseNode->FindPinChecked(FName("InString"));
    StringPin->DefaultValue = "is 0";

    // 6. 连接所有节点
    //UEdGraphSchema_K2 Schema;
    //const UEdGraphSchema_K2* Schema = GetDefault<UEdGraphSchema_K2>();
    UEdGraphSchema_K2* Schema = NewObject<UEdGraphSchema_K2>(GetTransientPackage());

    // BeginPlay -> Branch
    Schema->TryCreateConnection(
        BeginPlayNode->FindPinChecked(UEdGraphSchema_K2::PN_Then),
        BranchNode->FindPinChecked(UEdGraphSchema_K2::PN_Execute)
    );

    // Variable -> Branch Condition
    Schema->TryCreateConnection(
        VarGetNode->GetValuePin(),
        BranchNode->GetConditionPin()
    );

    // Branch True -> PrintTrue
    Schema->TryCreateConnection(
        BranchNode->GetThenPin(),
        PrintTrueNode->FindPinChecked(UEdGraphSchema_K2::PN_Execute)
    );

    // Branch False -> PrintFalse
    Schema->TryCreateConnection(
        BranchNode->GetElsePin(),
        PrintFalseNode->FindPinChecked(UEdGraphSchema_K2::PN_Execute)
    );

    // 标记蓝图为已修改
    FBlueprintEditorUtils::MarkBlueprintAsModified(Blueprint);
}

bool UBlueprintGenerator::AddVariableToBlueprint(UBlueprint* Blueprint, FName VariableName, FEdGraphPinType PinType, FString DefaultValue)
{
    if (!Blueprint || VariableName.IsNone())
    {
        return false;
    }

    // 检查变量是否已存在
    for (const FBPVariableDescription& ExistingVar : Blueprint->NewVariables)
    {
        if (ExistingVar.VarName == VariableName)
        {
            UE_LOG(LogTemp, Warning, TEXT("Variable %s already exists"), *VariableName.ToString());
            return false;
        }
    }

    // 创建新变量
    FBPVariableDescription NewVar;
    NewVar.VarName = VariableName;
    NewVar.VarGuid = FGuid::NewGuid();
    NewVar.VarType = PinType;
    NewVar.DefaultValue = DefaultValue;

    Blueprint->NewVariables.Add(NewVar);
    FBlueprintEditorUtils::MarkBlueprintAsModified(Blueprint);
    FKismetEditorUtilities::CompileBlueprint(Blueprint);

    return true;
}

UActorComponent* UBlueprintGenerator::AddComponentToBlueprint(UBlueprint* Blueprint, TSubclassOf<UActorComponent> ComponentClass, FName ComponentName)
{
    if (!Blueprint || !ComponentClass)
    {
        return nullptr;
    }

    // 确保有构造脚本
    if (!Blueprint->SimpleConstructionScript)
    {
        Blueprint->SimpleConstructionScript = NewObject<USimpleConstructionScript>(Blueprint);
    }

    // 创建唯一名称
    if (ComponentName.IsNone())
    {
        ComponentName = MakeUniqueObjectName(Blueprint, ComponentClass, TEXT("GeneratedComponent"));
    }

    // 创建组件
    UActorComponent* NewComponent = NewObject<UActorComponent>(
        Blueprint,
        ComponentClass,
        ComponentName,
        RF_Transactional
    );

    // 正确添加组件变量到蓝图
    FEdGraphPinType PinType;
    PinType.PinCategory = UEdGraphSchema_K2::PC_Object;
    PinType.PinSubCategory = NAME_None;
    PinType.PinSubCategoryObject = ComponentClass;

    // 添加成员变量
    FBlueprintEditorUtils::AddMemberVariable(
        Blueprint,
        ComponentName,
        PinType,
        FString()
    );

    // 添加组件到蓝图
    NewComponent->RegisterComponent();
    Blueprint->ComponentTemplates.Add(NewComponent);

    // 标记蓝图为已修改并编译
    FBlueprintEditorUtils::MarkBlueprintAsModified(Blueprint);
    FKismetEditorUtilities::CompileBlueprint(Blueprint);

    return NewComponent;
}

UStaticMeshComponent* UBlueprintGenerator::AddStaticMeshComponentToBlueprint(UBlueprint* Blueprint, UStaticMesh* StaticMesh, FName ComponentName)
{
    UStaticMeshComponent* MeshComp = Cast<UStaticMeshComponent>(
        AddComponentToBlueprint(Blueprint, UStaticMeshComponent::StaticClass(), ComponentName)
    );

    if (MeshComp && StaticMesh)
    {
        MeshComp->SetStaticMesh(StaticMesh);
    }

    return MeshComp;
}