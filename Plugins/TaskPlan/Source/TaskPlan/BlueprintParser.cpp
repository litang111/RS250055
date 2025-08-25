// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintParser.h"
#include "Engine/Blueprint.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphNode.h"
#include "EdGraph/EdGraphPin.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Logging/LogMacros.h"
#include "HAL/IConsoleManager.h"
#include "Engine/Engine.h"
#include "Misc/FileHelper.h"

//todo DEFINE_LOG_CATEGORY(LogBlueprintParser); // ÕýÈ·ÉùÃ÷



// ????????
void UBlueprintParser::AppendToLog(const FString& Message)
{
    LogContent += Message + LINE_TERMINATOR; // ???????
    UE_LOG(LogTemp, Log, TEXT("%s"), *Message); // ????????????
}
// §Õ?????
void UBlueprintParser::WriteLogToFile(const FString& FilePath)
{
    // ?????????
    FString Dir = FPaths::GetPath(FilePath);
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    if (!PlatformFile.DirectoryExists(*Dir))
    {
        PlatformFile.CreateDirectory(*Dir);
    }

    // §Õ???????UTF-8????
    if (!FFileHelper::SaveStringToFile(
        LogContent,
        *FilePath,
        FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM
    ))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to save log file: %s"), *FilePath);
    }
}
// ????????????
static FAutoConsoleCommand ParseBlueprintConsoleCommand(
    TEXT("bp.Parse"),
    TEXT("?????????????¡Â?: bp.Parse <??????> [???: bp.Parse /Game/Path/To/Blueprint]"),
    FConsoleCommandWithArgsDelegate::CreateLambda([](const TArray<FString>& Args) {
        if (Args.Num() > 0)
        {
            // ?????§¹??World??????
            UWorld* World = nullptr;
            if (GEngine)
            {
                for (const FWorldContext& Context : GEngine->GetWorldContexts())
                {
                    if (Context.WorldType == EWorldType::Editor || Context.WorldType == EWorldType::PIE)
                    {
                        World = Context.World();
                        break;
                    }
                }
            }

            if (World)
            {
                // ?????????????
                UBlueprintParser* Parser = NewObject<UBlueprintParser>(World);

                // ?????????????
                FString BlueprintPath = Args[0];
                if (BlueprintPath.EndsWith(".uasset"))
                {
                    BlueprintPath = FPaths::GetBaseFilename(BlueprintPath, false);
                }

                UE_LOG(LogTemp, Display, TEXT("Start parsing Blueprints: %s"), *BlueprintPath);
                Parser->ParseBlueprint(BlueprintPath);

                // ??????????
                
                /*UE_LOG(LogTemp, Display, TEXT("=== variable ==="));
                for (const auto& VarPair : Parser->GetVariables())
                {                   
                    UE_LOG(LogTemp, Display, TEXT("%s : %s"), *VarPair.Key, *VarPair.Value);
                }*/

                /*UE_LOG(LogTemp, Display, TEXT("=== function ==="));
                for (const FString& FuncName : Parser->GetFunctions())
                {
                    UE_LOG(LogTemp, Display, TEXT("%s"), *FuncName);
                }*/
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Unable to get a valid World context"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("usage: bp.Parse <Blueprint path> [e.g: bp.Parse /Game/Path/To/Blueprint]"));
        }
        })
);

void UBlueprintParser::ParseBlueprint(const FString& BlueprintPath)
{
    Variables.Empty();
    Functions.Empty();
    NodeConnections.Empty();

    UE_LOG(LogTemp, Verbose, TEXT("Try loading the blueprint: %s"), *BlueprintPath);

    if (UBlueprint* Blueprint = LoadBlueprint(BlueprintPath))
    {
        UE_LOG(LogTemp, Log, TEXT("load blueprint success : %s"), *Blueprint->GetName());
        ParseVariables(Blueprint);
        ParseFunctions(Blueprint);
        ParseEventGraph(Blueprint);

        // §Õ??????????????????Saved????
        FString FilePath = FPaths::ProjectSavedDir() / TEXT("BlueprintAnalysisLog.txt");
        WriteLogToFile(FilePath);

        UE_LOG(LogTemp, Verbose, TEXT("Analysis completed. Log saved to: %s"), *FilePath);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("load blueprint failed: %s"), *BlueprintPath);
    }
}

UBlueprint* UBlueprintParser::LoadBlueprint(const FString& Path)
{
    FAssetRegistryModule& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

    FString AssetPath = Path;
    if (!AssetPath.StartsWith("/Game/")) AssetPath = "/Game/" + AssetPath;
    //if (!AssetPath.EndsWith(".uasset")) AssetPath += ".uasset";

    return Cast<UBlueprint>(StaticLoadObject(UBlueprint::StaticClass(), nullptr, *AssetPath));
}

