// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/BlueprintGenerator.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintGenerator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
TASKPLAN_API UClass* Z_Construct_UClass_UBlueprintGenerator();
TASKPLAN_API UClass* Z_Construct_UClass_UBlueprintGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin Class UBlueprintGenerator Function AddComponentToBlueprint
struct Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics
{
	struct BlueprintGenerator_eventAddComponentToBlueprint_Parms
	{
		UBlueprint* Blueprint;
		TSubclassOf<UActorComponent> ComponentClass;
		FName ComponentName;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blueprint Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbd\xbf\xe7\x94\xa8\xe5\xbc\x95\xe6\x93\x8e\xe9\xa2\x84\xe5\xae\x9a\xe4\xb9\x89\xe5\xb8\xb8\xe9\x87\x8f\n" },
#endif
		{ "CPP_Default_ComponentName", "None" },
		{ "ModuleRelativePath", "BlueprintGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8\xe5\xbc\x95\xe6\x93\x8e\xe9\xa2\x84\xe5\xae\x9a\xe4\xb9\x89\xe5\xb8\xb8\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGenerator_eventAddComponentToBlueprint_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGenerator_eventAddComponentToBlueprint_Parms, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGenerator_eventAddComponentToBlueprint_Parms, ComponentName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGenerator_eventAddComponentToBlueprint_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::NewProp_Blueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::NewProp_ComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::NewProp_ComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGenerator, nullptr, "AddComponentToBlueprint", nullptr, nullptr, Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::BlueprintGenerator_eventAddComponentToBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::BlueprintGenerator_eventAddComponentToBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintGenerator::execAddComponentToBlueprint)
{
	P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
	P_GET_OBJECT(UClass,Z_Param_ComponentClass);
	P_GET_PROPERTY(FNameProperty,Z_Param_ComponentName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=UBlueprintGenerator::AddComponentToBlueprint(Z_Param_Blueprint,Z_Param_ComponentClass,Z_Param_ComponentName);
	P_NATIVE_END;
}
// End Class UBlueprintGenerator Function AddComponentToBlueprint

// Begin Class UBlueprintGenerator Function AddLogicToBlueprint
struct Z_Construct_UFunction_UBlueprintGenerator_AddLogicToBlueprint_Statics
{
	struct BlueprintGenerator_eventAddLogicToBlueprint_Parms
	{
		UBlueprint* Blueprint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blueprint Generation" },
		{ "ModuleRelativePath", "BlueprintGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintGenerator_AddLogicToBlueprint_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGenerator_eventAddLogicToBlueprint_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGenerator_AddLogicToBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_AddLogicToBlueprint_Statics::NewProp_Blueprint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGenerator_AddLogicToBlueprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGenerator_AddLogicToBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGenerator, nullptr, "AddLogicToBlueprint", nullptr, nullptr, Z_Construct_UFunction_UBlueprintGenerator_AddLogicToBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGenerator_AddLogicToBlueprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintGenerator_AddLogicToBlueprint_Statics::BlueprintGenerator_eventAddLogicToBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGenerator_AddLogicToBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintGenerator_AddLogicToBlueprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintGenerator_AddLogicToBlueprint_Statics::BlueprintGenerator_eventAddLogicToBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintGenerator_AddLogicToBlueprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGenerator_AddLogicToBlueprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintGenerator::execAddLogicToBlueprint)
{
	P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBlueprintGenerator::AddLogicToBlueprint(Z_Param_Blueprint);
	P_NATIVE_END;
}
// End Class UBlueprintGenerator Function AddLogicToBlueprint

// Begin Class UBlueprintGenerator Function AddStaticMeshComponentToBlueprint
struct Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics
{
	struct BlueprintGenerator_eventAddStaticMeshComponentToBlueprint_Parms
	{
		UBlueprint* Blueprint;
		UStaticMesh* StaticMesh;
		FName ComponentName;
		UStaticMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blueprint Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbd\xbf\xe7\x94\xa8 nullptr\n" },
#endif
		{ "CPP_Default_ComponentName", "None" },
		{ "CPP_Default_StaticMesh", "None" },
		{ "ModuleRelativePath", "BlueprintGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8 nullptr" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGenerator_eventAddStaticMeshComponentToBlueprint_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGenerator_eventAddStaticMeshComponentToBlueprint_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGenerator_eventAddStaticMeshComponentToBlueprint_Parms, ComponentName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGenerator_eventAddStaticMeshComponentToBlueprint_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::NewProp_Blueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::NewProp_ComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGenerator, nullptr, "AddStaticMeshComponentToBlueprint", nullptr, nullptr, Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::BlueprintGenerator_eventAddStaticMeshComponentToBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::BlueprintGenerator_eventAddStaticMeshComponentToBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintGenerator::execAddStaticMeshComponentToBlueprint)
{
	P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
	P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
	P_GET_PROPERTY(FNameProperty,Z_Param_ComponentName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMeshComponent**)Z_Param__Result=UBlueprintGenerator::AddStaticMeshComponentToBlueprint(Z_Param_Blueprint,Z_Param_StaticMesh,Z_Param_ComponentName);
	P_NATIVE_END;
}
// End Class UBlueprintGenerator Function AddStaticMeshComponentToBlueprint

// Begin Class UBlueprintGenerator Function AddVariableToBlueprint
struct Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics
{
	struct BlueprintGenerator_eventAddVariableToBlueprint_Parms
	{
		UBlueprint* Blueprint;
		FName VariableName;
		FEdGraphPinType PinType;
		FString DefaultValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blueprint Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe4\xbd\xbf\xe7\x94\xa8 TEXT \xe5\xae\x8f\n" },
#endif
		{ "CPP_Default_DefaultValue", "" },
		{ "ModuleRelativePath", "BlueprintGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe4\xbd\xbf\xe7\x94\xa8 TEXT \xe5\xae\x8f" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PinType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGenerator_eventAddVariableToBlueprint_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGenerator_eventAddVariableToBlueprint_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::NewProp_PinType = { "PinType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGenerator_eventAddVariableToBlueprint_Parms, PinType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(0, nullptr) }; // 831943823
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGenerator_eventAddVariableToBlueprint_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlueprintGenerator_eventAddVariableToBlueprint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlueprintGenerator_eventAddVariableToBlueprint_Parms), &Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::NewProp_Blueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::NewProp_PinType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGenerator, nullptr, "AddVariableToBlueprint", nullptr, nullptr, Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::BlueprintGenerator_eventAddVariableToBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::BlueprintGenerator_eventAddVariableToBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintGenerator::execAddVariableToBlueprint)
{
	P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_STRUCT(FEdGraphPinType,Z_Param_PinType);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBlueprintGenerator::AddVariableToBlueprint(Z_Param_Blueprint,Z_Param_VariableName,Z_Param_PinType,Z_Param_DefaultValue);
	P_NATIVE_END;
}
// End Class UBlueprintGenerator Function AddVariableToBlueprint

// Begin Class UBlueprintGenerator Function CreateNewBlueprint
struct Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics
{
	struct BlueprintGenerator_eventCreateNewBlueprint_Parms
	{
		FString BlueprintName;
		UClass* ParentClass;
		FString PackagePath;
		UBlueprint* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blueprint Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xb9\xe4\xb8\xba nullptr \xe8\x80\x8c\xe9\x9d\x9e AActor::StaticClass()\n// \xe4\xbd\xbf\xe7\x94\xa8 TEXT \xe5\xae\x8f\n" },
#endif
		{ "CPP_Default_PackagePath", "/Game/Blueprints" },
		{ "CPP_Default_ParentClass", "None" },
		{ "ModuleRelativePath", "BlueprintGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xb9\xe4\xb8\xba nullptr \xe8\x80\x8c\xe9\x9d\x9e AActor::StaticClass()\n\xe4\xbd\xbf\xe7\x94\xa8 TEXT \xe5\xae\x8f" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::NewProp_BlueprintName = { "BlueprintName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGenerator_eventCreateNewBlueprint_Parms, BlueprintName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGenerator_eventCreateNewBlueprint_Parms, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGenerator_eventCreateNewBlueprint_Parms, PackagePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGenerator_eventCreateNewBlueprint_Parms, ReturnValue), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::NewProp_BlueprintName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::NewProp_ParentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::NewProp_PackagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGenerator, nullptr, "CreateNewBlueprint", nullptr, nullptr, Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::BlueprintGenerator_eventCreateNewBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::BlueprintGenerator_eventCreateNewBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintGenerator::execCreateNewBlueprint)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintName);
	P_GET_OBJECT(UClass,Z_Param_ParentClass);
	P_GET_PROPERTY(FStrProperty,Z_Param_PackagePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBlueprint**)Z_Param__Result=UBlueprintGenerator::CreateNewBlueprint(Z_Param_BlueprintName,Z_Param_ParentClass,Z_Param_PackagePath);
	P_NATIVE_END;
}
// End Class UBlueprintGenerator Function CreateNewBlueprint

// Begin Class UBlueprintGenerator
void UBlueprintGenerator::StaticRegisterNativesUBlueprintGenerator()
{
	UClass* Class = UBlueprintGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddComponentToBlueprint", &UBlueprintGenerator::execAddComponentToBlueprint },
		{ "AddLogicToBlueprint", &UBlueprintGenerator::execAddLogicToBlueprint },
		{ "AddStaticMeshComponentToBlueprint", &UBlueprintGenerator::execAddStaticMeshComponentToBlueprint },
		{ "AddVariableToBlueprint", &UBlueprintGenerator::execAddVariableToBlueprint },
		{ "CreateNewBlueprint", &UBlueprintGenerator::execCreateNewBlueprint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintGenerator);
UClass* Z_Construct_UClass_UBlueprintGenerator_NoRegister()
{
	return UBlueprintGenerator::StaticClass();
}
struct Z_Construct_UClass_UBlueprintGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintGenerator.h" },
		{ "ModuleRelativePath", "BlueprintGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintGenerator_AddComponentToBlueprint, "AddComponentToBlueprint" }, // 3610082909
		{ &Z_Construct_UFunction_UBlueprintGenerator_AddLogicToBlueprint, "AddLogicToBlueprint" }, // 2695240326
		{ &Z_Construct_UFunction_UBlueprintGenerator_AddStaticMeshComponentToBlueprint, "AddStaticMeshComponentToBlueprint" }, // 840851325
		{ &Z_Construct_UFunction_UBlueprintGenerator_AddVariableToBlueprint, "AddVariableToBlueprint" }, // 4015657832
		{ &Z_Construct_UFunction_UBlueprintGenerator_CreateNewBlueprint, "CreateNewBlueprint" }, // 3100053107
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintGenerator_Statics::ClassParams = {
	&UBlueprintGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintGenerator()
{
	if (!Z_Registration_Info_UClass_UBlueprintGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintGenerator.OuterSingleton, Z_Construct_UClass_UBlueprintGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintGenerator.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UBlueprintGenerator>()
{
	return UBlueprintGenerator::StaticClass();
}
UBlueprintGenerator::UBlueprintGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintGenerator);
UBlueprintGenerator::~UBlueprintGenerator() {}
// End Class UBlueprintGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintGenerator, UBlueprintGenerator::StaticClass, TEXT("UBlueprintGenerator"), &Z_Registration_Info_UClass_UBlueprintGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintGenerator), 3638286218U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintGenerator_h_2387354095(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
