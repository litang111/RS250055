// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/PlatformPart/Processor/WsfProcessor.h"
#include "TaskPlan/PlatformPart/WsfPlatformPart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWsfProcessor() {}

// Begin Cross Module References
TASKPLAN_API UClass* Z_Construct_UClass_UWsfPlatformPart();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfProcessor();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfProcessor_NoRegister();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFPlatformPart();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFWsfProcessor();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin ScriptStruct FFWsfProcessor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWsfProcessor;
class UScriptStruct* FFWsfProcessor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWsfProcessor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWsfProcessor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFWsfProcessor, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("FWsfProcessor"));
	}
	return Z_Registration_Info_UScriptStruct_FWsfProcessor.OuterSingleton;
}
template<> TASKPLAN_API UScriptStruct* StaticStruct<FFWsfProcessor>()
{
	return FFWsfProcessor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFWsfProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformPartCommands_MetaData[] = {
		{ "Category", "WsfProcessor" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_update_interval_MetaData[] = {
		{ "Category", "WsfProcessor" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformPartCommands;
	static const UECodeGen_Private::FIntPropertyParams NewProp_update_interval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFWsfProcessor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFWsfProcessor_Statics::NewProp_PlatformPartCommands = { "PlatformPartCommands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfProcessor, PlatformPartCommands), Z_Construct_UScriptStruct_FFPlatformPart, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformPartCommands_MetaData), NewProp_PlatformPartCommands_MetaData) }; // 1482664585
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfProcessor_Statics::NewProp_update_interval = { "update_interval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfProcessor, update_interval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_update_interval_MetaData), NewProp_update_interval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFWsfProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfProcessor_Statics::NewProp_PlatformPartCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfProcessor_Statics::NewProp_update_interval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfProcessor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFWsfProcessor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	&NewStructOps,
	"FWsfProcessor",
	Z_Construct_UScriptStruct_FFWsfProcessor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfProcessor_Statics::PropPointers),
	sizeof(FFWsfProcessor),
	alignof(FFWsfProcessor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfProcessor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFWsfProcessor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFWsfProcessor()
{
	if (!Z_Registration_Info_UScriptStruct_FWsfProcessor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWsfProcessor.InnerSingleton, Z_Construct_UScriptStruct_FFWsfProcessor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWsfProcessor.InnerSingleton;
}
// End ScriptStruct FFWsfProcessor

// Begin Class UWsfProcessor Function bluePrintPrase
struct Z_Construct_UFunction_UWsfProcessor_bluePrintPrase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfProcessor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfProcessor_bluePrintPrase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfProcessor, nullptr, "bluePrintPrase", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_bluePrintPrase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfProcessor_bluePrintPrase_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWsfProcessor_bluePrintPrase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfProcessor_bluePrintPrase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfProcessor::execbluePrintPrase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->bluePrintPrase();
	P_NATIVE_END;
}
// End Class UWsfProcessor Function bluePrintPrase

// Begin Class UWsfProcessor Function SetIncludeFile
struct Z_Construct_UFunction_UWsfProcessor_SetIncludeFile_Statics
{
	struct WsfProcessor_eventSetIncludeFile_Parms
	{
		FString FileName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfProcessor" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfProcessor_SetIncludeFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfProcessor_eventSetIncludeFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfProcessor_SetIncludeFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfProcessor_eventSetIncludeFile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfProcessor_SetIncludeFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfProcessor_SetIncludeFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfProcessor_SetIncludeFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_SetIncludeFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfProcessor_SetIncludeFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfProcessor, nullptr, "SetIncludeFile", nullptr, nullptr, Z_Construct_UFunction_UWsfProcessor_SetIncludeFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_SetIncludeFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfProcessor_SetIncludeFile_Statics::WsfProcessor_eventSetIncludeFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_SetIncludeFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfProcessor_SetIncludeFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfProcessor_SetIncludeFile_Statics::WsfProcessor_eventSetIncludeFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfProcessor_SetIncludeFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfProcessor_SetIncludeFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfProcessor::execSetIncludeFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SetIncludeFile(Z_Param_FileName);
	P_NATIVE_END;
}
// End Class UWsfProcessor Function SetIncludeFile

// Begin Class UWsfProcessor Function SetName
struct Z_Construct_UFunction_UWsfProcessor_SetName_Statics
{
	struct WsfProcessor_eventSetName_Parms
	{
		FString type;
		FString name;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfProcessor" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfProcessor_SetName_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfProcessor_eventSetName_Parms, type), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfProcessor_SetName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfProcessor_eventSetName_Parms, name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfProcessor_SetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfProcessor_eventSetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfProcessor_SetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfProcessor_SetName_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfProcessor_SetName_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfProcessor_SetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_SetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfProcessor_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfProcessor, nullptr, "SetName", nullptr, nullptr, Z_Construct_UFunction_UWsfProcessor_SetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_SetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfProcessor_SetName_Statics::WsfProcessor_eventSetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_SetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfProcessor_SetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfProcessor_SetName_Statics::WsfProcessor_eventSetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfProcessor_SetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfProcessor_SetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfProcessor::execSetName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_type);
	P_GET_PROPERTY(FStrProperty,Z_Param_name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SetName(Z_Param_type,Z_Param_name);
	P_NATIVE_END;
}
// End Class UWsfProcessor Function SetName

// Begin Class UWsfProcessor Function SetScriptVariables
struct Z_Construct_UFunction_UWsfProcessor_SetScriptVariables_Statics
{
	struct WsfProcessor_eventSetScriptVariables_Parms
	{
		FString name;
		FString value;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfProcessor" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_value;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfProcessor_SetScriptVariables_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfProcessor_eventSetScriptVariables_Parms, name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfProcessor_SetScriptVariables_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfProcessor_eventSetScriptVariables_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfProcessor_SetScriptVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfProcessor_eventSetScriptVariables_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfProcessor_SetScriptVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfProcessor_SetScriptVariables_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfProcessor_SetScriptVariables_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfProcessor_SetScriptVariables_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_SetScriptVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfProcessor_SetScriptVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfProcessor, nullptr, "SetScriptVariables", nullptr, nullptr, Z_Construct_UFunction_UWsfProcessor_SetScriptVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_SetScriptVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfProcessor_SetScriptVariables_Statics::WsfProcessor_eventSetScriptVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_SetScriptVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfProcessor_SetScriptVariables_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfProcessor_SetScriptVariables_Statics::WsfProcessor_eventSetScriptVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfProcessor_SetScriptVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfProcessor_SetScriptVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfProcessor::execSetScriptVariables)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_name);
	P_GET_PROPERTY(FStrProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SetScriptVariables(Z_Param_name,Z_Param_value);
	P_NATIVE_END;
}
// End Class UWsfProcessor Function SetScriptVariables

// Begin Class UWsfProcessor Function SetString
struct Z_Construct_UFunction_UWsfProcessor_SetString_Statics
{
	struct WsfProcessor_eventSetString_Parms
	{
		FString str;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfProcessor" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_str;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfProcessor_SetString_Statics::NewProp_str = { "str", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfProcessor_eventSetString_Parms, str), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfProcessor_SetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfProcessor_eventSetString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfProcessor_SetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfProcessor_SetString_Statics::NewProp_str,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfProcessor_SetString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_SetString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfProcessor_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfProcessor, nullptr, "SetString", nullptr, nullptr, Z_Construct_UFunction_UWsfProcessor_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_SetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfProcessor_SetString_Statics::WsfProcessor_eventSetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_SetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfProcessor_SetString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfProcessor_SetString_Statics::WsfProcessor_eventSetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfProcessor_SetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfProcessor_SetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfProcessor::execSetString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_str);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SetString(Z_Param_str);
	P_NATIVE_END;
}
// End Class UWsfProcessor Function SetString

// Begin Class UWsfProcessor Function TurnOff
struct Z_Construct_UFunction_UWsfProcessor_TurnOff_Statics
{
	struct WsfProcessor_eventTurnOff_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfProcessor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//afsim\xe5\xae\x98\xe6\x96\xb9\xe5\x87\xbd\xe6\x95\xb0\n//Turn the processor off and returns true if successful.\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "afsim\xe5\xae\x98\xe6\x96\xb9\xe5\x87\xbd\xe6\x95\xb0\nTurn the processor off and returns true if successful." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWsfProcessor_TurnOff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WsfProcessor_eventTurnOff_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWsfProcessor_TurnOff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WsfProcessor_eventTurnOff_Parms), &Z_Construct_UFunction_UWsfProcessor_TurnOff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfProcessor_TurnOff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfProcessor_TurnOff_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_TurnOff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfProcessor_TurnOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfProcessor, nullptr, "TurnOff", nullptr, nullptr, Z_Construct_UFunction_UWsfProcessor_TurnOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_TurnOff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfProcessor_TurnOff_Statics::WsfProcessor_eventTurnOff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_TurnOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfProcessor_TurnOff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfProcessor_TurnOff_Statics::WsfProcessor_eventTurnOff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfProcessor_TurnOff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfProcessor_TurnOff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfProcessor::execTurnOff)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TurnOff();
	P_NATIVE_END;
}
// End Class UWsfProcessor Function TurnOff

// Begin Class UWsfProcessor Function TurnOn
struct Z_Construct_UFunction_UWsfProcessor_TurnOn_Statics
{
	struct WsfProcessor_eventTurnOn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfProcessor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Turn the processor on and returns true if successful.\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn the processor on and returns true if successful." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWsfProcessor_TurnOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WsfProcessor_eventTurnOn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWsfProcessor_TurnOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WsfProcessor_eventTurnOn_Parms), &Z_Construct_UFunction_UWsfProcessor_TurnOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfProcessor_TurnOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfProcessor_TurnOn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_TurnOn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfProcessor_TurnOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfProcessor, nullptr, "TurnOn", nullptr, nullptr, Z_Construct_UFunction_UWsfProcessor_TurnOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_TurnOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfProcessor_TurnOn_Statics::WsfProcessor_eventTurnOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfProcessor_TurnOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfProcessor_TurnOn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfProcessor_TurnOn_Statics::WsfProcessor_eventTurnOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfProcessor_TurnOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfProcessor_TurnOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfProcessor::execTurnOn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TurnOn();
	P_NATIVE_END;
}
// End Class UWsfProcessor Function TurnOn

// Begin Class UWsfProcessor
void UWsfProcessor::StaticRegisterNativesUWsfProcessor()
{
	UClass* Class = UWsfProcessor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "bluePrintPrase", &UWsfProcessor::execbluePrintPrase },
		{ "SetIncludeFile", &UWsfProcessor::execSetIncludeFile },
		{ "SetName", &UWsfProcessor::execSetName },
		{ "SetScriptVariables", &UWsfProcessor::execSetScriptVariables },
		{ "SetString", &UWsfProcessor::execSetString },
		{ "TurnOff", &UWsfProcessor::execTurnOff },
		{ "TurnOn", &UWsfProcessor::execTurnOn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWsfProcessor);
UClass* Z_Construct_UClass_UWsfProcessor_NoRegister()
{
	return UWsfProcessor::StaticClass();
}
struct Z_Construct_UClass_UWsfProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlatformPart/Processor/WsfProcessor.h" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfProcessor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWsfProcessor_bluePrintPrase, "bluePrintPrase" }, // 2089348165
		{ &Z_Construct_UFunction_UWsfProcessor_SetIncludeFile, "SetIncludeFile" }, // 1273103958
		{ &Z_Construct_UFunction_UWsfProcessor_SetName, "SetName" }, // 182483720
		{ &Z_Construct_UFunction_UWsfProcessor_SetScriptVariables, "SetScriptVariables" }, // 4293743304
		{ &Z_Construct_UFunction_UWsfProcessor_SetString, "SetString" }, // 1541877273
		{ &Z_Construct_UFunction_UWsfProcessor_TurnOff, "TurnOff" }, // 2999446685
		{ &Z_Construct_UFunction_UWsfProcessor_TurnOn, "TurnOn" }, // 2240806768
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWsfProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWsfProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWsfPlatformPart,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWsfProcessor_Statics::ClassParams = {
	&UWsfProcessor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UWsfProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWsfProcessor()
{
	if (!Z_Registration_Info_UClass_UWsfProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWsfProcessor.OuterSingleton, Z_Construct_UClass_UWsfProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWsfProcessor.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UWsfProcessor>()
{
	return UWsfProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWsfProcessor);
UWsfProcessor::~UWsfProcessor() {}
// End Class UWsfProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfProcessor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFWsfProcessor::StaticStruct, Z_Construct_UScriptStruct_FFWsfProcessor_Statics::NewStructOps, TEXT("FWsfProcessor"), &Z_Registration_Info_UScriptStruct_FWsfProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFWsfProcessor), 532994873U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWsfProcessor, UWsfProcessor::StaticClass, TEXT("UWsfProcessor"), &Z_Registration_Info_UClass_UWsfProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWsfProcessor), 2444289978U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfProcessor_h_2728200994(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfProcessor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfProcessor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
