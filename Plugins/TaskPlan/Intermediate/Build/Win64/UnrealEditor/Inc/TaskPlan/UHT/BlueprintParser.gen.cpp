// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/BlueprintParser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintParser() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TASKPLAN_API UClass* Z_Construct_UClass_UBlueprintParser();
TASKPLAN_API UClass* Z_Construct_UClass_UBlueprintParser_NoRegister();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin Class UBlueprintParser Function GetFunctions
struct Z_Construct_UFunction_UBlueprintParser_GetFunctions_Statics
{
	struct BlueprintParser_eventGetFunctions_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blueprint Parser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe8\xa7\xa3\xe6\x9e\x90\xe7\xbb\x93\xe6\x9e\x9c\xef\xbc\x88\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "BlueprintParser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\xa7\xa3\xe6\x9e\x90\xe7\xbb\x93\xe6\x9e\x9c\xef\xbc\x88\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintParser_GetFunctions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintParser_GetFunctions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintParser_eventGetFunctions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintParser_GetFunctions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintParser_GetFunctions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintParser_GetFunctions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintParser_GetFunctions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintParser_GetFunctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintParser, nullptr, "GetFunctions", nullptr, nullptr, Z_Construct_UFunction_UBlueprintParser_GetFunctions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintParser_GetFunctions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintParser_GetFunctions_Statics::BlueprintParser_eventGetFunctions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintParser_GetFunctions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintParser_GetFunctions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintParser_GetFunctions_Statics::BlueprintParser_eventGetFunctions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintParser_GetFunctions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintParser_GetFunctions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintParser::execGetFunctions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetFunctions();
	P_NATIVE_END;
}
// End Class UBlueprintParser Function GetFunctions

// Begin Class UBlueprintParser Function GetNodeConnections
struct Z_Construct_UFunction_UBlueprintParser_GetNodeConnections_Statics
{
	struct BlueprintParser_eventGetNodeConnections_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blueprint Parser" },
		{ "ModuleRelativePath", "BlueprintParser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintParser_GetNodeConnections_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintParser_GetNodeConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintParser_eventGetNodeConnections_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintParser_GetNodeConnections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintParser_GetNodeConnections_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintParser_GetNodeConnections_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintParser_GetNodeConnections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintParser_GetNodeConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintParser, nullptr, "GetNodeConnections", nullptr, nullptr, Z_Construct_UFunction_UBlueprintParser_GetNodeConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintParser_GetNodeConnections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintParser_GetNodeConnections_Statics::BlueprintParser_eventGetNodeConnections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintParser_GetNodeConnections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintParser_GetNodeConnections_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintParser_GetNodeConnections_Statics::BlueprintParser_eventGetNodeConnections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintParser_GetNodeConnections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintParser_GetNodeConnections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintParser::execGetNodeConnections)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetNodeConnections();
	P_NATIVE_END;
}
// End Class UBlueprintParser Function GetNodeConnections

// Begin Class UBlueprintParser Function GetVariables
struct Z_Construct_UFunction_UBlueprintParser_GetVariables_Statics
{
	struct BlueprintParser_eventGetVariables_Parms
	{
		TMap<FString,FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blueprint Parser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe8\xa7\xa3\xe6\x9e\x90\xe7\xbb\x93\xe6\x9e\x9c\xef\xbc\x88\xe5\x8f\x98\xe9\x87\x8f\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "BlueprintParser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\xa7\xa3\xe6\x9e\x90\xe7\xbb\x93\xe6\x9e\x9c\xef\xbc\x88\xe5\x8f\x98\xe9\x87\x8f\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintParser_GetVariables_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintParser_GetVariables_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintParser_GetVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintParser_eventGetVariables_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintParser_GetVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintParser_GetVariables_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintParser_GetVariables_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintParser_GetVariables_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintParser_GetVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintParser_GetVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintParser, nullptr, "GetVariables", nullptr, nullptr, Z_Construct_UFunction_UBlueprintParser_GetVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintParser_GetVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintParser_GetVariables_Statics::BlueprintParser_eventGetVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintParser_GetVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintParser_GetVariables_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintParser_GetVariables_Statics::BlueprintParser_eventGetVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintParser_GetVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintParser_GetVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintParser::execGetVariables)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetVariables();
	P_NATIVE_END;
}
// End Class UBlueprintParser Function GetVariables

// Begin Class UBlueprintParser Function ParseBlueprint
struct Z_Construct_UFunction_UBlueprintParser_ParseBlueprint_Statics
{
	struct BlueprintParser_eventParseBlueprint_Parms
	{
		FString BlueprintPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blueprint Parser" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb8\xbb\xe8\xa7\xa3\xe6\x9e\x90\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x88\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "BlueprintParser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb\xe8\xa7\xa3\xe6\x9e\x90\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x88\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintParser_ParseBlueprint_Statics::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintParser_eventParseBlueprint_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPath_MetaData), NewProp_BlueprintPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintParser_ParseBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintParser_ParseBlueprint_Statics::NewProp_BlueprintPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintParser_ParseBlueprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintParser_ParseBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintParser, nullptr, "ParseBlueprint", nullptr, nullptr, Z_Construct_UFunction_UBlueprintParser_ParseBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintParser_ParseBlueprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintParser_ParseBlueprint_Statics::BlueprintParser_eventParseBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintParser_ParseBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintParser_ParseBlueprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintParser_ParseBlueprint_Statics::BlueprintParser_eventParseBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintParser_ParseBlueprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintParser_ParseBlueprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintParser::execParseBlueprint)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ParseBlueprint(Z_Param_BlueprintPath);
	P_NATIVE_END;
}
// End Class UBlueprintParser Function ParseBlueprint

// Begin Class UBlueprintParser
void UBlueprintParser::StaticRegisterNativesUBlueprintParser()
{
	UClass* Class = UBlueprintParser::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFunctions", &UBlueprintParser::execGetFunctions },
		{ "GetNodeConnections", &UBlueprintParser::execGetNodeConnections },
		{ "GetVariables", &UBlueprintParser::execGetVariables },
		{ "ParseBlueprint", &UBlueprintParser::execParseBlueprint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintParser);
UClass* Z_Construct_UClass_UBlueprintParser_NoRegister()
{
	return UBlueprintParser::StaticClass();
}
struct Z_Construct_UClass_UBlueprintParser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintParser.h" },
		{ "ModuleRelativePath", "BlueprintParser.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintParser_GetFunctions, "GetFunctions" }, // 4192259896
		{ &Z_Construct_UFunction_UBlueprintParser_GetNodeConnections, "GetNodeConnections" }, // 970919217
		{ &Z_Construct_UFunction_UBlueprintParser_GetVariables, "GetVariables" }, // 2471900633
		{ &Z_Construct_UFunction_UBlueprintParser_ParseBlueprint, "ParseBlueprint" }, // 3814005077
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintParser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintParser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintParser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintParser_Statics::ClassParams = {
	&UBlueprintParser::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintParser_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintParser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintParser()
{
	if (!Z_Registration_Info_UClass_UBlueprintParser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintParser.OuterSingleton, Z_Construct_UClass_UBlueprintParser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintParser.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UBlueprintParser>()
{
	return UBlueprintParser::StaticClass();
}
UBlueprintParser::UBlueprintParser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintParser);
UBlueprintParser::~UBlueprintParser() {}
// End Class UBlueprintParser

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintParser_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintParser, UBlueprintParser::StaticClass, TEXT("UBlueprintParser"), &Z_Registration_Info_UClass_UBlueprintParser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintParser), 1083582671U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintParser_h_2096438200(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintParser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintParser_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
