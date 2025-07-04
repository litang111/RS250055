#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/ObjectMacros.h"
#include "Engine/StaticMesh.h"
#include "EdGraph/EdGraphPin.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "BlueprintGenerator.generated.h"

class UBlueprint;
class UActorComponent;
class UStaticMeshComponent;
class UStaticMesh;
class UK2Node_Event;
class UK2Node_VariableGet;
class UK2Node_IfThenElse;
class UK2Node_CallFunction;
class UEdGraph;

UCLASS()
class RS250055_API UBlueprintGenerator : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Blueprint Generation")
    static UBlueprint* CreateNewBlueprint(
        FString BlueprintName,
        UClass* ParentClass = nullptr,      // 改为 nullptr 而非 AActor::StaticClass()
        FString PackagePath = TEXT("/Game/Blueprints")  // 使用 TEXT 宏
    );

    UFUNCTION(BlueprintCallable, Category = "Blueprint Generation")
    static bool AddVariableToBlueprint(
        UBlueprint* Blueprint,
        FName VariableName,
        FEdGraphPinType PinType,
        FString DefaultValue = TEXT("")     // 字符串使用 TEXT 宏
    );

    UFUNCTION(BlueprintCallable, Category = "Blueprint Generation")
    static UActorComponent* AddComponentToBlueprint(
        UBlueprint* Blueprint,
        TSubclassOf<UActorComponent> ComponentClass,
        FName ComponentName = NAME_None     // 使用引擎预定义常量
    );

    UFUNCTION(BlueprintCallable, Category = "Blueprint Generation")
    static UStaticMeshComponent* AddStaticMeshComponentToBlueprint(
        UBlueprint* Blueprint,
        UStaticMesh* StaticMesh = nullptr,  // 使用 nullptr
        FName ComponentName = NAME_None
    );

    UFUNCTION(BlueprintCallable, Category = "Blueprint Generation")
    static void AddLogicToBlueprint(UBlueprint* Blueprint);
};