void UBlueprintParser::ParseVariables(UBlueprint* Blueprint)
{
    AppendToLog(TEXT("<Variables>"));
    for (FBPVariableDescription& Var : Blueprint->NewVariables)
    {
        FString TypeName = Var.VarType.PinCategory.ToString();
        if (Var.VarType.PinSubCategoryObject.IsValid())
        {
            TypeName += " (" + Var.VarType.PinSubCategoryObject->GetName() + ")";
        }

        //Variables.Add(Var.VarName.ToString(), TypeName);
        UE_LOG(LogTemp, Verbose, TEXT("find variable: %s [%s]"), *Var.VarName.ToString(), *TypeName);

        FString VarInfo = FString::Printf(TEXT("Name: %s, Type: %s, GUID: %s"),
            *Var.VarName.ToString(),
            *TypeName,
            *Var.VarGuid.ToString());

        AppendToLog(VarInfo);
    }
    AppendToLog(TEXT("</Variables>"));
}

void UBlueprintParser::ParseFunctions(UBlueprint* Blueprint)
{
    AppendToLog(TEXT("<Function>"));
    for (UEdGraph* Graph : Blueprint->FunctionGraphs)
    {
        //Functions.Add(Graph->GetName());
        UE_LOG(LogTemp, Verbose, TEXT("find function: %s"), *Graph->GetName());

        FString VarInfo = FString::Printf(TEXT("Name: %s"),
            *Graph->GetName());

        AppendToLog(VarInfo);
    }
    AppendToLog(TEXT("</Function>"));
}

void UBlueprintParser::ParseEventGraph(UBlueprint* Blueprint)
{
    if (UEdGraph* EventGraph = FBlueprintEditorUtils::FindEventGraph(Blueprint))
    {
        AppendToLog(TEXT("<Node>"));
        UE_LOG(LogTemp, Display, TEXT("=== Node connections ==="));
        // ??????????????????
        TMap<UEdGraphNode*, FString> NodeNames;
        int32 NodeIndex = 1;

        for (UEdGraphNode* Node : EventGraph->Nodes)
        {
            FString NodeName = FString::Printf(TEXT("Node%d_%s"), NodeIndex++,
                *Node->GetNodeTitle(ENodeTitleType::FullTitle).ToString());
            NodeNames.Add(Node, NodeName);

            UE_LOG(LogTemp, Display, TEXT("[%s] type: %s"),
                *NodeName,
                *Node->GetClass()->GetName());

            FString NodeInfo = FString::Printf(TEXT("Name: %s, Type: %s, Guid: %s, Comment: %s"),
                *Node->GetNodeTitle(ENodeTitleType::FullTitle).ToString(),
                *Node->GetClass()->GetName(),
                *Node->NodeGuid.ToString(),
                *Node->NodeComment);

            AppendToLog(NodeInfo);

            //????(Pin)???
            AppendToLog(TEXT("<Node-Pin>"));
            for (UEdGraphPin* Pin : Node->Pins)
            {
                FString PinInfo = FString::Printf(
                    TEXT("Name: %s, Direction: %s, Type: %s, GUID: %s"),
                    *Pin->PinName.ToString(),
                    (Pin->Direction == EGPD_Input) ? TEXT("Input") : TEXT("Output"),
                    *Pin->PinType.PinCategory.ToString(), // ?? "exec", "bool", "object"
                    *Pin->PinId.ToString()
                );

                if (Pin->PinType.PinSubCategoryObject.IsValid())
                {
                    PinInfo += FString::Printf(TEXT(" (%s)"), *Pin->PinType.PinSubCategoryObject->GetName());
                }
                AppendToLog(PinInfo);
            }
            AppendToLog(TEXT("</Node-Pin>"));
        }
        AppendToLog(TEXT("</Node>"));
        // ???????????
        AppendToLog(TEXT("<Connect>"));
        UE_LOG(LogTemp, Display, TEXT("--- connect ---"));

        for (UEdGraphNode* Node : EventGraph->Nodes)
        {
            FString NodeName = NodeNames.FindRef(Node);

            for (UEdGraphPin* Pin : Node->Pins)
            {
                if (Pin->LinkedTo.Num() > 0)
                {
                    FString PinDirection = (Pin->Direction == EGPD_Input) ? TEXT("Input") : TEXT("Output");

                    for (UEdGraphPin* LinkedPin : Pin->LinkedTo)
                    {
                        UEdGraphNode* LinkedNode = LinkedPin->GetOwningNode();
                        FString LinkedNodeName = NodeNames.FindRef(LinkedNode);

                        UE_LOG(LogTemp, Display, TEXT("NodeName: %s, PinName: %s,  GUID: %s,  Direction: %s-> NodeName: %s, PinName: %s, GUID: %s"),
                            *NodeName,
                            *Pin->PinName.ToString(),
                            *Pin->PinId.ToString(),
                            *PinDirection,
                            *LinkedNodeName,
                            *LinkedPin->PinName.ToString(),
                            *LinkedPin->PinId.ToString());

                        FString connectInfo = FString::Printf(
                            TEXT("NodeName: %s, PinName: %s,  GUID: %s,  Direction: %s-> NodeName: %s, PinName: %s, GUID: %s"),
                            *NodeName,
                            *Pin->PinName.ToString(),
                            *Pin->PinId.ToString(),
                            *PinDirection,
                            *LinkedNodeName,
                            *LinkedPin->PinName.ToString(),
                            *LinkedPin->PinId.ToString());

                        AppendToLog(connectInfo);
                    }
                }
            }
        }
        AppendToLog(TEXT("</Connect>"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("??????????"));
    }
}
