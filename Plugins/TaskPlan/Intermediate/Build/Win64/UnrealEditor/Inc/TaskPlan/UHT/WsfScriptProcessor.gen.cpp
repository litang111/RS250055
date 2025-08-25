// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/PlatformPart/Processor/WsfScriptProcessor.h"
#include "TaskPlan/PlatformPart/Processor/WsfProcessor.h"
#include "TaskPlan/PlatformPart/WsfPlatformPart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWsfScriptProcessor() {}

// Begin Cross Module References
TASKPLAN_API UClass* Z_Construct_UClass_UWsfProcessor();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfScriptProcessor();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfScriptProcessor_NoRegister();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FExternalLink();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFPlatformPart();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFWsfProcessor();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFWsfScriptProcessor();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin ScriptStruct FExternalLink
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExternalLink;
class UScriptStruct* FExternalLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExternalLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalLink, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("ExternalLink"));
	}
	return Z_Registration_Info_UScriptStruct_ExternalLink.OuterSingleton;
}
template<> TASKPLAN_API UScriptStruct* StaticStruct<FExternalLink>()
{
	return FExternalLink::StaticStruct();
}
struct Z_Construct_UScriptStruct_FExternalLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfScriptProcessor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalLink>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternalLink_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	&NewStructOps,
	"ExternalLink",
	nullptr,
	0,
	sizeof(FExternalLink),
	alignof(FExternalLink),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalLink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExternalLink_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExternalLink()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalLink.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExternalLink.InnerSingleton, Z_Construct_UScriptStruct_FExternalLink_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ExternalLink.InnerSingleton;
}
// End ScriptStruct FExternalLink

