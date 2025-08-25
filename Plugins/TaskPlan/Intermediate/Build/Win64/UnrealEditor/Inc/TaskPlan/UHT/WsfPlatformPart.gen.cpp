// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/PlatformPart/WsfPlatformPart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWsfPlatformPart() {}

// Begin Cross Module References
TASKPLAN_API UClass* Z_Construct_UClass_UWsfObject();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfPlatformPart();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfPlatformPart_NoRegister();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFAuaData();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFPlatformPart();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin ScriptStruct FFAuaData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAuaData;
class UScriptStruct* FFAuaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAuaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAuaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFAuaData, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("FAuaData"));
	}
	return Z_Registration_Info_UScriptStruct_FAuaData.OuterSingleton;
}
template<> TASKPLAN_API UScriptStruct* StaticStruct<FFAuaData>()
{
	return FFAuaData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFAuaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFAuaData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFAuaData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	&NewStructOps,
	"FAuaData",
	nullptr,
	0,
	sizeof(FFAuaData),
	alignof(FFAuaData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFAuaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFAuaData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFAuaData()
{
	if (!Z_Registration_Info_UScriptStruct_FAuaData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAuaData.InnerSingleton, Z_Construct_UScriptStruct_FFAuaData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAuaData.InnerSingleton;
}
// End ScriptStruct FFAuaData

// Begin ScriptStruct FFPlatformPart
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPlatformPart;
class UScriptStruct* FFPlatformPart::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPlatformPart.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPlatformPart.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFPlatformPart, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("FPlatformPart"));
	}
	return Z_Registration_Info_UScriptStruct_FPlatformPart.OuterSingleton;
}
template<> TASKPLAN_API UScriptStruct* StaticStruct<FFPlatformPart>()
{
	return FFPlatformPart::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFPlatformPart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_automatic_recovery_time_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aux_data_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_clear_categories_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_critical_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_non_critical_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damage_factor_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_clear_internal_links_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_internal_link_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_processor_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_debug_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_no_debug_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_debug_level_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_group_join_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_group_leave_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_is_a_type_of_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_broken_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_off_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_on_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_operational_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_non_operational_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_restorable_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_non_restorable_MetaData[] = {
		{ "Category", "WsfPlatformPart" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_automatic_recovery_time;
	static const UECodeGen_Private::FStructPropertyParams NewProp_aux_data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_category;
	static const UECodeGen_Private::FIntPropertyParams NewProp_clear_categories;
	static const UECodeGen_Private::FIntPropertyParams NewProp_critical;
	static const UECodeGen_Private::FIntPropertyParams NewProp_non_critical;
	static const UECodeGen_Private::FIntPropertyParams NewProp_damage_factor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_clear_internal_links;
	static const UECodeGen_Private::FIntPropertyParams NewProp_internal_link;
	static const UECodeGen_Private::FIntPropertyParams NewProp_processor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_debug;
	static const UECodeGen_Private::FIntPropertyParams NewProp_no_debug;
	static const UECodeGen_Private::FIntPropertyParams NewProp_debug_level;
	static const UECodeGen_Private::FIntPropertyParams NewProp_group_join;
	static const UECodeGen_Private::FIntPropertyParams NewProp_group_leave;
	static const UECodeGen_Private::FIntPropertyParams NewProp_is_a_type_of;
	static const UECodeGen_Private::FIntPropertyParams NewProp_broken;
	static const UECodeGen_Private::FIntPropertyParams NewProp_off;
	static const UECodeGen_Private::FIntPropertyParams NewProp_on;
	static const UECodeGen_Private::FIntPropertyParams NewProp_operational;
	static const UECodeGen_Private::FIntPropertyParams NewProp_non_operational;
	static const UECodeGen_Private::FIntPropertyParams NewProp_restorable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_non_restorable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFPlatformPart>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_automatic_recovery_time = { "automatic_recovery_time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, automatic_recovery_time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_automatic_recovery_time_MetaData), NewProp_automatic_recovery_time_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_aux_data = { "aux_data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, aux_data), Z_Construct_UScriptStruct_FFAuaData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aux_data_MetaData), NewProp_aux_data_MetaData) }; // 179985218
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_category_MetaData), NewProp_category_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_clear_categories = { "clear_categories", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, clear_categories), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_clear_categories_MetaData), NewProp_clear_categories_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_critical = { "critical", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, critical), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_critical_MetaData), NewProp_critical_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_non_critical = { "non_critical", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, non_critical), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_non_critical_MetaData), NewProp_non_critical_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_damage_factor = { "damage_factor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, damage_factor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damage_factor_MetaData), NewProp_damage_factor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_clear_internal_links = { "clear_internal_links", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, clear_internal_links), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_clear_internal_links_MetaData), NewProp_clear_internal_links_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_internal_link = { "internal_link", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, internal_link), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_internal_link_MetaData), NewProp_internal_link_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_processor = { "processor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, processor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_processor_MetaData), NewProp_processor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_debug = { "debug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, debug), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_debug_MetaData), NewProp_debug_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_no_debug = { "no_debug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, no_debug), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_no_debug_MetaData), NewProp_no_debug_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_debug_level = { "debug_level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, debug_level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_debug_level_MetaData), NewProp_debug_level_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_group_join = { "group_join", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, group_join), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_group_join_MetaData), NewProp_group_join_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_group_leave = { "group_leave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, group_leave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_group_leave_MetaData), NewProp_group_leave_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_is_a_type_of = { "is_a_type_of", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, is_a_type_of), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_is_a_type_of_MetaData), NewProp_is_a_type_of_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_broken = { "broken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, broken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_broken_MetaData), NewProp_broken_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_off = { "off", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, off), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_off_MetaData), NewProp_off_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_on = { "on", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, on), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_on_MetaData), NewProp_on_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_operational = { "operational", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, operational), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_operational_MetaData), NewProp_operational_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_non_operational = { "non_operational", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, non_operational), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_non_operational_MetaData), NewProp_non_operational_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_restorable = { "restorable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, restorable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_restorable_MetaData), NewProp_restorable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_non_restorable = { "non_restorable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatformPart, non_restorable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_non_restorable_MetaData), NewProp_non_restorable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFPlatformPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_automatic_recovery_time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_aux_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_clear_categories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_critical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_non_critical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_damage_factor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_clear_internal_links,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_internal_link,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_processor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_debug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_no_debug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_debug_level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_group_join,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_group_leave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_is_a_type_of,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_broken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_off,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_on,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_operational,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_non_operational,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_restorable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewProp_non_restorable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPlatformPart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFPlatformPart_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	&NewStructOps,
	"FPlatformPart",
	Z_Construct_UScriptStruct_FFPlatformPart_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPlatformPart_Statics::PropPointers),
	sizeof(FFPlatformPart),
	alignof(FFPlatformPart),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPlatformPart_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFPlatformPart_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFPlatformPart()
{
	if (!Z_Registration_Info_UScriptStruct_FPlatformPart.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPlatformPart.InnerSingleton, Z_Construct_UScriptStruct_FFPlatformPart_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPlatformPart.InnerSingleton;
}
// End ScriptStruct FFPlatformPart

// Begin Class UWsfPlatformPart
void UWsfPlatformPart::StaticRegisterNativesUWsfPlatformPart()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWsfPlatformPart);
UClass* Z_Construct_UClass_UWsfPlatformPart_NoRegister()
{
	return UWsfPlatformPart::StaticClass();
}
struct Z_Construct_UClass_UWsfPlatformPart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlatformPart/WsfPlatformPart.h" },
		{ "ModuleRelativePath", "PlatformPart/WsfPlatformPart.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWsfPlatformPart>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWsfPlatformPart_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWsfObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfPlatformPart_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWsfPlatformPart_Statics::ClassParams = {
	&UWsfPlatformPart::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfPlatformPart_Statics::Class_MetaDataParams), Z_Construct_UClass_UWsfPlatformPart_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWsfPlatformPart()
{
	if (!Z_Registration_Info_UClass_UWsfPlatformPart.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWsfPlatformPart.OuterSingleton, Z_Construct_UClass_UWsfPlatformPart_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWsfPlatformPart.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UWsfPlatformPart>()
{
	return UWsfPlatformPart::StaticClass();
}
UWsfPlatformPart::UWsfPlatformPart() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWsfPlatformPart);
UWsfPlatformPart::~UWsfPlatformPart() {}
// End Class UWsfPlatformPart

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_WsfPlatformPart_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFAuaData::StaticStruct, Z_Construct_UScriptStruct_FFAuaData_Statics::NewStructOps, TEXT("FAuaData"), &Z_Registration_Info_UScriptStruct_FAuaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFAuaData), 179985218U) },
		{ FFPlatformPart::StaticStruct, Z_Construct_UScriptStruct_FFPlatformPart_Statics::NewStructOps, TEXT("FPlatformPart"), &Z_Registration_Info_UScriptStruct_FPlatformPart, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFPlatformPart), 1482664585U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWsfPlatformPart, UWsfPlatformPart::StaticClass, TEXT("UWsfPlatformPart"), &Z_Registration_Info_UClass_UWsfPlatformPart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWsfPlatformPart), 3684582473U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_WsfPlatformPart_h_1637742667(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_WsfPlatformPart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_WsfPlatformPart_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_WsfPlatformPart_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_WsfPlatformPart_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
