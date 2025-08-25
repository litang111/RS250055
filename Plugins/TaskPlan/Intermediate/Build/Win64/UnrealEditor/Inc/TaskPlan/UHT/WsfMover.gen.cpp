// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/PlatformPart/Mover/WsfMover.h"
#include "TaskPlan/PlatformPart/WsfPlatformPart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWsfMover() {}

// Begin Cross Module References
TASKPLAN_API UClass* Z_Construct_UClass_UWsfMover();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfMover_NoRegister();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfPlatformPart();
TASKPLAN_API UEnum* Z_Construct_UEnum_TaskPlan_EMover();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFPlatformPart();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFWsfMover();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin ScriptStruct FFWsfMover
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWsfMover;
class UScriptStruct* FFWsfMover::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWsfMover.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWsfMover.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFWsfMover, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("FWsfMover"));
	}
	return Z_Registration_Info_UScriptStruct_FWsfMover.OuterSingleton;
}
template<> TASKPLAN_API UScriptStruct* StaticStruct<FFWsfMover>()
{
	return FFWsfMover::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFWsfMover_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//file:///E:/Project/RS250055/Refproject/AFSim/am-2.9.0-win64/documentation/html/docs/mover.html#mover\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfMover.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "file:E:/Project/RS250055/Refproject/AFSim/am-2.9.0-win64/documentation/html/docs/mover.html#mover" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformPart_MetaData[] = {
		{ "Category", "WsfMover" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_update_interval_MetaData[] = {
		{ "Category", "WsfMover" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_update_time_tolerance_MetaData[] = {
		{ "Category", "WsfMover" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfMover.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformPart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_update_interval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_update_time_tolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFWsfMover>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFWsfMover_Statics::NewProp_PlatformPart = { "PlatformPart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfMover, PlatformPart), Z_Construct_UScriptStruct_FFPlatformPart, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformPart_MetaData), NewProp_PlatformPart_MetaData) }; // 1482664585
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfMover_Statics::NewProp_update_interval = { "update_interval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfMover, update_interval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_update_interval_MetaData), NewProp_update_interval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfMover_Statics::NewProp_update_time_tolerance = { "update_time_tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfMover, update_time_tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_update_time_tolerance_MetaData), NewProp_update_time_tolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFWsfMover_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfMover_Statics::NewProp_PlatformPart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfMover_Statics::NewProp_update_interval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfMover_Statics::NewProp_update_time_tolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfMover_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFWsfMover_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	&NewStructOps,
	"FWsfMover",
	Z_Construct_UScriptStruct_FFWsfMover_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfMover_Statics::PropPointers),
	sizeof(FFWsfMover),
	alignof(FFWsfMover),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfMover_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFWsfMover_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFWsfMover()
{
	if (!Z_Registration_Info_UScriptStruct_FWsfMover.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWsfMover.InnerSingleton, Z_Construct_UScriptStruct_FFWsfMover_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWsfMover.InnerSingleton;
}
// End ScriptStruct FFWsfMover

// Begin Enum EMover
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMover;
static UEnum* EMover_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMover.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMover.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TaskPlan_EMover, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("EMover"));
	}
	return Z_Registration_Info_UEnum_EMover.OuterSingleton;
}
template<> TASKPLAN_API UEnum* StaticEnum<EMover>()
{
	return EMover_StaticEnum();
}
struct Z_Construct_UEnum_TaskPlan_EMover_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfMover.h" },
		{ "WSF_AIR_MOVER.Name", "EMover::WSF_AIR_MOVER" },
		{ "WSF_GROUND_MOVER.Name", "EMover::WSF_GROUND_MOVER" },
		{ "WSF_INTEGRATING_SPACE_MOVER.Name", "EMover::WSF_INTEGRATING_SPACE_MOVER" },
		{ "WSF_NORAD_SPACE_MOVER.Name", "EMover::WSF_NORAD_SPACE_MOVER" },
		{ "WSF_SPACE_MOVER.Name", "EMover::WSF_SPACE_MOVER" },
		{ "WSF_SURFACE_MOVER.Name", "EMover::WSF_SURFACE_MOVER" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMover::WSF_AIR_MOVER", (int64)EMover::WSF_AIR_MOVER },
		{ "EMover::WSF_GROUND_MOVER", (int64)EMover::WSF_GROUND_MOVER },
		{ "EMover::WSF_SURFACE_MOVER", (int64)EMover::WSF_SURFACE_MOVER },
		{ "EMover::WSF_SPACE_MOVER", (int64)EMover::WSF_SPACE_MOVER },
		{ "EMover::WSF_NORAD_SPACE_MOVER", (int64)EMover::WSF_NORAD_SPACE_MOVER },
		{ "EMover::WSF_INTEGRATING_SPACE_MOVER", (int64)EMover::WSF_INTEGRATING_SPACE_MOVER },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TaskPlan_EMover_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	"EMover",
	"EMover",
	Z_Construct_UEnum_TaskPlan_EMover_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TaskPlan_EMover_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TaskPlan_EMover_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TaskPlan_EMover_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TaskPlan_EMover()
{
	if (!Z_Registration_Info_UEnum_EMover.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMover.InnerSingleton, Z_Construct_UEnum_TaskPlan_EMover_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMover.InnerSingleton;
}
// End Enum EMover

// Begin Class UWsfMover Function SetMover
struct Z_Construct_UFunction_UWsfMover_SetMover_Statics
{
	struct WsfMover_eventSetMover_Parms
	{
		EMover aMover;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfPlatform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\x98\xe9\x87\x8f\n//Sets the mover\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfMover.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\x98\xe9\x87\x8f\nSets the mover" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_aMover_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_aMover;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWsfMover_SetMover_Statics::NewProp_aMover_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWsfMover_SetMover_Statics::NewProp_aMover = { "aMover", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfMover_eventSetMover_Parms, aMover), Z_Construct_UEnum_TaskPlan_EMover, METADATA_PARAMS(0, nullptr) }; // 3394293664
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfMover_SetMover_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfMover_eventSetMover_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfMover_SetMover_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfMover_SetMover_Statics::NewProp_aMover_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfMover_SetMover_Statics::NewProp_aMover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfMover_SetMover_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfMover_SetMover_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfMover_SetMover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfMover, nullptr, "SetMover", nullptr, nullptr, Z_Construct_UFunction_UWsfMover_SetMover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfMover_SetMover_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfMover_SetMover_Statics::WsfMover_eventSetMover_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfMover_SetMover_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfMover_SetMover_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfMover_SetMover_Statics::WsfMover_eventSetMover_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfMover_SetMover()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfMover_SetMover_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfMover::execSetMover)
{
	P_GET_ENUM(EMover,Z_Param_aMover);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SetMover(EMover(Z_Param_aMover));
	P_NATIVE_END;
}
// End Class UWsfMover Function SetMover

// Begin Class UWsfMover
void UWsfMover::StaticRegisterNativesUWsfMover()
{
	UClass* Class = UWsfMover::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetMover", &UWsfMover::execSetMover },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWsfMover);
UClass* Z_Construct_UClass_UWsfMover_NoRegister()
{
	return UWsfMover::StaticClass();
}
struct Z_Construct_UClass_UWsfMover_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformPart/Mover/WsfMover.h" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoverParams_MetaData[] = {
		{ "Category", "WSF_Mover" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfMover.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoverParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWsfMover_SetMover, "SetMover" }, // 893744233
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWsfMover>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWsfMover_Statics::NewProp_MoverParams = { "MoverParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWsfMover, MoverParams), Z_Construct_UScriptStruct_FFWsfMover, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoverParams_MetaData), NewProp_MoverParams_MetaData) }; // 2628519974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWsfMover_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWsfMover_Statics::NewProp_MoverParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfMover_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWsfMover_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWsfPlatformPart,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfMover_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWsfMover_Statics::ClassParams = {
	&UWsfMover::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWsfMover_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWsfMover_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfMover_Statics::Class_MetaDataParams), Z_Construct_UClass_UWsfMover_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWsfMover()
{
	if (!Z_Registration_Info_UClass_UWsfMover.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWsfMover.OuterSingleton, Z_Construct_UClass_UWsfMover_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWsfMover.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UWsfMover>()
{
	return UWsfMover::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWsfMover);
UWsfMover::~UWsfMover() {}
// End Class UWsfMover

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMover_StaticEnum, TEXT("EMover"), &Z_Registration_Info_UEnum_EMover, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3394293664U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFWsfMover::StaticStruct, Z_Construct_UScriptStruct_FFWsfMover_Statics::NewStructOps, TEXT("FWsfMover"), &Z_Registration_Info_UScriptStruct_FWsfMover, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFWsfMover), 2628519974U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWsfMover, UWsfMover::StaticClass, TEXT("UWsfMover"), &Z_Registration_Info_UClass_UWsfMover, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWsfMover), 158212955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h_3233270181(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