// Begin ScriptStruct FFWsfScriptProcessor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWsfScriptProcessor;
class UScriptStruct* FFWsfScriptProcessor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWsfScriptProcessor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWsfScriptProcessor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFWsfScriptProcessor, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("FWsfScriptProcessor"));
	}
	return Z_Registration_Info_UScriptStruct_FWsfScriptProcessor.OuterSingleton;
}
template<> TASKPLAN_API UScriptStruct* StaticStruct<FFWsfScriptProcessor>()
{
	return FFWsfScriptProcessor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfScriptProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WsfProcessorCommands_MetaData[] = {
		{ "Category", "WSF_SCRIPT_PROCESSOR" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfScriptProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformPartCommands_MetaData[] = {
		{ "Category", "WSF_SCRIPT_PROCESSOR" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfScriptProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalLinkCommands_MetaData[] = {
		{ "Category", "WSF_SCRIPT_PROCESSOR" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfScriptProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_behavior_tree_MetaData[] = {
		{ "Category", "WSF_SCRIPT_PROCESSOR" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfScriptProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FiniteStateMachineCommands_MetaData[] = {
		{ "Category", "WSF_SCRIPT_PROCESSOR" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfScriptProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_update_interval_MetaData[] = {
		{ "Category", "WSF_SCRIPT_PROCESSOR" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfScriptProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WsfProcessorCommands;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformPartCommands;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalLinkCommands;
	static const UECodeGen_Private::FIntPropertyParams NewProp_behavior_tree;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FiniteStateMachineCommands;
	static const UECodeGen_Private::FIntPropertyParams NewProp_update_interval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFWsfScriptProcessor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::NewProp_WsfProcessorCommands = { "WsfProcessorCommands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfScriptProcessor, WsfProcessorCommands), Z_Construct_UScriptStruct_FFWsfProcessor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WsfProcessorCommands_MetaData), NewProp_WsfProcessorCommands_MetaData) }; // 532994873
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::NewProp_PlatformPartCommands = { "PlatformPartCommands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfScriptProcessor, PlatformPartCommands), Z_Construct_UScriptStruct_FFPlatformPart, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformPartCommands_MetaData), NewProp_PlatformPartCommands_MetaData) }; // 1482664585
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::NewProp_ExternalLinkCommands = { "ExternalLinkCommands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfScriptProcessor, ExternalLinkCommands), Z_Construct_UScriptStruct_FExternalLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalLinkCommands_MetaData), NewProp_ExternalLinkCommands_MetaData) }; // 129803944
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::NewProp_behavior_tree = { "behavior_tree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfScriptProcessor, behavior_tree), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_behavior_tree_MetaData), NewProp_behavior_tree_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::NewProp_FiniteStateMachineCommands = { "FiniteStateMachineCommands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfScriptProcessor, FiniteStateMachineCommands), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FiniteStateMachineCommands_MetaData), NewProp_FiniteStateMachineCommands_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::NewProp_update_interval = { "update_interval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfScriptProcessor, update_interval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_update_interval_MetaData), NewProp_update_interval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::NewProp_WsfProcessorCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::NewProp_PlatformPartCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::NewProp_ExternalLinkCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::NewProp_behavior_tree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::NewProp_FiniteStateMachineCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::NewProp_update_interval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	&NewStructOps,
	"FWsfScriptProcessor",
	Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::PropPointers),
	sizeof(FFWsfScriptProcessor),
	alignof(FFWsfScriptProcessor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFWsfScriptProcessor()
{
	if (!Z_Registration_Info_UScriptStruct_FWsfScriptProcessor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWsfScriptProcessor.InnerSingleton, Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWsfScriptProcessor.InnerSingleton;
}
// End ScriptStruct FFWsfScriptProcessor

// Begin Class UWsfScriptProcessor Function on_initialize
static FName NAME_UWsfScriptProcessor_on_initialize = FName(TEXT("on_initialize"));
void UWsfScriptProcessor::on_initialize()
{
	ProcessEvent(FindFunctionChecked(NAME_UWsfScriptProcessor_on_initialize),NULL);
}
struct Z_Construct_UFunction_UWsfScriptProcessor_on_initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WSF_SCRIPT_PROCESSOR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------WSF_SCRIPT_PROCESSOR----------------//\n// BlueprintImplementableEvent:\xe7\xba\xaf\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xef\xbc\x88""C++ \xe4\xb8\x8d\xe6\x8f\x90\xe4\xbe\x9b\xe9\x80\xbb\xe8\xbe\x91\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfScriptProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------------WSF_SCRIPT_PROCESSOR----------------\n BlueprintImplementableEvent:\xe7\xba\xaf\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0\xef\xbc\x88""C++ \xe4\xb8\x8d\xe6\x8f\x90\xe4\xbe\x9b\xe9\x80\xbb\xe8\xbe\x91\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfScriptProcessor_on_initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfScriptProcessor, nullptr, "on_initialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfScriptProcessor_on_initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfScriptProcessor_on_initialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWsfScriptProcessor_on_initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfScriptProcessor_on_initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UWsfScriptProcessor Function on_initialize

// Begin Class UWsfScriptProcessor Function on_initialize2
static FName NAME_UWsfScriptProcessor_on_initialize2 = FName(TEXT("on_initialize2"));
void UWsfScriptProcessor::on_initialize2()
{
	ProcessEvent(FindFunctionChecked(NAME_UWsfScriptProcessor_on_initialize2),NULL);
}
struct Z_Construct_UFunction_UWsfScriptProcessor_on_initialize2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WSF_SCRIPT_PROCESSOR" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfScriptProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfScriptProcessor_on_initialize2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfScriptProcessor, nullptr, "on_initialize2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfScriptProcessor_on_initialize2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfScriptProcessor_on_initialize2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWsfScriptProcessor_on_initialize2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfScriptProcessor_on_initialize2_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UWsfScriptProcessor Function on_initialize2

// Begin Class UWsfScriptProcessor Function on_message
static FName NAME_UWsfScriptProcessor_on_message = FName(TEXT("on_message"));
void UWsfScriptProcessor::on_message()
{
	ProcessEvent(FindFunctionChecked(NAME_UWsfScriptProcessor_on_message),NULL);
}
struct Z_Construct_UFunction_UWsfScriptProcessor_on_message_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WSF_SCRIPT_PROCESSOR" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfScriptProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfScriptProcessor_on_message_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfScriptProcessor, nullptr, "on_message", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfScriptProcessor_on_message_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfScriptProcessor_on_message_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWsfScriptProcessor_on_message()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfScriptProcessor_on_message_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UWsfScriptProcessor Function on_message

// Begin Class UWsfScriptProcessor Function on_update
static FName NAME_UWsfScriptProcessor_on_update = FName(TEXT("on_update"));
void UWsfScriptProcessor::on_update()
{
	ProcessEvent(FindFunctionChecked(NAME_UWsfScriptProcessor_on_update),NULL);
}
struct Z_Construct_UFunction_UWsfScriptProcessor_on_update_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WSF_SCRIPT_PROCESSOR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xbb\x98\xe8\xae\xa4\xe5\x8f\x82\xe6\x95\xb0\xe4\xbb\x8e""C++\xe4\xbc\xa0\xe9\x80\x92\xe5\x88\xb0\xe8\x93\x9d\xe5\x9b\xbe,UPARAM(ref)\xe5\x85\x81\xe8\xae\xb8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xbf\xae\xe6\x94\xb9\xe5\x8f\x82\xe6\x95\xb0\xe5\xb9\xb6\xe4\xbc\xa0\xe5\x9b\x9e""C++\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfScriptProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xbb\x98\xe8\xae\xa4\xe5\x8f\x82\xe6\x95\xb0\xe4\xbb\x8e""C++\xe4\xbc\xa0\xe9\x80\x92\xe5\x88\xb0\xe8\x93\x9d\xe5\x9b\xbe,UPARAM(ref)\xe5\x85\x81\xe8\xae\xb8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xbf\xae\xe6\x94\xb9\xe5\x8f\x82\xe6\x95\xb0\xe5\xb9\xb6\xe4\xbc\xa0\xe5\x9b\x9e""C++" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfScriptProcessor_on_update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfScriptProcessor, nullptr, "on_update", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfScriptProcessor_on_update_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfScriptProcessor_on_update_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWsfScriptProcessor_on_update()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfScriptProcessor_on_update_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UWsfScriptProcessor Function on_update

// Begin Class UWsfScriptProcessor Function update_interval
struct WsfScriptProcessor_eventupdate_interval_Parms
{
	double time;
};
static FName NAME_UWsfScriptProcessor_update_interval = FName(TEXT("update_interval"));
void UWsfScriptProcessor::update_interval(double& time)
{
	WsfScriptProcessor_eventupdate_interval_Parms Parms;
	Parms.time=time;
	ProcessEvent(FindFunctionChecked(NAME_UWsfScriptProcessor_update_interval),&Parms);
	time=Parms.time;
}
struct Z_Construct_UFunction_UWsfScriptProcessor_update_interval_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WSF_SCRIPT_PROCESSOR" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfScriptProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UWsfScriptProcessor_update_interval_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfScriptProcessor_eventupdate_interval_Parms, time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfScriptProcessor_update_interval_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfScriptProcessor_update_interval_Statics::NewProp_time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfScriptProcessor_update_interval_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfScriptProcessor_update_interval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfScriptProcessor, nullptr, "update_interval", nullptr, nullptr, Z_Construct_UFunction_UWsfScriptProcessor_update_interval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfScriptProcessor_update_interval_Statics::PropPointers), sizeof(WsfScriptProcessor_eventupdate_interval_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfScriptProcessor_update_interval_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfScriptProcessor_update_interval_Statics::Function_MetaDataParams) };
static_assert(sizeof(WsfScriptProcessor_eventupdate_interval_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfScriptProcessor_update_interval()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfScriptProcessor_update_interval_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UWsfScriptProcessor Function update_interval

// Begin Class UWsfScriptProcessor
void UWsfScriptProcessor::StaticRegisterNativesUWsfScriptProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWsfScriptProcessor);
UClass* Z_Construct_UClass_UWsfScriptProcessor_NoRegister()
{
	return UWsfScriptProcessor::StaticClass();
}
struct Z_Construct_UClass_UWsfScriptProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlatformPart/Processor/WsfScriptProcessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfScriptProcessor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWsfScriptProcessor_on_initialize, "on_initialize" }, // 3801220792
		{ &Z_Construct_UFunction_UWsfScriptProcessor_on_initialize2, "on_initialize2" }, // 91502695
		{ &Z_Construct_UFunction_UWsfScriptProcessor_on_message, "on_message" }, // 3546520621
		{ &Z_Construct_UFunction_UWsfScriptProcessor_on_update, "on_update" }, // 3445185245
		{ &Z_Construct_UFunction_UWsfScriptProcessor_update_interval, "update_interval" }, // 3203685640
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWsfScriptProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWsfScriptProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWsfProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfScriptProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWsfScriptProcessor_Statics::ClassParams = {
	&UWsfScriptProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfScriptProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UWsfScriptProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWsfScriptProcessor()
{
	if (!Z_Registration_Info_UClass_UWsfScriptProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWsfScriptProcessor.OuterSingleton, Z_Construct_UClass_UWsfScriptProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWsfScriptProcessor.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UWsfScriptProcessor>()
{
	return UWsfScriptProcessor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWsfScriptProcessor);
UWsfScriptProcessor::~UWsfScriptProcessor() {}
// End Class UWsfScriptProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfScriptProcessor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FExternalLink::StaticStruct, Z_Construct_UScriptStruct_FExternalLink_Statics::NewStructOps, TEXT("ExternalLink"), &Z_Registration_Info_UScriptStruct_ExternalLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExternalLink), 129803944U) },
		{ FFWsfScriptProcessor::StaticStruct, Z_Construct_UScriptStruct_FFWsfScriptProcessor_Statics::NewStructOps, TEXT("FWsfScriptProcessor"), &Z_Registration_Info_UScriptStruct_FWsfScriptProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFWsfScriptProcessor), 2902023844U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWsfScriptProcessor, UWsfScriptProcessor::StaticClass, TEXT("UWsfScriptProcessor"), &Z_Registration_Info_UClass_UWsfScriptProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWsfScriptProcessor), 1894103284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfScriptProcessor_h_4159464233(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfScriptProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfScriptProcessor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfScriptProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfScriptProcessor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
