// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/Platform/WsfPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWsfPlatform() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfLocalTrackList_NoRegister();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfMover_NoRegister();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfObject();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfPlatform();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfPlatform_NoRegister();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfWeapon_NoRegister();
TASKPLAN_API UEnum* Z_Construct_UEnum_TaskPlan_EIcon();
TASKPLAN_API UEnum* Z_Construct_UEnum_TaskPlan_ESide();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFPlatform();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin Enum EIcon
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIcon;
static UEnum* EIcon_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIcon.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIcon.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TaskPlan_EIcon, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("EIcon"));
	}
	return Z_Registration_Info_UEnum_EIcon.OuterSingleton;
}
template<> TASKPLAN_API UEnum* StaticEnum<EIcon>()
{
	return EIcon_StaticEnum();
}
struct Z_Construct_UEnum_TaskPlan_EIcon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bullseye.DisplayName", "Bullseye" },
		{ "Bullseye.Name", "EIcon::Bullseye" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
		{ "Scud_Launcher.DisplayName", "Scud Launcher" },
		{ "Scud_Launcher.Name", "EIcon::Scud_Launcher" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIcon::Scud_Launcher", (int64)EIcon::Scud_Launcher },
		{ "EIcon::Bullseye", (int64)EIcon::Bullseye },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TaskPlan_EIcon_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	"EIcon",
	"EIcon",
	Z_Construct_UEnum_TaskPlan_EIcon_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TaskPlan_EIcon_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TaskPlan_EIcon_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TaskPlan_EIcon_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TaskPlan_EIcon()
{
	if (!Z_Registration_Info_UEnum_EIcon.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIcon.InnerSingleton, Z_Construct_UEnum_TaskPlan_EIcon_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIcon.InnerSingleton;
}
// End Enum EIcon

// Begin Enum ESide
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESide;
static UEnum* ESide_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESide.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TaskPlan_ESide, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("ESide"));
	}
	return Z_Registration_Info_UEnum_ESide.OuterSingleton;
}
template<> TASKPLAN_API UEnum* StaticEnum<ESide>()
{
	return ESide_StaticEnum();
}
struct Z_Construct_UEnum_TaskPlan_ESide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "blue.Name", "ESide::blue" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
		{ "red.Name", "ESide::red" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESide::red", (int64)ESide::red },
		{ "ESide::blue", (int64)ESide::blue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TaskPlan_ESide_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	"ESide",
	"ESide",
	Z_Construct_UEnum_TaskPlan_ESide_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TaskPlan_ESide_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TaskPlan_ESide_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TaskPlan_ESide_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TaskPlan_ESide()
{
	if (!Z_Registration_Info_UEnum_ESide.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESide.InnerSingleton, Z_Construct_UEnum_TaskPlan_ESide_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESide.InnerSingleton;
}
// End Enum ESide

// Begin ScriptStruct FFPlatform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPlatform;
class UScriptStruct* FFPlatform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPlatform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPlatform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFPlatform, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("FPlatform"));
	}
	return Z_Registration_Info_UScriptStruct_FPlatform.OuterSingleton;
}
template<> TASKPLAN_API UScriptStruct* StaticStruct<FFPlatform>()
{
	return FFPlatform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_acoustic_signature_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_altitude_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aux_data_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_clear_categories_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_commander_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_command_chain_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_concealment_factor_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_creation_time_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_empty_mass_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fuel_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fuel_mass_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_geo_point_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_group_join_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_group_leave_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_heading_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_height_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconName_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_indestructible_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_infrared_signature_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inherent_contrast_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_initial_damage_factor_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_length_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_marking_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mgrs_coordinate_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_add_mover_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mover_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_navigation_errors_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_nutation_update_interval_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_on_broken_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_optical_reflectivity_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_optical_signature_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_payload_mass_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_precession_nutation_update_interval_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_radar_signature_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_route_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_side_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spatial_domain_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_track_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_track_manager_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_use_zone_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_width_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_zone_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_zone_set_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weapon_effects_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weapon_effects_type_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_acoustic_signature;
	static const UECodeGen_Private::FIntPropertyParams NewProp_altitude;
	static const UECodeGen_Private::FIntPropertyParams NewProp_aux_data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_category;
	static const UECodeGen_Private::FIntPropertyParams NewProp_clear_categories;
	static const UECodeGen_Private::FIntPropertyParams NewProp_commander;
	static const UECodeGen_Private::FIntPropertyParams NewProp_command_chain;
	static const UECodeGen_Private::FIntPropertyParams NewProp_concealment_factor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_creation_time;
	static const UECodeGen_Private::FIntPropertyParams NewProp_empty_mass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_fuel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_fuel_mass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_geo_point;
	static const UECodeGen_Private::FIntPropertyParams NewProp_group_join;
	static const UECodeGen_Private::FIntPropertyParams NewProp_group_leave;
	static const UECodeGen_Private::FIntPropertyParams NewProp_heading;
	static const UECodeGen_Private::FIntPropertyParams NewProp_height;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IconName_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IconName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_indestructible;
	static const UECodeGen_Private::FIntPropertyParams NewProp_infrared_signature;
	static const UECodeGen_Private::FIntPropertyParams NewProp_inherent_contrast;
	static const UECodeGen_Private::FIntPropertyParams NewProp_initial_damage_factor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_length;
	static const UECodeGen_Private::FIntPropertyParams NewProp_marking;
	static const UECodeGen_Private::FIntPropertyParams NewProp_mgrs_coordinate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_add_mover;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mover;
	static const UECodeGen_Private::FIntPropertyParams NewProp_navigation_errors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_nutation_update_interval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_on_broken;
	static const UECodeGen_Private::FIntPropertyParams NewProp_optical_reflectivity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_optical_signature;
	static const UECodeGen_Private::FIntPropertyParams NewProp_payload_mass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_precession_nutation_update_interval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_radar_signature;
	static const UECodeGen_Private::FIntPropertyParams NewProp_route;
	static const UECodeGen_Private::FIntPropertyParams NewProp_side;
	static const UECodeGen_Private::FIntPropertyParams NewProp_spatial_domain;
	static const UECodeGen_Private::FIntPropertyParams NewProp_component;
	static const UECodeGen_Private::FIntPropertyParams NewProp_track;
	static const UECodeGen_Private::FIntPropertyParams NewProp_track_manager;
	static const UECodeGen_Private::FIntPropertyParams NewProp_use_zone;
	static const UECodeGen_Private::FIntPropertyParams NewProp_width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_zone;
	static const UECodeGen_Private::FIntPropertyParams NewProp_zone_set;
	static const UECodeGen_Private::FIntPropertyParams NewProp_weapon_effects;
	static const UECodeGen_Private::FIntPropertyParams NewProp_weapon_effects_type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFPlatform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_acoustic_signature = { "acoustic_signature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, acoustic_signature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_acoustic_signature_MetaData), NewProp_acoustic_signature_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_altitude = { "altitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, altitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_altitude_MetaData), NewProp_altitude_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_aux_data = { "aux_data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, aux_data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aux_data_MetaData), NewProp_aux_data_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_category_MetaData), NewProp_category_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_clear_categories = { "clear_categories", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, clear_categories), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_clear_categories_MetaData), NewProp_clear_categories_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_commander = { "commander", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, commander), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_commander_MetaData), NewProp_commander_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_command_chain = { "command_chain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, command_chain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_command_chain_MetaData), NewProp_command_chain_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_concealment_factor = { "concealment_factor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, concealment_factor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_concealment_factor_MetaData), NewProp_concealment_factor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_creation_time = { "creation_time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, creation_time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_creation_time_MetaData), NewProp_creation_time_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_empty_mass = { "empty_mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, empty_mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_empty_mass_MetaData), NewProp_empty_mass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_fuel = { "fuel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, fuel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fuel_MetaData), NewProp_fuel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_fuel_mass = { "fuel_mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, fuel_mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fuel_mass_MetaData), NewProp_fuel_mass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_geo_point = { "geo_point", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, geo_point), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_geo_point_MetaData), NewProp_geo_point_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_group_join = { "group_join", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, group_join), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_group_join_MetaData), NewProp_group_join_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_group_leave = { "group_leave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, group_leave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_group_leave_MetaData), NewProp_group_leave_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_heading = { "heading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, heading), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_heading_MetaData), NewProp_heading_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_height_MetaData), NewProp_height_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_IconName_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_IconName = { "IconName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, IconName), Z_Construct_UEnum_TaskPlan_EIcon, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconName_MetaData), NewProp_IconName_MetaData) }; // 2638291761
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_indestructible = { "indestructible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, indestructible), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_indestructible_MetaData), NewProp_indestructible_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_infrared_signature = { "infrared_signature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, infrared_signature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_infrared_signature_MetaData), NewProp_infrared_signature_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_inherent_contrast = { "inherent_contrast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, inherent_contrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inherent_contrast_MetaData), NewProp_inherent_contrast_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_initial_damage_factor = { "initial_damage_factor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, initial_damage_factor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_initial_damage_factor_MetaData), NewProp_initial_damage_factor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_length_MetaData), NewProp_length_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_marking = { "marking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, marking), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_marking_MetaData), NewProp_marking_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_mgrs_coordinate = { "mgrs_coordinate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, mgrs_coordinate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mgrs_coordinate_MetaData), NewProp_mgrs_coordinate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_add_mover = { "add_mover", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, add_mover), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_add_mover_MetaData), NewProp_add_mover_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_mover = { "mover", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, mover), Z_Construct_UClass_UWsfMover_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mover_MetaData), NewProp_mover_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_navigation_errors = { "navigation_errors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, navigation_errors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_navigation_errors_MetaData), NewProp_navigation_errors_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_nutation_update_interval = { "nutation_update_interval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, nutation_update_interval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_nutation_update_interval_MetaData), NewProp_nutation_update_interval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_on_broken = { "on_broken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, on_broken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_on_broken_MetaData), NewProp_on_broken_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_optical_reflectivity = { "optical_reflectivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, optical_reflectivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_optical_reflectivity_MetaData), NewProp_optical_reflectivity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_optical_signature = { "optical_signature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, optical_signature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_optical_signature_MetaData), NewProp_optical_signature_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_payload_mass = { "payload_mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, payload_mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_payload_mass_MetaData), NewProp_payload_mass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_position_MetaData), NewProp_position_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_precession_nutation_update_interval = { "precession_nutation_update_interval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, precession_nutation_update_interval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_precession_nutation_update_interval_MetaData), NewProp_precession_nutation_update_interval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_radar_signature = { "radar_signature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, radar_signature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_radar_signature_MetaData), NewProp_radar_signature_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_route = { "route", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, route), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_route_MetaData), NewProp_route_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_side = { "side", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, side), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_side_MetaData), NewProp_side_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_spatial_domain = { "spatial_domain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, spatial_domain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spatial_domain_MetaData), NewProp_spatial_domain_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, component), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_component_MetaData), NewProp_component_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_track = { "track", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, track), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_track_MetaData), NewProp_track_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_track_manager = { "track_manager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, track_manager), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_track_manager_MetaData), NewProp_track_manager_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_use_zone = { "use_zone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, use_zone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_use_zone_MetaData), NewProp_use_zone_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_width_MetaData), NewProp_width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_zone = { "zone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, zone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_zone_MetaData), NewProp_zone_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_zone_set = { "zone_set", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, zone_set), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_zone_set_MetaData), NewProp_zone_set_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_weapon_effects = { "weapon_effects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, weapon_effects), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weapon_effects_MetaData), NewProp_weapon_effects_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_weapon_effects_type = { "weapon_effects_type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFPlatform, weapon_effects_type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weapon_effects_type_MetaData), NewProp_weapon_effects_type_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_acoustic_signature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_altitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_aux_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_clear_categories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_commander,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_command_chain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_concealment_factor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_creation_time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_empty_mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_fuel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_fuel_mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_geo_point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_group_join,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_group_leave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_heading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_IconName_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_IconName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_indestructible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_infrared_signature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_inherent_contrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_initial_damage_factor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_length,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_marking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_mgrs_coordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_add_mover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_mover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_navigation_errors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_nutation_update_interval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_on_broken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_optical_reflectivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_optical_signature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_payload_mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_precession_nutation_update_interval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_radar_signature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_route,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_side,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_spatial_domain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_track,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_track_manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_use_zone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_zone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_zone_set,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_weapon_effects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFPlatform_Statics::NewProp_weapon_effects_type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFPlatform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	&NewStructOps,
	"FPlatform",
	Z_Construct_UScriptStruct_FFPlatform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPlatform_Statics::PropPointers),
	sizeof(FFPlatform),
	alignof(FFPlatform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFPlatform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFPlatform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFPlatform()
{
	if (!Z_Registration_Info_UScriptStruct_FPlatform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPlatform.InnerSingleton, Z_Construct_UScriptStruct_FFPlatform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPlatform.InnerSingleton;
}
// End ScriptStruct FFPlatform

// Begin Class UWsfPlatform Function bluePrintPrase
struct Z_Construct_UFunction_UWsfPlatform_bluePrintPrase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfPlatform" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_bluePrintPrase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "bluePrintPrase", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_bluePrintPrase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_bluePrintPrase_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWsfPlatform_bluePrintPrase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_bluePrintPrase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execbluePrintPrase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->bluePrintPrase();
	P_NATIVE_END;
}
// End Class UWsfPlatform Function bluePrintPrase

// Begin Class UWsfPlatform Function CreationTime
struct Z_Construct_UFunction_UWsfPlatform_CreationTime_Statics
{
	struct WsfPlatform_eventCreationTime_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfPlatform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the simulation time (in seconds); when the platform was created\n" },
#endif
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the simulation time (in seconds); when the platform was created" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UWsfPlatform_CreationTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfPlatform_eventCreationTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfPlatform_CreationTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_CreationTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_CreationTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_CreationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "CreationTime", nullptr, nullptr, Z_Construct_UFunction_UWsfPlatform_CreationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_CreationTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfPlatform_CreationTime_Statics::WsfPlatform_eventCreationTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_CreationTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_CreationTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfPlatform_CreationTime_Statics::WsfPlatform_eventCreationTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfPlatform_CreationTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_CreationTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execCreationTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->CreationTime();
	P_NATIVE_END;
}
// End Class UWsfPlatform Function CreationTime

// Begin Class UWsfPlatform Function ExecuteGlobalScript
struct Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript_Statics
{
	struct WsfPlatform_eventExecuteGlobalScript_Parms
	{
		FString aScript;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfPlatform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Executes the script with the given name within the global context and returns true if successful\n// See WsfSimulationExecute for more methods to execute global scripts\n" },
#endif
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Executes the script with the given name within the global context and returns true if successful\nSee WsfSimulationExecute for more methods to execute global scripts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_aScript;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript_Statics::NewProp_aScript = { "aScript", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfPlatform_eventExecuteGlobalScript_Parms, aScript), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WsfPlatform_eventExecuteGlobalScript_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WsfPlatform_eventExecuteGlobalScript_Parms), &Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript_Statics::NewProp_aScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "ExecuteGlobalScript", nullptr, nullptr, Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript_Statics::WsfPlatform_eventExecuteGlobalScript_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript_Statics::WsfPlatform_eventExecuteGlobalScript_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execExecuteGlobalScript)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_aScript);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWsfPlatform::ExecuteGlobalScript(Z_Param_aScript);
	P_NATIVE_END;
}
// End Class UWsfPlatform Function ExecuteGlobalScript

// Begin Class UWsfPlatform Function getString
struct Z_Construct_UFunction_UWsfPlatform_getString_Statics
{
	struct WsfPlatform_eventgetString_Parms
	{
		FString str;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfPlatform" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_str;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfPlatform_getString_Statics::NewProp_str = { "str", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfPlatform_eventgetString_Parms, str), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfPlatform_getString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_getString_Statics::NewProp_str,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_getString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_getString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "getString", nullptr, nullptr, Z_Construct_UFunction_UWsfPlatform_getString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_getString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfPlatform_getString_Statics::WsfPlatform_eventgetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_getString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_getString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfPlatform_getString_Statics::WsfPlatform_eventgetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfPlatform_getString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_getString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execgetString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_str);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->getString(Z_Param_str);
	P_NATIVE_END;
}
// End Class UWsfPlatform Function getString

// Begin Class UWsfPlatform Function Icon
struct Z_Construct_UFunction_UWsfPlatform_Icon_Statics
{
	struct WsfPlatform_eventIcon_Parms
	{
		EIcon ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfPlatform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the platform\xe2\x80\x99s icon\n" },
#endif
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the platform\xe2\x80\x99s icon" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWsfPlatform_Icon_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWsfPlatform_Icon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfPlatform_eventIcon_Parms, ReturnValue), Z_Construct_UEnum_TaskPlan_EIcon, METADATA_PARAMS(0, nullptr) }; // 2638291761
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfPlatform_Icon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_Icon_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_Icon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_Icon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_Icon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "Icon", nullptr, nullptr, Z_Construct_UFunction_UWsfPlatform_Icon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_Icon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfPlatform_Icon_Statics::WsfPlatform_eventIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_Icon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_Icon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfPlatform_Icon_Statics::WsfPlatform_eventIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfPlatform_Icon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_Icon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execIcon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EIcon*)Z_Param__Result=P_THIS->Icon();
	P_NATIVE_END;
}
// End Class UWsfPlatform Function Icon

// Begin Class UWsfPlatform Function Index
struct Z_Construct_UFunction_UWsfPlatform_Index_Statics
{
	struct WsfPlatform_eventIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfPlatform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// General Methods\n// Returns the unique index of the platform within the simulation\n// A platform\xe2\x80\x99s index is constant, and a given index will never be reused during the course of the simulation\n" },
#endif
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "General Methods\nReturns the unique index of the platform within the simulation\nA platform\xe2\x80\x99s index is constant, and a given index will never be reused during the course of the simulation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWsfPlatform_Index_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfPlatform_eventIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfPlatform_Index_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_Index_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_Index_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_Index_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "Index", nullptr, nullptr, Z_Construct_UFunction_UWsfPlatform_Index_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_Index_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfPlatform_Index_Statics::WsfPlatform_eventIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_Index_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_Index_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfPlatform_Index_Statics::WsfPlatform_eventIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfPlatform_Index()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_Index_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Index();
	P_NATIVE_END;
}
// End Class UWsfPlatform Function Index

// Begin Class UWsfPlatform Function MasterTrackList
struct Z_Construct_UFunction_UWsfPlatform_MasterTrackList_Statics
{
	struct WsfPlatform_eventMasterTrackList_Parms
	{
		UWsfLocalTrackList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfPlatform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \x09//\n// \x09// //Returns whether the platform is being controlled externally to the local simulation (as with an external dis_interface entity);\n// \x09""bool IsExternallyControlled();\n// \x09//\n// \x09// //Detonates the platform The value of \xe2\x80\x9c""aResult\xe2\x80\x9d must be one of the following or the detonation will be treated as a \xe2\x80\x9c""dud\xe2\x80\x9d:\n// \x09void Detonate(EResult aResult);\n// \x09//\n// \x09// //Schedules the platform for deletion from the simulation Since the deletion will occur after the current script context returns,\n// \x09// //any remaining commands in the script context will be executed\n// \x09void DeletePlatform();\n// \x09//\n// \x09//\n// \x09// //Command Chain Methods\n// \x09// //Returns the platform\xe2\x80\x99s commander in the default command chain (first form);\n// \x09// //or the specified command chain (second form);\n// \x09 WsfPlatform Commander();\n// \x09 WsfPlatform Commander(FString aCommandChainName);\n// \x09\n// \x09// //Sets the platform\xe2\x80\x99s commander in the default command chain (first form); or the specified command chain (second form);\n// \x09// //There is one issue with using this method Any links to a commander that transmit over a comm devices that uses\n// \x09// //the <local:slave> network_name will not work So if you plan on using this method to change a platform\xe2\x80\x99s commander during run-time,\n// \x09// //then do NOT use the <local:slave> network_name on the platform\xe2\x80\x99s comm devices\n// \x09void SetCommander(WsfPlatform aPlatform);\n// \x09void SetCommander(FString aCommandChainName, WsfPlatform aPlatform);\n// \x09//\n// \x09// //Returns the platform\xe2\x80\x99s commander\xe2\x80\x99s name in the default command chain (first form);\n// \x09// //or the specified command chain (second form);\n// \x09""FString CommanderName();\n// \x09""FString CommanderName(FString aCommandChainName);\n// \x09//\n// \x09// //Returns a platform list of peers in the default command chain (first form);\n// \x09// //or the specified command chain (second form);\n// \x09WsfPlatformList Peers();\n// \x09WsfPlatformList Peers(FString aCommandChainName);\n// \x09//\n// \x09// //Returns a platform list of subordinates in the default command chain (first form);\n// \x09// //or the specified command chain (second form);\n// \x09WsfPlatformList Subordinates();\n// \x09WsfPlatformList Subordinates(FString aCommandChainName);\n// \x09// //Returns the command chain with the specified name\n// \x09WsfCommandChain CommandChain(FString aCommandChainName);\n// \x09//\n// \x09// //Returns the number of command chains to which this platform belongs\n// \x09int CommandChainCount();\n// \x09//\n// \x09//\n// \x09// //Returns the command chain at the specified index\n// \x09// //This must be in the range [0, CommandChainCount();-1]\n// \x09WsfCommandChain CommandChainEntry(int aIndex);\n//\n// \x09\n// \x09//Subsystem Methods\n// \x09\n// \x09// //Returns the platform\xe2\x80\x99s mover object\n// \x09WsfMover Mover();\n// \x09//\n// \x09// //Returns the platform\xe2\x80\x99s fuel object\n// \x09WsfFuel Fuel();\n// \x09//\n// \x09// //Retrieves the GPS availability state from the navigation_errors model See navigation_errors for more information\n// \x09// //Note: The return value is a large positive value if navigation_errors have not been defined\n// \x09int GPS_Status();\n// \x09//\n// \x09// //Sets the current GPS availability state ( navigation_errors for more information);\n// \x09// //The return value is true if the GPS status was changed\n// \x09// //The return value is false if the requested state is the same as the current state or if navigation_errors have not been defined\n// \x09// //Note: This has no effect if navigation_errors have not been defined\n// \x09""bool SetGPS_Status(int aGPS_Status);\n// \x09//\n// \x09// //Returns the WsfComm object with the given name\n// \x09WsfComm Comm(FString aName);\n// \x09//\n// \x09// //Returns the number of communication devices\n// \x09int CommCount();\n// \x09//\n// \x09// //Returns the WsfComm object at the given index\n// \x09// //Note: 0-based indexing applies\n// \x09WsfComm CommEntry(int aIndex);\n// \x09//\n// \x09//\n// \x09// //Returns the WsfCommRouter object with the given name\n// \x09WsfCommRouter Router(FString aName);\n// \x09//\n// \x09// //Returns the number of router objects\n// \x09int RouterCount();\n// \x09//\n// \x09// //Returns the WsfCommRouter object at the given index\n// \x09// //Note: 0-based indexing applies\n// \x09WsfCommRouter RouterEntry(int aIndex);\n// \x09//\n// \x09//\n// \x09// //Returns the WsfProcessor object with the given name\n// \x09WsfProcessor Processor(FString aName);\n// \x09//\n// \x09// //Returns the number of processor devices\n// \x09int ProcessorCount();\n// \x09//\n// \x09// //Returns the WsfProcessor object at the given index\n// \x09// //Note: 0-based indexing applies\n// \x09WsfProcessor ProcessorEntry(int aIndex);\n// \x09//\n// \x09//\n// \x09// //Returns the WsfSensor object with the given name\n// \x09WsfSensor Sensor(FString aName);\n// \x09// //Returns the number of sensor instances on this platform\n// \x09int SensorCount();\n// \x09//\n// \x09// //Returns the WsfSensor object at the given index\n// \x09// //Note: 0-based indexing applies\n// \x09WsfSensor SensorEntry(int aIndex);\n// \x09//\n// \x09// //Turns the communication device with the specified name on, returns true if successful\n// \x09""bool TurnCommOn(FString aName);\n// \x09//\n// \x09// //Turns the communication device with the specified name off, returns true if successful\n// \x09""bool TurnCommOff(FString aName);\n// \x09//\n// \x09// //Turns the processor device with the specified name on, returns true if successful\n// \x09""bool TurnProcessorOn(FString aName);\n// \x09//\n// \x09// //Turns the processor device with the specified name off, returns true if successful\n// \x09""bool TurnProcessorOff(FString aName);\n// \x09//\n// \x09// //Turns the sensor device with the specified name on, returns true if successful\n// \x09""bool TurnSensorOn(FString aName);\n// \x09//\n// \x09// //Turns the sensor device with the specified name off, returns true if successful\n// \x09""bool TurnSensorOff(FString aName);\n// \x09//\n// \x09// //Turns the router object with the specified name on, returns true if successful\n// \x09""bool TurnRouterOn(FString aName);\n// \x09//\n// \x09// //Turns the router object with the specified name off, returns true if successful\n// \x09""bool TurnRouterOff(FString aName);\n// \x09//\n// \x09// //Appearance Methods\n// \x09// //Returns the length, width and height of the platform (in meters);\n// \x09// //as defined by the length, {width and height commands\n// \x09// //The return value will be zero if it was not defined\n// \x09""double Length();\n// \x09""double Width();\n// \x09""double Height();\n// \x09//\n// \x09// //Returns the total mass (empty mass + fuel mass + payload mass);\n// \x09// //of the platform or one of the components (in kilograms);\n// \x09// //The masses may be defined directly using the empty_mass, fuel_mass and payload_mass,\n// \x09// //but the masses are sometimes defined in and maintained by the mover\n// \x09""double TotalMass();\n// \x09""double EmptyMass();\n// \x09""double FuelMass();\n// \x09""double PayloadMass();\n// \x09//\n// \x09// //Returns the platform\xe2\x80\x99s current 32-bit Appearance data as an integer excluding data for bits 3-4, 21 & 23\n// \x09// //(See Distributed Interactive Simulation (DIS); Entity Appearance field definitions);\n// \x09int Appearance();\n// \x09//\n// \x09// //Sets the platform\xe2\x80\x99s 32-bit Appearance data excluding data for bits 3-4, 21 & 23\n// \x09// //(See Distributed Interactive Simulation (DIS); Entity Appearance field definitions);\n// \x09// //Note: This capability allows for direct manipulation of the Entity State Appearance data being reported\n// \x09void SetAppearance(int aLeastSignificantBit, int aNumberOfBits, int aValue);\n// \x09//\n// \x09// //Returns the platform\xe2\x80\x99s current Concealment Factor\n// \x09""double ConcealmentFactor();\n// \x09//\n// \x09// //Sets the platform\xe2\x80\x99s concealment factor to a value within the range of [01], with 0 being visible and 1 being hidden\n// \x09// //This value is used to determine the Entity State Appearance bit 19 for land domain platforms only\n// \x09// //The SetAppearance function can also be used to set bit 19 directly\n// \x09void SetConcealmentFactor(double aConcealmentFactor);\n// \x09//\n// \x09// //Returns the platform\xe2\x80\x99s current damage level (factor);\n// \x09// //The return value is in the range of [01], with 0 being undamaged and 1 being fully damaged or destroyed\n// \x09""double DamageFactor();\n// \x09//\n// \x09// //Sets the platform\xe2\x80\x99s damage factor to a value within the range of [01], with 0 being undamaged and 1 being fully damaged or destroyed\n// \x09void SetDamageFactor(double aDamageFactor);\n// \x09//\n// \x09// //Sets the platform\xe2\x80\x99s trailing effect to the given integer value\n// \x09// //This value is used to set the Entity State Appearance bits 7-8 The SetAppearance function can also be used to set these bits directly\n// \x09void SetTrailingEffects(int aTrailingEffect);\n// \x09//\n// \x09// //Returns \xe2\x80\x98true\xe2\x80\x99 if the platform is indestructible\n// \x09// //A platform may be marked as indestructible in order prevent it from being destroyed\n// \x09// //When this value is set \xe2\x80\x98true\xe2\x80\x99, any applied damage accumulates in a logarithmically decaying fashion, so DamageFactor();\n// \x09// //, rather than returning an actual damage state, reflects an ever decreasing (but never reaching zero); probability of survival\n// \x09""bool Indestructible();\n// \x09//\n// \x09// //Sets the platform\xe2\x80\x99s indestructible attribute\n// \x09void SetIndestructible(bool aIsIndestructible);\n// \x09//\n// \x09// //Sets the platform\xe2\x80\x99s infrared, optical and radar signature state to the given state\n// \x09void SetSignatureState(FString aState);\n// \x09//\n// \x09// //Returns the current infrared signature state of the platform\n// \x09""FString InfraredSigState();\n// \x09//\n// \x09// //Sets the platform\xe2\x80\x99s infrared signature state to the given state\n// \x09void SetInfraredSigState(FString aState);\n// \x09//\n// \x09// //Returns the current infrared signature scale factor (as a linear value, not dB);\n// \x09""double InfraredSigScaleFactor();\n// \x09//\n// \x09// //Sets the infrared signature scale factor to the given value (as an linear value, not dB);\n// \x09// //The effective infrared signature of the platform becomes the baseline signature value multiplied by this value\n// \x09void SetInfraredSigScaleFactor(double aScaleValue);\n// \x09//\n// \x09// //Returns the infrared radiant intensity of the platform (in W/sr);\n// \x09// //when viewed from the location specified by aViewer\n// \x09// //aEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 10);\n// \x09// //A value of less than or equal to zero is equivalent to specifying 10\n// \x09//\n// \x09// //aBandName is the infrared band name to be used for the query and must be an empty FString\n// \x09// //or one of the infrared band names as defined in infrared_signature An empty FString is equivalent to specifying \xe2\x80\x9c""default\xe2\x80\x9d\n// \x09//\n// \x09// //Note: This performs the same function as the new method WsfPlatformRadiantIntensity,\n// \x09// //but only functions for infrared bands The new method is preferred because it is more general in\n// \x09// //that it also handles the visual band (if the optical signature is one that also provides radiant intensity);\n// \x09// //This method may be deprecated in some future release\n// \x09""double InfraredRadiantIntensity(WsfGeoPoint aViewer, double aEarthRadiusScale, FString aBandName);\n// \x09//\n// \x09// //Returns the current optical signature state of the platform\n// \x09""FString OpticalSigState();\n// \x09//\n// \x09// //Sets the platform\xe2\x80\x99s optical signature state to the given state\n// \x09void SetOpticalSigState(FString aState);\n// \x09//\n// \x09// //Returns the current optical signature scale factor (as a linear value, not dB);\n// \x09""double OpticalSigScaleFactor();\n// \x09//\n// \x09// //Sets the infrared optical scale factor to the given value (as an linear value, not dB);\n// \x09// //The effective optical signature of the platform becomes the baseline signature value multiplied by this value\n// \x09void SetOpticalSigScaleFactor(double aScaleValue);\n// \x09//\n// \x09// //Returns the optical cross section of the platform (in m^2);\n// \x09// //when viewed from the location specified by aViewer\n// \x09// //aEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 10);\n// \x09// //A value of less than or equal to zero is equivalent to specifying 10\n// \x09// //Note: This performs the same function as the new method WsfPlatformProjectedArea\n// \x09// //The new method is preferred and this method may be deprecated in some future release\n// \x09""double OpticalCrossSection(WsfGeoPoint aViewer, double aEarthRadiusScale);\n// \x09//\n// \x09// //Returns the projected area of the platform (in m^2);\n// \x09// //when viewed from the location specified by aViewer\n// \x09// //aEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 10);\n// \x09// //A value of less than or equal to zero is equivalent to specifying 10\n// \x09// //Note: This is equivalent to WsfPlatformOpticalCrossSection and is preferred because it is more representative of what is being returned\n// \x09""double ProjectedArea(WsfGeoPoint aViewer, double aEarthRadiusScale);\n// \x09//\n// \x09// //Returns the radiant intensity of the platform (in W/sr); when viewed from the location specified by aViewer\n// \x09// //aEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 10);\n// \x09// //A value of less than or equal to zero is equivalent to specifying 10\n// \x09// //aBandName is either \xe2\x80\x9cvisual\xe2\x80\x9d or one of the infrared band names as defined in infrared_signature\n// \x09// //An empty FString is equivalent to specifying \xe2\x80\x9c""default\xe2\x80\x9d \xe2\x80\x9c""default\xe2\x80\x9d should be avoid because it is possibly ambiguous\n// \x09// //Note: If an infrared band is supplied as aBandName, this is equivalent to WsfPlatformInfraredRadiantIntensity\n// \x09// //This is the preferred method because it works for both visual and infrared bands\n// \x09""double RadiantIntensity(WsfGeoPoint aViewer, double aEarthRadiusScale, FString aBandName);\n// \x09//\n// \x09// //Returns the current radar signature state of the platform\n// \x09""FString RadarSigState();\n// \x09//\n// \x09// //Sets the platform\xe2\x80\x99s radar signature state to the given state\n// \x09void SetRadarSigState(FString aState);\n// \x09//\n// \x09// //Returns the current radar signature scale factor (as a linear value, not dB);\n// \x09""double RadarSigScaleFactor();\n// \x09//\n// \x09// //Sets the radar signature scale factor to the given value (as an linear value, not dB);\n// \x09// //The effective radar signature of the platform becomes the baseline signature value multiplied by this value\n// \x09void SetRadarSigScaleFactor(double aScaleValue);\n// \x09//\n// \x09// //Returns the radar cross section of the platform (in m^2); when viewed from the aspect (eg WsfPlatformApparentAspectOf);\n// \x09// //specified by aRcvrAzimuth and aRcvrElevation (degrees);, or location specified by aViewer In the first and second versions,\n// \x09// //the transmitter and receiver are assumed to be co-located In the third version, the aspect of\n// \x09// //the transmitter illuminating the target is specified by aXmtrAzimuth and aXmtrElevation (degrees);\n// \x09// //aEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 4/3);\n// \x09// //A value of less than or equal to zero is equivalent to specifying 4/3\n// \x09// //aPolarization is the polarization to be used for the query and must be an empty FString or\n// \x09// //one of the polarization names as defined in radar_signature\n// \x09// //An empty FString is equivalent to specifying \xe2\x80\x9c""default\xe2\x80\x9d\n// \x09// //aFrequency is the frequency of the signal (in Hertz); to be used for the query\n// \x09""double RadarCrossSection(double aRcvrAzimuth, double aRcvrElevation, FString aPolarization, double aFrequency);\n// \x09""double RadarCrossSection(WsfGeoPoint aViewer, double aEarthRadiusScale, FString aPolarization, double aFrequency);\n// \x09""double RadarCrossSection(double aXmtrAzimuth, double aXmtrElevation, double aRcvrAzimuth, double aRcvrElevation,\n// \x09                          FString aPolarization, double aFrequency);\n// \x09//\n// \x09//\n// \x09// //Capabilities Methods\n// \x09// //Returns the platform\xe2\x80\x99s current 16-bit Capabilities data as an integer\n// \x09// //The integer contains bit-mapped flags that indicate if the platform has the ability to supply payload, fuel, vehicle repair, vehicle recovery,\n// \x09// //or automated data service - broadcast (ADS_B); services This information is especially of interest to the WSF_EXCHANGE_PROCESSOR\n// \x09// //(See Distributed Interactive Simulation (DIS); Entity Capabilities field definitions);\n// \x09int Capabilities();\n// \x09//\n// \x09// //Sets the platform\xe2\x80\x99s 16-bit Capabilities data (See |Distributed Interactive Simulation (DIS);\n// \x09// //Entity Capabilities field definitions);\n// \x09// //Note: This capability allows for direct manipulation of the Entity State Capability data being reported,\n// \x09// //and may internally generate a callback that Capabilities have changed\n// \x09void SetCapability(int aLeastSignificantBit, bool aValue);\n// \x09//\n// \x09//\n// \x09// //Script Invocation Methods\n// \x09// //Returns \xe2\x80\x98true\xe2\x80\x99 if a script with the given name exists on the platform\n// \x09""bool ScriptExists(FString aScript);\n// \x09//\n// \x09// //Executes the script with the given name and optional argument list\n// \x09// //Returns the return value of the executed script\n// \x09// //Note: The ExecuteScript and ExecuteScriptWithArgs forms are provided for backward compatibility, and return \xe2\x80\x98true\xe2\x80\x99 if the script exists\n// \x09WsfObject WsfExecute(FString aScript);\n// \x09WsfObject WsfExecute(FString aScript, TArray<WsfObject> aArgs);\n// \x09""bool ExecuteScript(FString aScript);\n// \x09""bool ExecuteScriptWithArgs(FString aScript, TArray<WsfObject> aArgs);\n// \x09//\n// \x09// //Executes the script with the given name and optional argument list at the given simulation time\n// \x09// //Return value indicates whether the supplied script exists on the platform\n// \x09""bool ExecuteAtTime(double aTime, FString aScript);\n// \x09""bool ExecuteAtTime(double aTime, FString aScript, TArray<WsfObject> aArgs);\n// \x09//\n// \x09//\n// \x09// //Perception Methods\n// \x09// //Returns the platform\xe2\x80\x99s perception processor\n// \x09// //If none were defined, a default perception processor is added and returned\n// \x09// //If more than one were defined, it returns the first one\n// \x09WsfPerceptionProcessor PerceptionProcessor();\n// \x09//\n// \x09// //Returns the platform\xe2\x80\x99s perceived assets\n// \x09TArray<WsfAssetPerception> PerceivedAssets();\n// \x09//\n// \x09//\n// //Track Methods\n// //Returns the platform\xe2\x80\x99s master track list\n" },
#endif
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the platform is being controlled externally to the local simulation (as with an external dis_interface entity);\nbool IsExternallyControlled();\n\nDetonates the platform The value of \xe2\x80\x9c""aResult\xe2\x80\x9d must be one of the following or the detonation will be treated as a \xe2\x80\x9c""dud\xe2\x80\x9d:\nvoid Detonate(EResult aResult);\n\nSchedules the platform for deletion from the simulation Since the deletion will occur after the current script context returns,\nany remaining commands in the script context will be executed\nvoid DeletePlatform();\n\n\nCommand Chain Methods\nReturns the platform\xe2\x80\x99s commander in the default command chain (first form);\nor the specified command chain (second form);\nWsfPlatform Commander();\nWsfPlatform Commander(FString aCommandChainName);\n\nSets the platform\xe2\x80\x99s commander in the default command chain (first form); or the specified command chain (second form);\nThere is one issue with using this method Any links to a commander that transmit over a comm devices that uses\nthe <local:slave> network_name will not work So if you plan on using this method to change a platform\xe2\x80\x99s commander during run-time,\nthen do NOT use the <local:slave> network_name on the platform\xe2\x80\x99s comm devices\nvoid SetCommander(WsfPlatform aPlatform);\nvoid SetCommander(FString aCommandChainName, WsfPlatform aPlatform);\n\nReturns the platform\xe2\x80\x99s commander\xe2\x80\x99s name in the default command chain (first form);\nor the specified command chain (second form);\nFString CommanderName();\nFString CommanderName(FString aCommandChainName);\n\nReturns a platform list of peers in the default command chain (first form);\nor the specified command chain (second form);\nWsfPlatformList Peers();\nWsfPlatformList Peers(FString aCommandChainName);\n\nReturns a platform list of subordinates in the default command chain (first form);\nor the specified command chain (second form);\nWsfPlatformList Subordinates();\nWsfPlatformList Subordinates(FString aCommandChainName);\nReturns the command chain with the specified name\nWsfCommandChain CommandChain(FString aCommandChainName);\n\nReturns the number of command chains to which this platform belongs\nint CommandChainCount();\n\n\nReturns the command chain at the specified index\nThis must be in the range [0, CommandChainCount();-1]\nWsfCommandChain CommandChainEntry(int aIndex);\n\n\nSubsystem Methods\n\nReturns the platform\xe2\x80\x99s mover object\nWsfMover Mover();\n\nReturns the platform\xe2\x80\x99s fuel object\nWsfFuel Fuel();\n\nRetrieves the GPS availability state from the navigation_errors model See navigation_errors for more information\nNote: The return value is a large positive value if navigation_errors have not been defined\nint GPS_Status();\n\nSets the current GPS availability state ( navigation_errors for more information);\nThe return value is true if the GPS status was changed\nThe return value is false if the requested state is the same as the current state or if navigation_errors have not been defined\nNote: This has no effect if navigation_errors have not been defined\nbool SetGPS_Status(int aGPS_Status);\n\nReturns the WsfComm object with the given name\nWsfComm Comm(FString aName);\n\nReturns the number of communication devices\nint CommCount();\n\nReturns the WsfComm object at the given index\nNote: 0-based indexing applies\nWsfComm CommEntry(int aIndex);\n\n\nReturns the WsfCommRouter object with the given name\nWsfCommRouter Router(FString aName);\n\nReturns the number of router objects\nint RouterCount();\n\nReturns the WsfCommRouter object at the given index\nNote: 0-based indexing applies\nWsfCommRouter RouterEntry(int aIndex);\n\n\nReturns the WsfProcessor object with the given name\nWsfProcessor Processor(FString aName);\n\nReturns the number of processor devices\nint ProcessorCount();\n\nReturns the WsfProcessor object at the given index\nNote: 0-based indexing applies\nWsfProcessor ProcessorEntry(int aIndex);\n\n\nReturns the WsfSensor object with the given name\nWsfSensor Sensor(FString aName);\nReturns the number of sensor instances on this platform\nint SensorCount();\n\nReturns the WsfSensor object at the given index\nNote: 0-based indexing applies\nWsfSensor SensorEntry(int aIndex);\n\nTurns the communication device with the specified name on, returns true if successful\nbool TurnCommOn(FString aName);\n\nTurns the communication device with the specified name off, returns true if successful\nbool TurnCommOff(FString aName);\n\nTurns the processor device with the specified name on, returns true if successful\nbool TurnProcessorOn(FString aName);\n\nTurns the processor device with the specified name off, returns true if successful\nbool TurnProcessorOff(FString aName);\n\nTurns the sensor device with the specified name on, returns true if successful\nbool TurnSensorOn(FString aName);\n\nTurns the sensor device with the specified name off, returns true if successful\nbool TurnSensorOff(FString aName);\n\nTurns the router object with the specified name on, returns true if successful\nbool TurnRouterOn(FString aName);\n\nTurns the router object with the specified name off, returns true if successful\nbool TurnRouterOff(FString aName);\n\nAppearance Methods\nReturns the length, width and height of the platform (in meters);\nas defined by the length, {width and height commands\nThe return value will be zero if it was not defined\ndouble Length();\ndouble Width();\ndouble Height();\n\nReturns the total mass (empty mass + fuel mass + payload mass);\nof the platform or one of the components (in kilograms);\nThe masses may be defined directly using the empty_mass, fuel_mass and payload_mass,\nbut the masses are sometimes defined in and maintained by the mover\ndouble TotalMass();\ndouble EmptyMass();\ndouble FuelMass();\ndouble PayloadMass();\n\nReturns the platform\xe2\x80\x99s current 32-bit Appearance data as an integer excluding data for bits 3-4, 21 & 23\n(See Distributed Interactive Simulation (DIS); Entity Appearance field definitions);\nint Appearance();\n\nSets the platform\xe2\x80\x99s 32-bit Appearance data excluding data for bits 3-4, 21 & 23\n(See Distributed Interactive Simulation (DIS); Entity Appearance field definitions);\nNote: This capability allows for direct manipulation of the Entity State Appearance data being reported\nvoid SetAppearance(int aLeastSignificantBit, int aNumberOfBits, int aValue);\n\nReturns the platform\xe2\x80\x99s current Concealment Factor\ndouble ConcealmentFactor();\n\nSets the platform\xe2\x80\x99s concealment factor to a value within the range of [01], with 0 being visible and 1 being hidden\nThis value is used to determine the Entity State Appearance bit 19 for land domain platforms only\nThe SetAppearance function can also be used to set bit 19 directly\nvoid SetConcealmentFactor(double aConcealmentFactor);\n\nReturns the platform\xe2\x80\x99s current damage level (factor);\nThe return value is in the range of [01], with 0 being undamaged and 1 being fully damaged or destroyed\ndouble DamageFactor();\n\nSets the platform\xe2\x80\x99s damage factor to a value within the range of [01], with 0 being undamaged and 1 being fully damaged or destroyed\nvoid SetDamageFactor(double aDamageFactor);\n\nSets the platform\xe2\x80\x99s trailing effect to the given integer value\nThis value is used to set the Entity State Appearance bits 7-8 The SetAppearance function can also be used to set these bits directly\nvoid SetTrailingEffects(int aTrailingEffect);\n\nReturns \xe2\x80\x98true\xe2\x80\x99 if the platform is indestructible\nA platform may be marked as indestructible in order prevent it from being destroyed\nWhen this value is set \xe2\x80\x98true\xe2\x80\x99, any applied damage accumulates in a logarithmically decaying fashion, so DamageFactor();\n, rather than returning an actual damage state, reflects an ever decreasing (but never reaching zero); probability of survival\nbool Indestructible();\n\nSets the platform\xe2\x80\x99s indestructible attribute\nvoid SetIndestructible(bool aIsIndestructible);\n\nSets the platform\xe2\x80\x99s infrared, optical and radar signature state to the given state\nvoid SetSignatureState(FString aState);\n\nReturns the current infrared signature state of the platform\nFString InfraredSigState();\n\nSets the platform\xe2\x80\x99s infrared signature state to the given state\nvoid SetInfraredSigState(FString aState);\n\nReturns the current infrared signature scale factor (as a linear value, not dB);\ndouble InfraredSigScaleFactor();\n\nSets the infrared signature scale factor to the given value (as an linear value, not dB);\nThe effective infrared signature of the platform becomes the baseline signature value multiplied by this value\nvoid SetInfraredSigScaleFactor(double aScaleValue);\n\nReturns the infrared radiant intensity of the platform (in W/sr);\nwhen viewed from the location specified by aViewer\naEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 10);\nA value of less than or equal to zero is equivalent to specifying 10\n\naBandName is the infrared band name to be used for the query and must be an empty FString\nor one of the infrared band names as defined in infrared_signature An empty FString is equivalent to specifying \xe2\x80\x9c""default\xe2\x80\x9d\n\nNote: This performs the same function as the new method WsfPlatformRadiantIntensity,\nbut only functions for infrared bands The new method is preferred because it is more general in\nthat it also handles the visual band (if the optical signature is one that also provides radiant intensity);\nThis method may be deprecated in some future release\ndouble InfraredRadiantIntensity(WsfGeoPoint aViewer, double aEarthRadiusScale, FString aBandName);\n\nReturns the current optical signature state of the platform\nFString OpticalSigState();\n\nSets the platform\xe2\x80\x99s optical signature state to the given state\nvoid SetOpticalSigState(FString aState);\n\nReturns the current optical signature scale factor (as a linear value, not dB);\ndouble OpticalSigScaleFactor();\n\nSets the infrared optical scale factor to the given value (as an linear value, not dB);\nThe effective optical signature of the platform becomes the baseline signature value multiplied by this value\nvoid SetOpticalSigScaleFactor(double aScaleValue);\n\nReturns the optical cross section of the platform (in m^2);\nwhen viewed from the location specified by aViewer\naEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 10);\nA value of less than or equal to zero is equivalent to specifying 10\nNote: This performs the same function as the new method WsfPlatformProjectedArea\nThe new method is preferred and this method may be deprecated in some future release\ndouble OpticalCrossSection(WsfGeoPoint aViewer, double aEarthRadiusScale);\n\nReturns the projected area of the platform (in m^2);\nwhen viewed from the location specified by aViewer\naEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 10);\nA value of less than or equal to zero is equivalent to specifying 10\nNote: This is equivalent to WsfPlatformOpticalCrossSection and is preferred because it is more representative of what is being returned\ndouble ProjectedArea(WsfGeoPoint aViewer, double aEarthRadiusScale);\n\nReturns the radiant intensity of the platform (in W/sr); when viewed from the location specified by aViewer\naEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 10);\nA value of less than or equal to zero is equivalent to specifying 10\naBandName is either \xe2\x80\x9cvisual\xe2\x80\x9d or one of the infrared band names as defined in infrared_signature\nAn empty FString is equivalent to specifying \xe2\x80\x9c""default\xe2\x80\x9d \xe2\x80\x9c""default\xe2\x80\x9d should be avoid because it is possibly ambiguous\nNote: If an infrared band is supplied as aBandName, this is equivalent to WsfPlatformInfraredRadiantIntensity\nThis is the preferred method because it works for both visual and infrared bands\ndouble RadiantIntensity(WsfGeoPoint aViewer, double aEarthRadiusScale, FString aBandName);\n\nReturns the current radar signature state of the platform\nFString RadarSigState();\n\nSets the platform\xe2\x80\x99s radar signature state to the given state\nvoid SetRadarSigState(FString aState);\n\nReturns the current radar signature scale factor (as a linear value, not dB);\ndouble RadarSigScaleFactor();\n\nSets the radar signature scale factor to the given value (as an linear value, not dB);\nThe effective radar signature of the platform becomes the baseline signature value multiplied by this value\nvoid SetRadarSigScaleFactor(double aScaleValue);\n\nReturns the radar cross section of the platform (in m^2); when viewed from the aspect (eg WsfPlatformApparentAspectOf);\nspecified by aRcvrAzimuth and aRcvrElevation (degrees);, or location specified by aViewer In the first and second versions,\nthe transmitter and receiver are assumed to be co-located In the third version, the aspect of\nthe transmitter illuminating the target is specified by aXmtrAzimuth and aXmtrElevation (degrees);\naEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 4/3);\nA value of less than or equal to zero is equivalent to specifying 4/3\naPolarization is the polarization to be used for the query and must be an empty FString or\none of the polarization names as defined in radar_signature\nAn empty FString is equivalent to specifying \xe2\x80\x9c""default\xe2\x80\x9d\naFrequency is the frequency of the signal (in Hertz); to be used for the query\ndouble RadarCrossSection(double aRcvrAzimuth, double aRcvrElevation, FString aPolarization, double aFrequency);\ndouble RadarCrossSection(WsfGeoPoint aViewer, double aEarthRadiusScale, FString aPolarization, double aFrequency);\ndouble RadarCrossSection(double aXmtrAzimuth, double aXmtrElevation, double aRcvrAzimuth, double aRcvrElevation,\n                         FString aPolarization, double aFrequency);\n\n\nCapabilities Methods\nReturns the platform\xe2\x80\x99s current 16-bit Capabilities data as an integer\nThe integer contains bit-mapped flags that indicate if the platform has the ability to supply payload, fuel, vehicle repair, vehicle recovery,\nor automated data service - broadcast (ADS_B); services This information is especially of interest to the WSF_EXCHANGE_PROCESSOR\n(See Distributed Interactive Simulation (DIS); Entity Capabilities field definitions);\nint Capabilities();\n\nSets the platform\xe2\x80\x99s 16-bit Capabilities data (See |Distributed Interactive Simulation (DIS);\nEntity Capabilities field definitions);\nNote: This capability allows for direct manipulation of the Entity State Capability data being reported,\nand may internally generate a callback that Capabilities have changed\nvoid SetCapability(int aLeastSignificantBit, bool aValue);\n\n\nScript Invocation Methods\nReturns \xe2\x80\x98true\xe2\x80\x99 if a script with the given name exists on the platform\nbool ScriptExists(FString aScript);\n\nExecutes the script with the given name and optional argument list\nReturns the return value of the executed script\nNote: The ExecuteScript and ExecuteScriptWithArgs forms are provided for backward compatibility, and return \xe2\x80\x98true\xe2\x80\x99 if the script exists\nWsfObject WsfExecute(FString aScript);\nWsfObject WsfExecute(FString aScript, TArray<WsfObject> aArgs);\nbool ExecuteScript(FString aScript);\nbool ExecuteScriptWithArgs(FString aScript, TArray<WsfObject> aArgs);\n\nExecutes the script with the given name and optional argument list at the given simulation time\nReturn value indicates whether the supplied script exists on the platform\nbool ExecuteAtTime(double aTime, FString aScript);\nbool ExecuteAtTime(double aTime, FString aScript, TArray<WsfObject> aArgs);\n\n\nPerception Methods\nReturns the platform\xe2\x80\x99s perception processor\nIf none were defined, a default perception processor is added and returned\nIf more than one were defined, it returns the first one\nWsfPerceptionProcessor PerceptionProcessor();\n\nReturns the platform\xe2\x80\x99s perceived assets\nTArray<WsfAssetPerception> PerceivedAssets();\n\n\nTrack Methods\nReturns the platform\xe2\x80\x99s master track list" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWsfPlatform_MasterTrackList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfPlatform_eventMasterTrackList_Parms, ReturnValue), Z_Construct_UClass_UWsfLocalTrackList_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfPlatform_MasterTrackList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_MasterTrackList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_MasterTrackList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_MasterTrackList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "MasterTrackList", nullptr, nullptr, Z_Construct_UFunction_UWsfPlatform_MasterTrackList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_MasterTrackList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfPlatform_MasterTrackList_Statics::WsfPlatform_eventMasterTrackList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_MasterTrackList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_MasterTrackList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfPlatform_MasterTrackList_Statics::WsfPlatform_eventMasterTrackList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfPlatform_MasterTrackList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_MasterTrackList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execMasterTrackList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWsfLocalTrackList**)Z_Param__Result=P_THIS->MasterTrackList();
	P_NATIVE_END;
}
// End Class UWsfPlatform Function MasterTrackList

// Begin Class UWsfPlatform Function on_damage_received
struct Z_Construct_UFunction_UWsfPlatform_on_damage_received_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_on_damage_received_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "on_damage_received", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_on_damage_received_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_on_damage_received_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWsfPlatform_on_damage_received()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_on_damage_received_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execon_damage_received)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->on_damage_received();
	P_NATIVE_END;
}
// End Class UWsfPlatform Function on_damage_received

// Begin Class UWsfPlatform Function on_initialize
struct Z_Construct_UFunction_UWsfPlatform_on_initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WSF_PLATFORM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Script Interface\n" },
#endif
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Script Interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_on_initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "on_initialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_on_initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_on_initialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWsfPlatform_on_initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_on_initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execon_initialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->on_initialize();
	P_NATIVE_END;
}
// End Class UWsfPlatform Function on_initialize

// Begin Class UWsfPlatform Function on_initialize2
struct Z_Construct_UFunction_UWsfPlatform_on_initialize2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_on_initialize2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "on_initialize2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_on_initialize2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_on_initialize2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWsfPlatform_on_initialize2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_on_initialize2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execon_initialize2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->on_initialize2();
	P_NATIVE_END;
}
// End Class UWsfPlatform Function on_initialize2

// Begin Class UWsfPlatform Function on_platform_deleted
struct Z_Construct_UFunction_UWsfPlatform_on_platform_deleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_on_platform_deleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "on_platform_deleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_on_platform_deleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_on_platform_deleted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWsfPlatform_on_platform_deleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_on_platform_deleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execon_platform_deleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->on_platform_deleted();
	P_NATIVE_END;
}
// End Class UWsfPlatform Function on_platform_deleted

// Begin Class UWsfPlatform Function on_update
struct Z_Construct_UFunction_UWsfPlatform_on_update_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_on_update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "on_update", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_on_update_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_on_update_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWsfPlatform_on_update()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_on_update_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execon_update)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->on_update();
	P_NATIVE_END;
}
// End Class UWsfPlatform Function on_update

// Begin Class UWsfPlatform Function SetCreationTime
struct Z_Construct_UFunction_UWsfPlatform_SetCreationTime_Statics
{
	struct WsfPlatform_eventSetCreationTime_Parms
	{
		double aTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfPlatform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines the simulation time in seconds when the platform is to be added to the simulation\n// Note: This method is valid only during the execution of the simulation-scope on_platform_injection script\n// when the platform is being added to the simulation\n// Setting a value greater than the current simulation time defers the addition of the platform to the simulation\n// until the specified time The call is ignored if the value is less than the current simulation time\n" },
#endif
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the simulation time in seconds when the platform is to be added to the simulation\nNote: This method is valid only during the execution of the simulation-scope on_platform_injection script\nwhen the platform is being added to the simulation\nSetting a value greater than the current simulation time defers the addition of the platform to the simulation\nuntil the specified time The call is ignored if the value is less than the current simulation time" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_aTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UWsfPlatform_SetCreationTime_Statics::NewProp_aTime = { "aTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfPlatform_eventSetCreationTime_Parms, aTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfPlatform_SetCreationTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_SetCreationTime_Statics::NewProp_aTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_SetCreationTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_SetCreationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "SetCreationTime", nullptr, nullptr, Z_Construct_UFunction_UWsfPlatform_SetCreationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_SetCreationTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfPlatform_SetCreationTime_Statics::WsfPlatform_eventSetCreationTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_SetCreationTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_SetCreationTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfPlatform_SetCreationTime_Statics::WsfPlatform_eventSetCreationTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfPlatform_SetCreationTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_SetCreationTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execSetCreationTime)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_aTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCreationTime(Z_Param_aTime);
	P_NATIVE_END;
}
// End Class UWsfPlatform Function SetCreationTime

// Begin Class UWsfPlatform Function SetIcon
struct Z_Construct_UFunction_UWsfPlatform_SetIcon_Statics
{
	struct WsfPlatform_eventSetIcon_Parms
	{
		EIcon aIcon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfPlatform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets the platform\xe2\x80\x99s icon\n" },
#endif
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the platform\xe2\x80\x99s icon" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_aIcon_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_aIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWsfPlatform_SetIcon_Statics::NewProp_aIcon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWsfPlatform_SetIcon_Statics::NewProp_aIcon = { "aIcon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfPlatform_eventSetIcon_Parms, aIcon), Z_Construct_UEnum_TaskPlan_EIcon, METADATA_PARAMS(0, nullptr) }; // 2638291761
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfPlatform_SetIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_SetIcon_Statics::NewProp_aIcon_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_SetIcon_Statics::NewProp_aIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_SetIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_SetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "SetIcon", nullptr, nullptr, Z_Construct_UFunction_UWsfPlatform_SetIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_SetIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfPlatform_SetIcon_Statics::WsfPlatform_eventSetIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_SetIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_SetIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfPlatform_SetIcon_Statics::WsfPlatform_eventSetIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfPlatform_SetIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_SetIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execSetIcon)
{
	P_GET_ENUM(EIcon,Z_Param_aIcon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIcon(EIcon(Z_Param_aIcon));
	P_NATIVE_END;
}
// End Class UWsfPlatform Function SetIcon

// Begin Class UWsfPlatform Function SetSide
struct Z_Construct_UFunction_UWsfPlatform_SetSide_Statics
{
	struct WsfPlatform_eventSetSide_Parms
	{
		ESide aSide;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfPlatform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the platform\xe2\x80\x99s side\n// Note: This method is only valid prior to adding the platform to the simulation\n" },
#endif
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the platform\xe2\x80\x99s side\nNote: This method is only valid prior to adding the platform to the simulation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_aSide_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_aSide;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWsfPlatform_SetSide_Statics::NewProp_aSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWsfPlatform_SetSide_Statics::NewProp_aSide = { "aSide", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfPlatform_eventSetSide_Parms, aSide), Z_Construct_UEnum_TaskPlan_ESide, METADATA_PARAMS(0, nullptr) }; // 2931397930
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfPlatform_SetSide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_SetSide_Statics::NewProp_aSide_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_SetSide_Statics::NewProp_aSide,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_SetSide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_SetSide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "SetSide", nullptr, nullptr, Z_Construct_UFunction_UWsfPlatform_SetSide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_SetSide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfPlatform_SetSide_Statics::WsfPlatform_eventSetSide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_SetSide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_SetSide_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfPlatform_SetSide_Statics::WsfPlatform_eventSetSide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfPlatform_SetSide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_SetSide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execSetSide)
{
	P_GET_ENUM(ESide,Z_Param_aSide);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSide(ESide(Z_Param_aSide));
	P_NATIVE_END;
}
// End Class UWsfPlatform Function SetSide

// Begin Class UWsfPlatform Function Side
struct Z_Construct_UFunction_UWsfPlatform_Side_Statics
{
	struct WsfPlatform_eventSide_Parms
	{
		ESide ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfPlatform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the platform\xe2\x80\x99s side\n" },
#endif
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the platform\xe2\x80\x99s side" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWsfPlatform_Side_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWsfPlatform_Side_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfPlatform_eventSide_Parms, ReturnValue), Z_Construct_UEnum_TaskPlan_ESide, METADATA_PARAMS(0, nullptr) }; // 2931397930
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfPlatform_Side_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_Side_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_Side_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_Side_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_Side_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "Side", nullptr, nullptr, Z_Construct_UFunction_UWsfPlatform_Side_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_Side_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfPlatform_Side_Statics::WsfPlatform_eventSide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_Side_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_Side_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfPlatform_Side_Statics::WsfPlatform_eventSide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfPlatform_Side()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_Side_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execSide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESide*)Z_Param__Result=P_THIS->Side();
	P_NATIVE_END;
}
// End Class UWsfPlatform Function Side

// Begin Class UWsfPlatform Function TimeSinceCreation
struct Z_Construct_UFunction_UWsfPlatform_TimeSinceCreation_Statics
{
	struct WsfPlatform_eventTimeSinceCreation_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfPlatform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the elapsed time in seconds since the platform was created\n" },
#endif
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the elapsed time in seconds since the platform was created" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UWsfPlatform_TimeSinceCreation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfPlatform_eventTimeSinceCreation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfPlatform_TimeSinceCreation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_TimeSinceCreation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_TimeSinceCreation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_TimeSinceCreation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "TimeSinceCreation", nullptr, nullptr, Z_Construct_UFunction_UWsfPlatform_TimeSinceCreation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_TimeSinceCreation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfPlatform_TimeSinceCreation_Statics::WsfPlatform_eventTimeSinceCreation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_TimeSinceCreation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_TimeSinceCreation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfPlatform_TimeSinceCreation_Statics::WsfPlatform_eventTimeSinceCreation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfPlatform_TimeSinceCreation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_TimeSinceCreation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execTimeSinceCreation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->TimeSinceCreation();
	P_NATIVE_END;
}
// End Class UWsfPlatform Function TimeSinceCreation

// Begin Class UWsfPlatform Function Weapon
struct Z_Construct_UFunction_UWsfPlatform_Weapon_Statics
{
	struct WsfPlatform_eventWeapon_Parms
	{
		FString aName;
		UWsfWeapon* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfPlatform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \x09//\n// \x09// //Returns the platform\xe2\x80\x99s master raw track list,\n// \x09// //or list of raw tracks fused to form the master track list\n// \x09WsfTrackList MasterRawTrackList();\n// \x09//\n// \x09// //Returns the local track list associated with the given track processor\n// \x09// //If the track processor is a non-master track processor, the returned track list will not be the master track list\n// \x09// //Note: The track processor, name aTrackProcessorName, must exist on the platform; otherwise, the track list will be invalid\n// \x09WsfLocalTrackList TrackList(FString aTrackProcessorName);\n// \x09//\n// \x09// //Returns the raw track list associated with the given track processor\n// \x09// //If the track processor is a non-master track processor, the returned track list will not be the master raw track list\n// \x09// //Note: The track processor, name aTrackProcessorName, must exist on the platform; otherwise, the track list will be invalid\n// \x09WsfTrackList RawTrackList(FString aTrackProcessorName);\n// \x09//\n// \x09// //Returns the \xe2\x80\x9cmaster\xe2\x80\x9d track manager (ie, the track manager that owns and maintains the master track list);\n// \x09WsfTrackManager TrackManager();\n// \x09//\n// \x09// //Returns the WsfTrackId of the current target\n// \x09// //Note: return_valueIsNull(); will be true if there is no current target\n// \x09WsfTrackId CurrentTarget();\n// \x09//\n// \x09//\n// \x09// //Sets the current target given a track and return the WsfTrackId of the current target track\n// \x09// //If the argument is a sensor track and already correlated to a local track in the track manager\n// \x09// //then the current target will be that local track\n// \x09// //If the argument is a sensor track and NOT already correlated to a local track in the track manager\n// \x09// //then a new correlated local track is created and the current target will be that new local track\n// \x09WsfTrackId SetCurrentTarget(WsfTrack aTrack);\n// \x09//\n// \x09// //Returns true if the platform has a current target\n// \x09""bool HasCurrentTarget();\n// \x09//\n// \x09// //Clears the current target\n// \x09void ClearCurrentTarget();\n// \x09//\n// \x09// //Returns the WsfTrack of the current target\n// \x09// //Note: Use return_valueIsValid(); to ensure the return value is valid (ie, there is a current target); before using it\n// \x09WsfTrack CurrentTargetTrack();\n// \x09//\n// \x09// //Returns the time to intercept and the intercept bearing An intercept time of -1 indicates that there is no solution\n// \x09// //The intercept bearing is available in the WsfWaypoint that is passed in by reference\n// \x09// //All forms of InterceptLocation2D require a track to intercept and return by reference a waypoint with the intercept bearing\n// \x09""double InterceptLocation2D(WsfTrack aTrack, WsfWaypoint aWaypoint);\n// \x09//\n// \x09// //See above This version provides a third argument that outputs debug information about the intercept calculation\n// \x09""double InterceptLocation2D(WsfTrack aTrack, WsfWaypoint aWaypoint, bool aDebug);\n// \x09//\n// \x09// //See above This version provides additional arguments for providing the ownship speed and a delay until that speed is reached\n// \x09""double InterceptLocation2D(WsfTrack aTrack, WsfWaypoint aWaypoint, double aOwnshipSpeed, double aTimeDelay);\n// \x09//\n// \x09// //See above This version provides additional arguments for providing the ownship speed,\n// \x09// //delay until that speed is reached, and whether to output debug information about the intercept calculation\n// \x09""double InterceptLocation2D(WsfTrack aTrack, WsfWaypoint aWaypoint, double aOwnshipSpeed, double aTimeDelay,\n// \x09                            bool aDebug);\n// \x09//\n// \x09// //Returns the intercept time, bearing, altitude An intercept time of -1 indicates that there is no solution\n// \x09// //The intercept bearing and altitude is available in the WsfWaypoint that is passed in by reference\n// \x09// //All forms of InterceptLocation3D require a track to intercept and return by reference a waypoint with the intercept bearing and altitude\n// \x09""double InterceptLocation3D(WsfTrack aTrack, WsfWaypoint aWaypoint);\n// \x09//\n// \x09// //See above This version provides a third argument that outputs debug information about the intercept calculation\n// \x09""double InterceptLocation3D(WsfTrack aTrack, WsfWaypoint aWaypoint, bool aDebug);\n// \x09//\n// \x09// //See above This version provides additional arguments for providing the ownship speed and a delay until that speed is reached\n// \x09""double InterceptLocation3D(WsfTrack aTrack, WsfWaypoint aWaypoint, double aOwnshipSpeed, double aTimeDelay);\n// \x09//\n// \x09// //See above This version provides additional arguments for providing the ownship speed,\n// \x09// //delay until that speed is reached,\n// \x09// //and whether to output debug information about the intercept calculation\n// \x09""double InterceptLocation3D(WsfTrack aTrack, WsfWaypoint aWaypoint, double aOwnshipSpeed, double aTimeDelay,\n// \x09                            bool aDebug);\n// \x09//\n// \x09// //Returns the time required to travel to the provided track (seconds);\n// \x09// //Note: This method is valid only for WSF_ROAD_MOVER\n// \x09// //Location and Navigation Methods\n// \x09""double TravelTime(WsfTrack aTrack);\n// \x09//\n// \x09// //Returns the current location of the platform\n// \x09// //In the second form, only the latitude, longitude and altitude of the waypoint is defined\n// \x09WsfGeoPoint Location();\n// \x09WsfWaypoint LocationAsWaypoint();\n// \x09//\n// \x09// //Returns the height of the platform above the terrain (meters);\n// \x09""double HeightAboveTerrain();\n// \x09//\n// \x09// //Returns the platform\xe2\x80\x99s latitude, longitude (decimal degrees);\n// \x09// //or altitude (meters above mean sea level);, respectively\n// \x09// //Note: These commands should be used only if a single position component will be extracted\n// \x09// //If multiple components will be extracted,\n// \x09// //it is more efficient to use Location and retrieve the individual components from the returned object\n// \x09""double Latitude();\n// \x09""double Longitude();\n// \x09""double Altitude();\n// \x09//\n// \x09// //Returns the \xe2\x80\x98x\xe2\x80\x99, \xe2\x80\x98y\xe2\x80\x99 or \xe2\x80\x98z\xe2\x80\x99 component of the platform\xe2\x80\x99s WCS position (meters);, respectively\n// \x09// //Note: These commands should be used only if a single position component will be extracted\n// \x09// //If multiple components will be extracted, it is more efficient to use Location and retrieve the individual components from the returned object\n// \x09""double X();\n// \x09""double Y();\n// \x09""double Z();\n// \x09//\n// \x09// //Returns the \xe2\x80\x98x\xe2\x80\x99, \xe2\x80\x98y\xe2\x80\x99 or \xe2\x80\x98z\xe2\x80\x99 component of the platform\xe2\x80\x99s WCS velocity (meters/second);, respectively\n// \x09""double Vx();\n// \x09""double Vy();\n// \x09""double Vz();\n// \x09//\n// \x09// //Returns the location of the platform as perceived by itself\n// \x09// //This location will be different than the value returned by Location only if navigation_errors have been defined for the platform\n// \x09WsfGeoPoint PerceivedLocation();\n// \x09//\n// \x09// //Returns the difference between the perceived platform location as returned by PerceivedLocation and the true platform location by Location\n// \x09// //The value will be non-zero only if navigation_errors have been defined for the platform\n// \x09""FVector PerceivedLocationErrorNED();\n// \x09""FVector PerceivedLocationErrorWCS();\n// \x09//\n// \x09// //Define the difference between the perceived platform location as returned by PerceivedLocation and the true platform location returned by Location\n// \x09// //This method will have no effect unless navigation_errors have been defined for the platform and the value of GPS_Status\n// \x09// //(as set by SetGPS_Status or gps_status); is 3 (GPS errors can be set from an external source);\n// \x09void SetPerceivedLocationErrorWCS(FVector aLocationErrorWCS);\n// \x09//\n// \x09// //Returns the anticipated location of the platform at the specified time in the future If the location cannot be determined then the return\n// \x09// //will be invalid The return value should be tested for validity before attempting to use it\n// \x09// //This method is currently only valid for WSF_AIR_MOVER, WSF_GROUND_MOVER, WSF_SURFACE_MOVER, WSF_SPACE_MOVER, WSF_NORAD_SPACE_MOVER,\n// \x09// //and WSF_INTEGRATING_SPACE_MOVER\n// \x09// //Note: For a platform with a space mover,\n// \x09// //this method will not return a valid result when the current simulation time is during an orbital maneuver,\n// \x09// //or if there is the start of a maneuver before the time of the prediction time, aTime\n// \x09WsfGeoPoint FutureLocation(double aTime);\n// \x09//\n// \x09// //Returns the WCS location of the platform in meters\n// \x09""FVector LocationWCS();\n// \x09//\n// \x09// //Returns the ECI location of the platform in meters\n// \x09""FVector LocationECI();\n// \x09//\n// \x09// //Returns the J2000 location of the platform in meters\n// \x09""FVector LocationJ2000();\n// \x09//\n// \x09// //Returns the location of the platform in MGRS (Military Grid Reference System); format\n// \x09""FString LocationMGRS();\n// \x09//\n// \x09// //Returns the WCS velocity of the platform in meters/second\n// \x09""FVector VelocityWCS();\n// \x09//\n// \x09// //Returns the NED velocity of the platform in meters/second\n// \x09""FVector VelocityNED();\n// \x09//\n// \x09// //Returns the ECI velocity of the platform in meters/second\n// \x09""FVector VelocityECI();\n// \x09//\n// \x09// //Returns the J2000 velocity of the platform in meters/second\n// \x09""FVector VelocityJ2000();\n// \x09//\n// \x09// //Returns the WCS acceleration of the platform in meters/second\n// \x09""FVector AccelerationWCS();\n// \x09//\n// \x09// //Returns the NED acceleration of the platform in meters/second\n// \x09""FVector AccelerationNED();\n// \x09//\n// \x09// //Returns the ECI acceleration of the platform in meters/second\n// \x09""FVector AccelerationECI();\n// \x09//\n// \x09// //Returns the platform\xe2\x80\x99s current speed (meters/second);\n// \x09""double Speed();\n// \x09//\n// \x09// //Returns the platform\xe2\x80\x99s current ground speed (meters/second);\n// \x09""double GroundSpeed();\n// \x09//\n// \x09// //Returns the target speed of the platform\xe2\x80\x99s mover if it is a WSF_WAYPOINT_MOVER\n// \x09""double TargetSpeed();\n// \x09//\n// \x09// //Returns the platform\xe2\x80\x99s current speed as a Mach number\n// \x09""double MachNumber();\n// \x09//\n// \x09// //Returns the platform\xe2\x80\x99s heading angle [-180, 180] (degrees);\n// \x09""double Heading();\n// \x09//\n// \x09// //Returns the platform\xe2\x80\x99s pitch angle [-90, 90] (degrees);\n// \x09""double Pitch();\n// \x09//\n// \x09// //Returns the platform\xe2\x80\x99s roll angle [-90, 90] (degrees);\n// \x09""double Roll();\n// \x09//\n// \x09// //Returns the platform\xe2\x80\x99s orientation in NED (yaw, pitch, roll degrees);\n// \x09""FVector OrientationNED();\n// \x09//\n// \x09// //Returns the platform\xe2\x80\x99s orientation in WCS (degrees);\n// \x09""FVector OrientationWCS();\n// \x09//\n// \x09// //Returns the platform\xe2\x80\x99s orientation in The Earth Centered Inertial System (ECI); (degrees);\n// \x09""FVector OrientationECI();\n// \x09//\n// \x09// //Given a position in The Entity Coordinate System (ECS);, returns the position in WCS\n// \x09""FVector ConvertECSToWCS(FVector aPosition);\n// \x09//\n// \x09// //Given a position in WCS, returns the position in The Entity Coordinate System (ECS);\n// \x09""FVector ConvertWCSToECS(FVector aPosition);\n// \x09//\n// \x09// //Given a position in ECI, returns the position in WCS\n// \x09""FVector ConvertECIToWCS(FVector aPosition);\n// \x09//\n// \x09// //Given a position in WCS, returns the position in ECI.\n// \x09""FVector ConvertWCSToECI(FVector aPosition);\n// \x09//\n// \x09// //Sets the platform\xe2\x80\x99s desired Heading (body pointing angle); angle [-180, 180] (degrees);\n// \x09// //The SetOrientationNED(); command is similar Implementation differs from the TurnToHeading command below,\n// \x09// //which is actually a turn to Course command Note: that most Mover types do not distinguish between heading and course angles,\n// \x09// //and much infrastructure is in place that assumes a heading command is a desire to move in a certain direction,\n// \x09// //rather than orient in a particular direction The WSF_ROTORCRAFT_MOVER is a notable exception to this rule,\n// \x09// //see this documentation for syntax and usage details\n// \x09// //Note: A platform\xe2\x80\x99s mover can override this setting at any time\n// \x09void SetHeading(double aHeading);\n// \x09//\n// \x09// //Sets the platform\xe2\x80\x99s pitch angle [-90, 90] (degrees);\n// \x09// //Note: A platform\xe2\x80\x99s mover can override this setting at any time For instance,\n// \x09// //it cannot be used to set pitch if WSF_AIR_MOVER is providing the current platform\xe2\x80\x99s movement\n// \x09// //It is recommended to use GoToAltitude();\n// \x09void SetPitch(double aPitch);\n// \x09//\n// \x09// //Sets the platform\xe2\x80\x99s roll angle [-90, 90] (degrees);\n// \x09// //Note: A platform\xe2\x80\x99s mover can override this setting at any time\n// \x09void SetRoll(double aRoll);\n// \x09//\n// \x09// //Causes the platform to move to the waypoint on its route with the given label Return true if successful\n// \x09""bool GoToLabel(FString aLabel);\n// \x09//\n// \x09// //Causes the platform to move to the specified location (degrees, meters); Return true if successful\n// \x09// //If the parameter is a waypoint, only the position of the waypoint is used\n// \x09""bool GoToLocation(double aLat, double aLon, double aAlt);\n// \x09""bool GoToLocation(double aLat, double aLon);\n// \x09""bool GoToLocation(WsfWaypoint aPoint);\n// \x09""bool GoToLocation(WsfGeoPoint aPoint);\n// \x09//\n// \x09// //Causes the platform to move to a previously defined geo_point (by name or WsfGeoPoint);\n// \x09// //with the option of adding a callback method when the platform reaches the given location\n// \x09""bool GoToPoint(FString aGeoPointName);\n// \x09""bool GoToPoint(WsfGeoPoint aLocation);\n// \x09""bool GoToPoint(FString aGeoPointName, FString aCallbackFunction);\n// \x09""bool GoToPoint(WsfGeoPoint aGeoPoint, FString aCallbackFunction);\n// \x09//\n// \x09// //Causes the platform to adjust its altitude to the specified value (meters);\n// \x09// //In the second form, the second argument is the positive altitude rate-of-change (meters/second);\n// \x09// //to be used to achieve the desired altitude It will be negated if the target altitude is less than the current altitude\n// \x09// //By default, the mover will quit following the route and begin extrapolating on the current heading\n// \x09// //If the third parameter is set to true, the mover will remain on the current route, but change the target altitude\n// \x09""bool GoToAltitude(double aAlt);\n// \x09""bool GoToAltitude(double aAlt, double aAltRateOfChange);\n// \x09""bool GoToAltitude(double aAlt, double aAltRateOfChange, bool aKeepRoute);\n// \x09//\n// \x09// //Causes the platform to adjust its speed to the specified value (meters/second);\n// \x09// //or Mach number, while maintaining its current path\n// \x09// //In the two argument form, second argument is a positive linear acceleration to be used (meters/second^2);\n// \x09// //to be used to achieve the desired speed It will be negated if the target speed is less than the current speed\n// \x09// //By default, the mover will quit following the route and begin extrapolating on the current heading\n// \x09// //If the third parameter is set to true, the mover will remain on the current route, but change the target speed\n// \x09""bool GoToSpeed(double aSpeed);\n// \x09""bool GoToSpeed(double aSpeed, double aLinearAccel);\n// \x09""bool GoToSpeed(double aSpeed, double aLinearAccel, bool aKeepRoute);\n// \x09""bool GoToMachNumber(double aMachNumber);\n// \x09""bool GoToMachNumber(double aMachNumber, double aLinearAccel);\n// \x09//\n// \x09// //Causes the platform to turn to the given absolute Course (inadvertently referred to as Heading);\n// \x09// //[0, 360] (degrees); Return true if successful\n// \x09// //In the second form, the second argument is the radial acceleration to be used (meters/second^2);\n// \x09// //to be used during the turn Realized radial acceleration will be limited by WSF_AIR_MOVER maximum_radial_acceleration\n// \x09""bool TurnToHeading(double aHeading);\n// \x09""bool TurnToHeading(double aHeading, double aRadialAccel);\n// \x09//\n// \x09// //Causes the platform to turn to the given relative heading [-180, 180] (degrees); Return true if successful\n// \x09// //In the second form, the second argument is the radial acceleration to be used (meters/second^2);\n// \x09// //to be used during the turn Realized radial acceleration will be limited by WSF_AIR_MOVER maximum_radial_acceleration\n// \x09""bool TurnToRelativeHeading(double aHeading);\n// \x09""bool TurnToRelativeHeading(double aHeading, double aRadialAccel);\n// \x09//\n// \x09// //Causes the platform to drop its current path and follow the provided route\n// \x09// //The starting point defaults to the first point in the route if not specified\n// \x09// //Returns true if successful\n// \x09// //WsfRoute aRoute indicates a script WsfRoute to follow\n// \x09// //FString aRouteName indicates a route to follow by either: * The name of a predefined route type defined with a global route command\n// \x09// //* The FString \xe2\x80\x9c""DEFAULT_ROUTE\xe2\x80\x9d selects the initial route defined for the platform\n// \x09// //FString aLabel specifies an alternate starting point in the route as either:\n// \x09// //* The label of a waypoint within the specified route\n// \x09// //* The FString \xe2\x80\x9c""CLOSEST_POINT\xe2\x80\x9d selects the point that is closest to the current location\n// \x09// //int aIndex specifies an alternate starting point in the route as an integer where 0 is the first index into route\n// \x09""bool FollowRoute(WsfRoute aRoute);\n// \x09""bool FollowRoute(WsfRoute aRoute, FString aLabel);\n// \x09""bool FollowRoute(WsfRoute aRoute, int aIndex);\n// \x09""bool FollowRoute(FString aRouteName);\n// \x09""bool FollowRoute(FString aRouteName, FString aLabel);\n// \x09""bool FollowRoute(FString aRouteName, int aIndex);\n// \x09//\n// \x09// //Causes to the platform to return to its default, or preplanned route following a diversion\n// \x09// //The platform goes to the target waypoint it had at the time of the diversion Return true if successful\n// \x09//\n// \x09// //Important The following SetLocation, SetVelocity, and SetOrientation methods are not guaranteed to be compatible with all mover types\n// \x09// //Furthermore, they may be unsuccessful if invoked on uninitialized platforms created with WsfSimulationCreatePlatform\n// \x09// //before being added to the simulation\n// \x09""bool ReturnToRoute();\n// \x09//\n// \x09// //Immediately moves the platform to a new location This method may not be compatible with all mover types,\n// \x09// //or successful if invoked on uninitialized platforms created in script\n// \x09void SetLocation(double aLat, double aLon, double aAlt);\n// \x09void SetLocation(WsfGeoPoint aPoint);\n// \x09//\n// \x09// //Immediately moves the platform to a new location The first form will place the platform on the ground\n// \x09// //The second form will place the platform at the specified altitude (AGL); This method may not be compatible with all mover types,\n// \x09// //or successful if invoked on uninitialized platforms created in script\n// \x09""bool SetLocationMGRS(FString aLocationMGRS);\n// \x09""bool SetLocationMGRS(FString aLocationMGRS, double aAlt);\n// \x09//\n// \x09// //Changes the platform\xe2\x80\x99s velocity in The Entity Coordinate System (ECS);\n// \x09// //This method may not be compatible with all mover types, or successful if invoked on uninitialized platforms created in script\n// \x09void SetVelocityECS(double aForward, double aRight, double aDown);\n// \x09//\n// \x09// //Changes the platform\xe2\x80\x99s velocity in North, East, Down This method may not be compatible with all mover types,\n// \x09// //or successful if invoked on uninitialized platforms created in script\n// \x09void SetVelocityNED(double aNorth, double aEast, double aDown);\n// \x09//\n// \x09// //Changes the platform\xe2\x80\x99s orientation in heading, pitch, roll (in degrees);\n// \x09// //This is only useful for platform\xe2\x80\x99s without a mover\n// \x09void SetOrientationNED(double aHeading, double aPitch, double aRoll);\n// \x09//\n// \x09// //Changes the platform\xe2\x80\x99s orientation in WCS (degrees); This is only useful for platform\xe2\x80\x99s without a mover\n// \x09void SetOrientationWCS(double aPsi, double aTheta, double aPhi);\n// \x09//\n// \x09// //Returns a reference to the current route the platform is traveling The returned route may not be modified, use Copy();\n// \x09// //and FollowRoute to modify the platform\xe2\x80\x99s route\n// \x09WsfRoute Route();\n// \x09//\n// \x09//\n// \x09// //Returns the index of the waypoint within the route to which the platform is moving towards\n// \x09// //Note: The return value is valid only if the platform is following a route\n// \x09int RoutePointIndex();\n// \x09//\n// \x09// //Immediately moves the platform to the start and begins following a route Use FollowRoute();\n// \x09// //if you do not want move immediately to the beginning of the route\n// \x09// //Returns true if successful\n// \x09// //WsfRoute aRoute indicates a script WsfRoute to follow\n// \x09// //FString aRouteName indicates a route to follow by either:\n// \x09// //* The name of a predefined route type defined with a global route command\n// \x09// //* The FString \xe2\x80\x9c""DEFAULT_ROUTE\xe2\x80\x9d selects the initial route defined for the platform\n// \x09""bool SetRoute(WsfRoute aRoute);\n// \x09""bool SetRoute(FString aRouteName);\n// \x09//\n// \x09// //Stops platform movement until unpaused UnpauseTime is the absolute time the platform is to resume\n// \x09void Pause(double UnpauseTime);\n// \x09//\n// \x09// //Resumes platform movement if it was previously paused\n// \x09void Unpause();\n// \x09//\n// \x09// //Returns the path finder attached to the platform\xe2\x80\x99s mover object\n// \x09// //Note: The current mover must be a type of route mover or the return value is invalid\n// \x09WsfPathFinder PathFinder();\n// \x09//\n// \x09// //Relative Geometry Methods\n// \x09// //Returns the azimuth angle ([-180, 180] degrees);\n// \x09// //of the supplied point with respect to the current orientation of the platform (includes any yaw, pitch or roll angles);\n// \x09""double RelativeAzimuthOf(WsfGeoPoint aPoint);\n// \x09//\n// \x09// //Returns the elevation angle ([-90, 90] degrees);\n// \x09// //of the supplied point with respect to the current orientation of the platform (includes any yaw, pitch or roll angles);\n// \x09""double RelativeElevationOf(WsfGeoPoint aPoint);\n// \x09//\n// \x09// //Returns the bearing ([-180, 180] degrees); to the given location The angle is relative to north, with positive values being clockwise\n// \x09""double TrueBearingTo(WsfTrack aTrack);\n// \x09""double TrueBearingTo(WsfPlatform aPlatform);\n// \x09""double TrueBearingTo(double aLat, double aLon, double aAlt);\n// \x09""double TrueBearingTo(WsfGeoPoint aPoint);\n// \x09//\n// \x09// //Returns the \xe2\x80\x98""apparent\xe2\x80\x99 azimuth angle ([-180, 180] degrees); and the elevation angle, in a two element array of type double,\n// \x09// //of the supplied point with respect to the current orientation of the platform (includes any yaw, pitch or roll angles);\n// \x09// //The apparent location (ie, the perceived location of an object which accounts for atmospheric refraction);\n// \x09// //may be needed to properly cue sensors that have very narrow beams\n// \x09// //aEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 10);\n// \x09TArray<double> ApparentAspectOf(WsfGeoPoint aPoint, double aEarthRadiusScale);\n// \x09//\n// \x09// //A value of less than or equal to zero is equivalent to specifying 10\n// \x09//\n// \x09// //Returns the bearing ([-180, 180] degrees); to the given location\n// \x09// //The angle is relative to the platforms current heading with positive values being clockwise\n// \x09""double RelativeBearingTo(WsfTrack aTrack);\n// \x09""double RelativeBearingTo(WsfPlatform aPlatform);\n// \x09""double RelativeBearingTo(double aLat, double aLon, double aAlt);\n// \x09""double RelativeBearingTo(WsfGeoPoint aPoint);\n// \x09//\n// \x09//\n// \x09// //Returns the slant range in meters between the platform and the indicated location If aUseSpherical is true,\n// \x09// //calculate using spherical coordinates; if it is false or left unspecified, calculate using ellipsoidal coordinates\n// \x09""double SlantRangeTo(WsfTrack aTrack);\n// \x09""double SlantRangeTo(WsfTrack aTrack, bool aUseSpherical);\n// \x09""double SlantRangeTo(WsfPlatform aPlatform);\n// \x09""double SlantRangeTo(WsfPlatform aPlatform, bool aUseSpherical);\n// \x09""double SlantRangeTo(double aLat, double aLon, double aAlt);\n// \x09""double SlantRangeTo(double aLat, double aLon, double aAlt, bool aUseSpherical);\n// \x09""double SlantRangeTo(WsfGeoPoint aPoint);\n// \x09""double SlantRangeTo(WsfGeoPoint aPoint, bool aUseSpherical);\n// \x09""double SlantRangeTo(WsfWaypoint aPoint);\n// \x09""double SlantRangeTo(WsfWaypoint aPoint, bool aUseSpherical);\n// \x09//\n// \x09// //Returns the approximate ground range in meters between the platform and the indicated location Calculated using spherical coordinates\n// \x09""double GroundRangeTo(WsfTrack aTrack);\n// \x09""double GroundRangeTo(WsfPlatform aPlatform);\n// \x09""double GroundRangeTo(double aLat, double aLon, double aAlt);\n// \x09""double GroundRangeTo(WsfGeoPoint aPoint);\n// \x09//\n// \x09//\n// \x09// //Returns the approximate down range in meters between the platform and the indicated location\n// \x09// //This is the ground range times the cosine of the relative bearing to the location\n// \x09// //Positive values indicate the location is in front of the platform while negative values indicate it is behind the platform\n// \x09// //Calculated using spherical coordinates\n// \x09""double DownRangeTo(WsfTrack aTrack);\n// \x09""double DownRangeTo(WsfPlatform aPlatform);\n// \x09""double DownRangeTo(double aLat, double aLon, double aAlt);\n// \x09""double DownRangeTo(WsfGeoPoint aPoint);\n// \x09//\n// \x09//\n// \x09// //Returns the approximate cross range in meters between the platform and the indicated location\n// \x09// //This is the ground range times the sine of the relative bearing to the location\n// \x09// //Positive values indicate the location is to the right of the platform while negative values indicate it is to the left of the platform\n// \x09// //Calculated using spherical coordinates\n// \x09""double CrossRangeTo(WsfTrack aTrack);\n// \x09""double CrossRangeTo(WsfPlatform aPlatform);\n// \x09""double CrossRangeTo(double aLat, double aLon, double aAlt);\n// \x09""double CrossRangeTo(WsfGeoPoint aPoint);\n// \x09//\n// \x09//\n// \x09// //Returns the approximate point at which the indicated object would pass closest to the platform\n// \x09// //It is derived by extending the horizontal components of the velocity vector of the indicated object\n// \x09// //and determining the point at which the line passes closest to the platform If the object is not moving\n// \x09// //or if it is coincident with the requesting platform, the returned value will be the current position of the object\n// \x09WsfGeoPoint ClosestApproachOf(WsfTrack aTrack);\n// \x09WsfGeoPoint ClosestApproachOf(WsfPlatform aPlatform);\n// \x09//\n// \x09// //Note: The velocity of the requesting platform is not considered in this calculation (ie, it is not an intercept calculation);\n// \x09// //Returns the difference in heading in degrees between the platform and the indicated object\n// \x09// //That is, result = heading of platform - heading of object normalized to the range [-180, 180]\n// \x09// //The sign of the value indicates the potential direction of the crossing of the objects\n// \x09// //A positive value indicates the object would cross the platform\xe2\x80\x99s path from left to right\n// \x09// //while a negative value indicates it would cross from right to left A value of zero indicates the objects are traveling\n// \x09// //in the same direction while a value of 180 indicates they are traveling in opposite directions\n// \x09""double HeadingDifferenceOf(WsfTrack aTrack);\n// \x09""double HeadingDifferenceOf(WsfPlatform aPlatform);\n// \x09//\n// \x09//\n// \x09// //Returns the closing speed in meters per second between the platform and the indicated object\n// \x09// //This value is the component of the total velocity in the direction of the vector between the two objects\n// \x09// //Positive values mean the objects are closing and negative values mean the objects are separating\n// \x09""double ClosingSpeedOf(WsfTrack aTrack);\n// \x09""double ClosingSpeedOf(WsfPlatform aPlatform);\n// \x09""double ClosingSpeedOf(WsfTrack aTrack, double aMySpeed);\n// \x09""double ClosingSpeedOf(WsfPlatform aPlatform, double aMySpeed);\n// \x09//\n// \x09// //Is the given track or platform within the field of view of this platform\xe2\x80\x99s sensor?\n// \x09""bool WithinFieldOfView(WsfTrack aTrack, FString aMySensorName);\n// \x09""bool WithinFieldOfView(WsfPlatform aPlatform, FString aMySensorName);\n// \x09//\n// \x09//\n// \x09// //Returns true if the line of sight between the platform and the supplied point is masked (obscured); by the terrain\n// \x09// //aVerticalOffset is the amount added to the platform altitude to simulate the height of the observer (eg, antenna); above the platform\n// \x09// //aRadiusScaleFactor is the scale factor to be applied to Earths radius to simulate atmospheric refraction\n// \x09// //This value is typically 13333 (4 / 3); for radio frequencies\n// \x09""bool MaskedByTerrain(WsfGeoPoint aPoint, double aVerticalOffset, double aRadiusScaleFactor);\n// \x09//\n// \x09// //Return the apparent mean solar time at the position of this platform in hours since midnight\n// \x09""double ApparentTime();\n// \x09//\n// \x09//\n// //Compatibility Methods\n// \x09// //Returns the signed difference between the specified track and the requesting platform\n// \x09// //A positive value means the altitude of the track is above the requesting platform\n// \x09""double RelativeAltitudeOf(WsfTrack aTrack);\n// \x09//\n// \x09// //This returns the absolute value of the angle between the line-of-sight vector from the target (represented by the supplied track);\n// \x09// //to the requesting platform and the heading vector of the target\n// \x09// //Note: The track must have a valid non-zero velocity, or a large value (10E+10); will be returned\n// \x09""double RelativeHeadingOf(WsfTrack aTrack);\n// \x09//\n// \x09// //This returns the approximate ground range (in meters); to the point of closest approach of the target represented by the specified track\n// \x09// //Note: The track must have a valid non-zero velocity, or a large value (10E+10); will be returned\n// \x09""double RelativeOffsetOf(WsfTrack aTrack);\n// \x09//\n// \x09// //Zone Methods\n// \x09// //Returns the WsfZone script object matching the given zone name\n// \x09WsfZone Zone(FString aZoneName);\n// \x09//\n// \x09// //Returns \xe2\x80\x98true\xe2\x80\x99 if the platform is within the specified zone defined on the platform\n// \x09// //The zone can be created on the platform using the zone \xe2\x80\xa6 end_zone block or the use_zone command See platform\n// \x09""bool WithinZone(FString aZoneName);\n// \x09//\n// \x09// //Returns \xe2\x80\x98true\xe2\x80\x99 if the platform is within the specified zone defined on the specified platform\n// \x09// //The zone can be created on the platform using the zone \xe2\x80\xa6 end_zone block or the use_zone command See platform\n// \x09""bool WithinZoneOf(WsfPlatform aPlatform, FString aZoneName);\n// \x09//\n// \x09// //Returns an array of the names for all zones that were defined on the platform\n// \x09TArray<FString> ZoneNames();\n// \x09//\n// \x09// //Returns an array of WsfZone objects that were defined on the platform\n// \x09TArray<WsfZone> Zones();\n// \x09//\n// \x09//\n// \x09// //Auxiliary Data Methods\n// \x09// //Auxiliary Data is a collection of optional named user data attributes that can be stored with the object\n// \x09// //The framework will maintain the attributes but in no other way attempts to use the data contained within\n// \x09// //The definition and use of any attribute is defined purely by the user\n// \x09// //Retrieve the value of the auxiliary data attribute with the indicated name\n// \x09// //If the attribute does not exist then a default value will be returned (false for bool, 0 for int and 00 for double);\n// \x09""bool AuxDataBool(FString aName);\n// \x09int AuxDataInt(FString aName);\n// \x09""double AuxDataDouble(FString aName);\n// \x09""FString AuxDataFString(FString aName);\n// \x09WsfObject AuxDataObject(FString aName);\n// \x09//\n// \x09// //Returns true if an auxiliary data member exists with the specified name\n// \x09""bool AuxDataExists(FString aName);\n// \x09""bool CheckAuxData(FString aName);\n// \x09//\n// \x09// //Returns true if the object has auxiliary data\n// \x09""bool HasAuxData();\n// \x09//\n// \x09// //Delete the auxiliary data attribute with the indicated name\n// \x09// //Returns true if the attribute exists and was deleted, or false if the attribute did not exist\n// \x09""bool DeleteAuxData(FString aName);\n// \x09//\n// \x09//\n// \x09// //Set the value of the auxiliary data attribute with the indicated name\n// \x09// //The last form of SetAuxData(); can store any script object type\n// \x09void SetAuxData(FString aName, bool aValue);\n// \x09void SetAuxData(FString aName, int aValue);\n// \x09void SetAuxData(FString aName, double aValue);\n// \x09void SetAuxData(FString aName, FString aValue);\n// \x09// //void SetAuxData(FString aName, WsfObject aValue);\n// \x09//\n// \x09//\n// \x09// //Return the names and types of all auxiliary data attributes in the form of a Map<FString,FString>\n// \x09// //Map keys are valid names of auxiliary data attributes\n// \x09// //Map values are type names corresponding to valid auxiliary data attribute names\n// \x09TMap<FString, FString> GetAllAuxDataTypes();\n// \x09//\n// \x09//\n// \x09// //Group Methods\n// \x09// //Returns true if the platform is a member of the specified group (by name, id or object);\n// \x09""bool GroupMemberOf(FString aGroupName);\n// \x09""bool GroupMemberOf(WsfGroup aGroupPtr);\n// \x09//\n// \x09// //Returns a list of all groups this platform is a member of\n// \x09TArray<WsfGroup> Groups();\n// \x09//\n// \x09// //Returns a list of the names of all groups this platform is a member of\n// \x09TArray<FString> GroupsByName();\n// \x09//\n// \x09// //Joins the given group if it exists in the simulation\n// \x09void GroupJoin(FString aGroupName);\n// \x09//\n// \x09// //Leaves the given group if this platform is a member\n// \x09void GroupLeave(FString aGroupName);\n// \x09//\n// \x09//\n// \x09// //Other Methods\n// \x09// //Adds the category to the platform\xe2\x80\x99s category list\n// \x09void AddCategory(FString aCategoryName);\n// \x09//\n// \x09// //Returns true if the platform is a member of the specified category\n// \x09""bool CategoryMemberOf(FString aCategoryName);\n// \x09//\n// \x09// //Sends a time-stamped comment entry for the platform to the simulation observers\n// \x09// //(such as event_output, dis_interface); This is typically used to insert application-specific data into\n// \x09// //the event logs or simulation output stream In event_output, the supplied FString will be written as a COMMENT entry\n// \x09// //For the dis_interface, a Comment PDU will be written which can be interpreted by many visualization tools as a \xe2\x80\x98thought bubble\xe2\x80\x99\n// \x09//\n// \x09// //The first form uses the current simulation time as the time of the comment\n// \x09// //The second form uses the supplied time as the time of the comment and should be used very carefully\n// \x09// //as time should only increase in some output streams\n// \x09void Comment(FString aComment);\n// \x09void Comment(double aTime, FString aComment);\n// \x09//\n// \x09// //Returns the point with the given name\n// \x09WsfGeoPoint GeoPoint(FString aGeoPointName);\n// \x09//\n// \x09// //Returns a track that represents the current state of the platform\n// \x09WsfTrack MakeTrack();\n// \x09//\n// \x09// //Changes the Platform\xe2\x80\x99s mover The platform actually starts using a copy of the specified mover\n// \x09// //Use WsfPlatformMover to access the mover after SwapMover is called\n// \x09// //If aMover is null, the platform will no longer have a mover Returns the mover the platform was using prior to the swap\n// \x09WsfMover SwapMover(WsfMover aMover);\n// \x09//\n// \x09//\n// \x09// //Changes the Platform\xe2\x80\x99s mover to a new mover of the given type\n// \x09// //Use WsfPlatformMover to access the mover after SwapMover is called If aMoverType is known,\n// \x09// //returns the mover the platform was using prior to the swap If aMoverType is unknown, this does nothing and will return a null object\n// \x09WsfMover SwapMover(FString aMoverType);\n// \x09//\n// \x09// //Enables (\xe2\x80\x98true\xe2\x80\x99); or disable (\xe2\x80\x98""false\xe2\x80\x99); the debug mode of the mover attached to the platform\n// \x09void SetMoverDebugEnabled(bool aBoolean);\n// \x09//\n// \x09// //Calculates and returns the centroid of the platform\xe2\x80\x99s subordinates\n// \x09WsfGeoPoint SubordinatesCentroid();\n// \x09//\n// \x09// //Returns the EntityType if it exists in the entity_type mapping command\n// \x09// EntityType EntityType();\n// \x09//\n// \x09// //Prints a list of the names and types of components attached to the platform, along with a descriptive header\n// \x09void PrintComponentInfo();\n// \x09//\n// \x09// //Returns a FString containing the names and types of components attached to the platform\n// \x09""FString GetComponentInfo();\n// \x09//\n// //Cyber Methods\n// //Attack Methods\n// \x09// //Initiates a cyber attack against the target platform \xe2\x80\x98""aTarget\xe2\x80\x99 using the attack type \xe2\x80\x98""aAttackType\xe2\x80\x99\n// \x09// //\xe2\x80\x98""aAttackType\xe2\x80\x99 must be a valid cyber_attack type\n// \x09// //Returns true if the command was successful or false if one of the arguments was incorrect\n// \x09// //This method will also return false is the attack contains an effect that requires the user to supply additional data,\n// \x09// //as the alternate CyberAttack method must be utilized\n// \x09""bool CyberAttack(WsfPlatform aTarget, FString aAttackType);\n// \x09//\n// \x09// //Initiates a cyber attack against the target platform \xe2\x80\x98""aTarget\xe2\x80\x99 using the attack type \xe2\x80\x98""aAttackType\xe2\x80\x99\n// \x09// //Certain effects require additional user supplied data at the time an attack is initiated,\n// \x09// //which is supplied via the \xe2\x80\x98""aParameters\xe2\x80\x99 object\n// \x09// //Returns true if the command was successful or false if one of the arguments was invalid\n// \x09// //If none of the effects associated with an attack require additional user data, this method will also return false and terminate execution\n// \x09""bool CyberAttack(WsfPlatform aTarget, FString aAttackType, WsfCyberAttackParameters aParameters);\n// \x09//\n// \x09// //Determines the perceived status of the most recent cyber attack against the target platform \xe2\x80\x98""aTarget\xe2\x80\x99 using the the attack type \xe2\x80\x98""aAttackType\xe2\x80\x99\n// \x09// //Returns:\n// \x09// //< 0 if the status is unknown (the delivery_delay_time has not expired or the victim has blocked the attack and prevented a status report);\n// \x09// //= 0 if the status is failed\n// \x09// //> 0 if the attack succeeded\n// \x09""bool CyberAttackStatus(WsfPlatform aTarget, FString aAttackType);\n// \x09//\n// \x09// //Returns the time when the last cyber attack was initiated against the target platform \xe2\x80\x98""aTarget\xe2\x80\x99 using the attack type \xe2\x80\x98""aAttackType\xe2\x80\x99\n// \x09// //\xe2\x80\x98""aAttackType\xe2\x80\x99 must be a valid cyber_attack type This will be a large positive value if an attack has never been attempted\n// \x09""double LastCyberAttackTime(WsfPlatform aTarget, FString aAttackType);\n// \x09//\n// \x09//\n// //Cancel Methods\n// \x09// //To cancel a pending scan/attack see WsfSimulationCyberScanCancel\n// \x09//\n// \x09// //Constraint Methods\n// \x09// //Initializes and/or returns a cyber constraint object associated with the platform object\n// \x09WsfCyberConstraint Constraint();\n// \x09//\n// \x09//\n// \x09// //Scan Methods\n// \x09// //Initiates a cyber scan against the target platform \xe2\x80\x98""aTarget\xe2\x80\x99 using the attack type \xe2\x80\x98""aAttackType\xe2\x80\x99\n// \x09// //\xe2\x80\x98""aAttackType\xe2\x80\x99 must be a valid cyber_attack type\n// \x09// //Returns true if the command was successful or false if one of the arguments was incorrect\n// \x09""bool CyberScan(WsfPlatform aTarget, FString aAttackType);\n// \x09//\n// \x09// //Determines the perceived status of the most recent cyber scan against the target platform \xe2\x80\x98""aTarget\xe2\x80\x99 using the attack type \xe2\x80\x98""aAttackType\xe2\x80\x99 \xe2\x80\x98""aAttackType\xe2\x80\x99 must be a valid cyber_attack type\n// \x09// //Returns:\n// \x09// //< 0 if the scan is still in progress (the scan_delay_time has not elapsed);\n// \x09// //= 0 if the scan was unsuccessful (target is not vulnerable);\n// \x09// //> 0 if the scan was successful (target is potentially vulnerable to an attack);\n// \x09""bool CyberScanStatus(WsfPlatform aTarget, FString aAttackType);\n// \x09//\n// \x09// //Returns the time when the last cyber scan was initiated against the target platform\n// \x09// //\xe2\x80\x98""aTarget\xe2\x80\x99 using the attack type \xe2\x80\x98""aAttackType\xe2\x80\x99 \xe2\x80\x98""aAttackType\xe2\x80\x99 must be a valid cyber_attack type\n// \x09// //This will be a large positive value if a scan has never been attempted\n// \x09//\n// \x09""double LastCyberScanTime(WsfPlatform aTarget, FString aAttackType);\n// \x09//\n// //Military Specific\n// //Subsystem Methods\n// //Returns the WsfWeapon object with the given name\n" },
#endif
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the platform\xe2\x80\x99s master raw track list,\nor list of raw tracks fused to form the master track list\nWsfTrackList MasterRawTrackList();\n\nReturns the local track list associated with the given track processor\nIf the track processor is a non-master track processor, the returned track list will not be the master track list\nNote: The track processor, name aTrackProcessorName, must exist on the platform; otherwise, the track list will be invalid\nWsfLocalTrackList TrackList(FString aTrackProcessorName);\n\nReturns the raw track list associated with the given track processor\nIf the track processor is a non-master track processor, the returned track list will not be the master raw track list\nNote: The track processor, name aTrackProcessorName, must exist on the platform; otherwise, the track list will be invalid\nWsfTrackList RawTrackList(FString aTrackProcessorName);\n\nReturns the \xe2\x80\x9cmaster\xe2\x80\x9d track manager (ie, the track manager that owns and maintains the master track list);\nWsfTrackManager TrackManager();\n\nReturns the WsfTrackId of the current target\nNote: return_valueIsNull(); will be true if there is no current target\nWsfTrackId CurrentTarget();\n\n\nSets the current target given a track and return the WsfTrackId of the current target track\nIf the argument is a sensor track and already correlated to a local track in the track manager\nthen the current target will be that local track\nIf the argument is a sensor track and NOT already correlated to a local track in the track manager\nthen a new correlated local track is created and the current target will be that new local track\nWsfTrackId SetCurrentTarget(WsfTrack aTrack);\n\nReturns true if the platform has a current target\nbool HasCurrentTarget();\n\nClears the current target\nvoid ClearCurrentTarget();\n\nReturns the WsfTrack of the current target\nNote: Use return_valueIsValid(); to ensure the return value is valid (ie, there is a current target); before using it\nWsfTrack CurrentTargetTrack();\n\nReturns the time to intercept and the intercept bearing An intercept time of -1 indicates that there is no solution\nThe intercept bearing is available in the WsfWaypoint that is passed in by reference\nAll forms of InterceptLocation2D require a track to intercept and return by reference a waypoint with the intercept bearing\ndouble InterceptLocation2D(WsfTrack aTrack, WsfWaypoint aWaypoint);\n\nSee above This version provides a third argument that outputs debug information about the intercept calculation\ndouble InterceptLocation2D(WsfTrack aTrack, WsfWaypoint aWaypoint, bool aDebug);\n\nSee above This version provides additional arguments for providing the ownship speed and a delay until that speed is reached\ndouble InterceptLocation2D(WsfTrack aTrack, WsfWaypoint aWaypoint, double aOwnshipSpeed, double aTimeDelay);\n\nSee above This version provides additional arguments for providing the ownship speed,\ndelay until that speed is reached, and whether to output debug information about the intercept calculation\ndouble InterceptLocation2D(WsfTrack aTrack, WsfWaypoint aWaypoint, double aOwnshipSpeed, double aTimeDelay,\n                           bool aDebug);\n\nReturns the intercept time, bearing, altitude An intercept time of -1 indicates that there is no solution\nThe intercept bearing and altitude is available in the WsfWaypoint that is passed in by reference\nAll forms of InterceptLocation3D require a track to intercept and return by reference a waypoint with the intercept bearing and altitude\ndouble InterceptLocation3D(WsfTrack aTrack, WsfWaypoint aWaypoint);\n\nSee above This version provides a third argument that outputs debug information about the intercept calculation\ndouble InterceptLocation3D(WsfTrack aTrack, WsfWaypoint aWaypoint, bool aDebug);\n\nSee above This version provides additional arguments for providing the ownship speed and a delay until that speed is reached\ndouble InterceptLocation3D(WsfTrack aTrack, WsfWaypoint aWaypoint, double aOwnshipSpeed, double aTimeDelay);\n\nSee above This version provides additional arguments for providing the ownship speed,\ndelay until that speed is reached,\nand whether to output debug information about the intercept calculation\ndouble InterceptLocation3D(WsfTrack aTrack, WsfWaypoint aWaypoint, double aOwnshipSpeed, double aTimeDelay,\n                           bool aDebug);\n\nReturns the time required to travel to the provided track (seconds);\nNote: This method is valid only for WSF_ROAD_MOVER\nLocation and Navigation Methods\ndouble TravelTime(WsfTrack aTrack);\n\nReturns the current location of the platform\nIn the second form, only the latitude, longitude and altitude of the waypoint is defined\nWsfGeoPoint Location();\nWsfWaypoint LocationAsWaypoint();\n\nReturns the height of the platform above the terrain (meters);\ndouble HeightAboveTerrain();\n\nReturns the platform\xe2\x80\x99s latitude, longitude (decimal degrees);\nor altitude (meters above mean sea level);, respectively\nNote: These commands should be used only if a single position component will be extracted\nIf multiple components will be extracted,\nit is more efficient to use Location and retrieve the individual components from the returned object\ndouble Latitude();\ndouble Longitude();\ndouble Altitude();\n\nReturns the \xe2\x80\x98x\xe2\x80\x99, \xe2\x80\x98y\xe2\x80\x99 or \xe2\x80\x98z\xe2\x80\x99 component of the platform\xe2\x80\x99s WCS position (meters);, respectively\nNote: These commands should be used only if a single position component will be extracted\nIf multiple components will be extracted, it is more efficient to use Location and retrieve the individual components from the returned object\ndouble X();\ndouble Y();\ndouble Z();\n\nReturns the \xe2\x80\x98x\xe2\x80\x99, \xe2\x80\x98y\xe2\x80\x99 or \xe2\x80\x98z\xe2\x80\x99 component of the platform\xe2\x80\x99s WCS velocity (meters/second);, respectively\ndouble Vx();\ndouble Vy();\ndouble Vz();\n\nReturns the location of the platform as perceived by itself\nThis location will be different than the value returned by Location only if navigation_errors have been defined for the platform\nWsfGeoPoint PerceivedLocation();\n\nReturns the difference between the perceived platform location as returned by PerceivedLocation and the true platform location by Location\nThe value will be non-zero only if navigation_errors have been defined for the platform\nFVector PerceivedLocationErrorNED();\nFVector PerceivedLocationErrorWCS();\n\nDefine the difference between the perceived platform location as returned by PerceivedLocation and the true platform location returned by Location\nThis method will have no effect unless navigation_errors have been defined for the platform and the value of GPS_Status\n(as set by SetGPS_Status or gps_status); is 3 (GPS errors can be set from an external source);\nvoid SetPerceivedLocationErrorWCS(FVector aLocationErrorWCS);\n\nReturns the anticipated location of the platform at the specified time in the future If the location cannot be determined then the return\nwill be invalid The return value should be tested for validity before attempting to use it\nThis method is currently only valid for WSF_AIR_MOVER, WSF_GROUND_MOVER, WSF_SURFACE_MOVER, WSF_SPACE_MOVER, WSF_NORAD_SPACE_MOVER,\nand WSF_INTEGRATING_SPACE_MOVER\nNote: For a platform with a space mover,\nthis method will not return a valid result when the current simulation time is during an orbital maneuver,\nor if there is the start of a maneuver before the time of the prediction time, aTime\nWsfGeoPoint FutureLocation(double aTime);\n\nReturns the WCS location of the platform in meters\nFVector LocationWCS();\n\nReturns the ECI location of the platform in meters\nFVector LocationECI();\n\nReturns the J2000 location of the platform in meters\nFVector LocationJ2000();\n\nReturns the location of the platform in MGRS (Military Grid Reference System); format\nFString LocationMGRS();\n\nReturns the WCS velocity of the platform in meters/second\nFVector VelocityWCS();\n\nReturns the NED velocity of the platform in meters/second\nFVector VelocityNED();\n\nReturns the ECI velocity of the platform in meters/second\nFVector VelocityECI();\n\nReturns the J2000 velocity of the platform in meters/second\nFVector VelocityJ2000();\n\nReturns the WCS acceleration of the platform in meters/second\nFVector AccelerationWCS();\n\nReturns the NED acceleration of the platform in meters/second\nFVector AccelerationNED();\n\nReturns the ECI acceleration of the platform in meters/second\nFVector AccelerationECI();\n\nReturns the platform\xe2\x80\x99s current speed (meters/second);\ndouble Speed();\n\nReturns the platform\xe2\x80\x99s current ground speed (meters/second);\ndouble GroundSpeed();\n\nReturns the target speed of the platform\xe2\x80\x99s mover if it is a WSF_WAYPOINT_MOVER\ndouble TargetSpeed();\n\nReturns the platform\xe2\x80\x99s current speed as a Mach number\ndouble MachNumber();\n\nReturns the platform\xe2\x80\x99s heading angle [-180, 180] (degrees);\ndouble Heading();\n\nReturns the platform\xe2\x80\x99s pitch angle [-90, 90] (degrees);\ndouble Pitch();\n\nReturns the platform\xe2\x80\x99s roll angle [-90, 90] (degrees);\ndouble Roll();\n\nReturns the platform\xe2\x80\x99s orientation in NED (yaw, pitch, roll degrees);\nFVector OrientationNED();\n\nReturns the platform\xe2\x80\x99s orientation in WCS (degrees);\nFVector OrientationWCS();\n\nReturns the platform\xe2\x80\x99s orientation in The Earth Centered Inertial System (ECI); (degrees);\nFVector OrientationECI();\n\nGiven a position in The Entity Coordinate System (ECS);, returns the position in WCS\nFVector ConvertECSToWCS(FVector aPosition);\n\nGiven a position in WCS, returns the position in The Entity Coordinate System (ECS);\nFVector ConvertWCSToECS(FVector aPosition);\n\nGiven a position in ECI, returns the position in WCS\nFVector ConvertECIToWCS(FVector aPosition);\n\nGiven a position in WCS, returns the position in ECI.\nFVector ConvertWCSToECI(FVector aPosition);\n\nSets the platform\xe2\x80\x99s desired Heading (body pointing angle); angle [-180, 180] (degrees);\nThe SetOrientationNED(); command is similar Implementation differs from the TurnToHeading command below,\nwhich is actually a turn to Course command Note: that most Mover types do not distinguish between heading and course angles,\nand much infrastructure is in place that assumes a heading command is a desire to move in a certain direction,\nrather than orient in a particular direction The WSF_ROTORCRAFT_MOVER is a notable exception to this rule,\nsee this documentation for syntax and usage details\nNote: A platform\xe2\x80\x99s mover can override this setting at any time\nvoid SetHeading(double aHeading);\n\nSets the platform\xe2\x80\x99s pitch angle [-90, 90] (degrees);\nNote: A platform\xe2\x80\x99s mover can override this setting at any time For instance,\nit cannot be used to set pitch if WSF_AIR_MOVER is providing the current platform\xe2\x80\x99s movement\nIt is recommended to use GoToAltitude();\nvoid SetPitch(double aPitch);\n\nSets the platform\xe2\x80\x99s roll angle [-90, 90] (degrees);\nNote: A platform\xe2\x80\x99s mover can override this setting at any time\nvoid SetRoll(double aRoll);\n\nCauses the platform to move to the waypoint on its route with the given label Return true if successful\nbool GoToLabel(FString aLabel);\n\nCauses the platform to move to the specified location (degrees, meters); Return true if successful\nIf the parameter is a waypoint, only the position of the waypoint is used\nbool GoToLocation(double aLat, double aLon, double aAlt);\nbool GoToLocation(double aLat, double aLon);\nbool GoToLocation(WsfWaypoint aPoint);\nbool GoToLocation(WsfGeoPoint aPoint);\n\nCauses the platform to move to a previously defined geo_point (by name or WsfGeoPoint);\nwith the option of adding a callback method when the platform reaches the given location\nbool GoToPoint(FString aGeoPointName);\nbool GoToPoint(WsfGeoPoint aLocation);\nbool GoToPoint(FString aGeoPointName, FString aCallbackFunction);\nbool GoToPoint(WsfGeoPoint aGeoPoint, FString aCallbackFunction);\n\nCauses the platform to adjust its altitude to the specified value (meters);\nIn the second form, the second argument is the positive altitude rate-of-change (meters/second);\nto be used to achieve the desired altitude It will be negated if the target altitude is less than the current altitude\nBy default, the mover will quit following the route and begin extrapolating on the current heading\nIf the third parameter is set to true, the mover will remain on the current route, but change the target altitude\nbool GoToAltitude(double aAlt);\nbool GoToAltitude(double aAlt, double aAltRateOfChange);\nbool GoToAltitude(double aAlt, double aAltRateOfChange, bool aKeepRoute);\n\nCauses the platform to adjust its speed to the specified value (meters/second);\nor Mach number, while maintaining its current path\nIn the two argument form, second argument is a positive linear acceleration to be used (meters/second^2);\nto be used to achieve the desired speed It will be negated if the target speed is less than the current speed\nBy default, the mover will quit following the route and begin extrapolating on the current heading\nIf the third parameter is set to true, the mover will remain on the current route, but change the target speed\nbool GoToSpeed(double aSpeed);\nbool GoToSpeed(double aSpeed, double aLinearAccel);\nbool GoToSpeed(double aSpeed, double aLinearAccel, bool aKeepRoute);\nbool GoToMachNumber(double aMachNumber);\nbool GoToMachNumber(double aMachNumber, double aLinearAccel);\n\nCauses the platform to turn to the given absolute Course (inadvertently referred to as Heading);\n[0, 360] (degrees); Return true if successful\nIn the second form, the second argument is the radial acceleration to be used (meters/second^2);\nto be used during the turn Realized radial acceleration will be limited by WSF_AIR_MOVER maximum_radial_acceleration\nbool TurnToHeading(double aHeading);\nbool TurnToHeading(double aHeading, double aRadialAccel);\n\nCauses the platform to turn to the given relative heading [-180, 180] (degrees); Return true if successful\nIn the second form, the second argument is the radial acceleration to be used (meters/second^2);\nto be used during the turn Realized radial acceleration will be limited by WSF_AIR_MOVER maximum_radial_acceleration\nbool TurnToRelativeHeading(double aHeading);\nbool TurnToRelativeHeading(double aHeading, double aRadialAccel);\n\nCauses the platform to drop its current path and follow the provided route\nThe starting point defaults to the first point in the route if not specified\nReturns true if successful\nWsfRoute aRoute indicates a script WsfRoute to follow\nFString aRouteName indicates a route to follow by either: * The name of a predefined route type defined with a global route command\n/ The FString \xe2\x80\x9c""DEFAULT_ROUTE\xe2\x80\x9d selects the initial route defined for the platform\nFString aLabel specifies an alternate starting point in the route as either:\n/ The label of a waypoint within the specified route\n/ The FString \xe2\x80\x9c""CLOSEST_POINT\xe2\x80\x9d selects the point that is closest to the current location\nint aIndex specifies an alternate starting point in the route as an integer where 0 is the first index into route\nbool FollowRoute(WsfRoute aRoute);\nbool FollowRoute(WsfRoute aRoute, FString aLabel);\nbool FollowRoute(WsfRoute aRoute, int aIndex);\nbool FollowRoute(FString aRouteName);\nbool FollowRoute(FString aRouteName, FString aLabel);\nbool FollowRoute(FString aRouteName, int aIndex);\n\nCauses to the platform to return to its default, or preplanned route following a diversion\nThe platform goes to the target waypoint it had at the time of the diversion Return true if successful\n\nImportant The following SetLocation, SetVelocity, and SetOrientation methods are not guaranteed to be compatible with all mover types\nFurthermore, they may be unsuccessful if invoked on uninitialized platforms created with WsfSimulationCreatePlatform\nbefore being added to the simulation\nbool ReturnToRoute();\n\nImmediately moves the platform to a new location This method may not be compatible with all mover types,\nor successful if invoked on uninitialized platforms created in script\nvoid SetLocation(double aLat, double aLon, double aAlt);\nvoid SetLocation(WsfGeoPoint aPoint);\n\nImmediately moves the platform to a new location The first form will place the platform on the ground\nThe second form will place the platform at the specified altitude (AGL); This method may not be compatible with all mover types,\nor successful if invoked on uninitialized platforms created in script\nbool SetLocationMGRS(FString aLocationMGRS);\nbool SetLocationMGRS(FString aLocationMGRS, double aAlt);\n\nChanges the platform\xe2\x80\x99s velocity in The Entity Coordinate System (ECS);\nThis method may not be compatible with all mover types, or successful if invoked on uninitialized platforms created in script\nvoid SetVelocityECS(double aForward, double aRight, double aDown);\n\nChanges the platform\xe2\x80\x99s velocity in North, East, Down This method may not be compatible with all mover types,\nor successful if invoked on uninitialized platforms created in script\nvoid SetVelocityNED(double aNorth, double aEast, double aDown);\n\nChanges the platform\xe2\x80\x99s orientation in heading, pitch, roll (in degrees);\nThis is only useful for platform\xe2\x80\x99s without a mover\nvoid SetOrientationNED(double aHeading, double aPitch, double aRoll);\n\nChanges the platform\xe2\x80\x99s orientation in WCS (degrees); This is only useful for platform\xe2\x80\x99s without a mover\nvoid SetOrientationWCS(double aPsi, double aTheta, double aPhi);\n\nReturns a reference to the current route the platform is traveling The returned route may not be modified, use Copy();\nand FollowRoute to modify the platform\xe2\x80\x99s route\nWsfRoute Route();\n\n\nReturns the index of the waypoint within the route to which the platform is moving towards\nNote: The return value is valid only if the platform is following a route\nint RoutePointIndex();\n\nImmediately moves the platform to the start and begins following a route Use FollowRoute();\nif you do not want move immediately to the beginning of the route\nReturns true if successful\nWsfRoute aRoute indicates a script WsfRoute to follow\nFString aRouteName indicates a route to follow by either:\n/ The name of a predefined route type defined with a global route command\n/ The FString \xe2\x80\x9c""DEFAULT_ROUTE\xe2\x80\x9d selects the initial route defined for the platform\nbool SetRoute(WsfRoute aRoute);\nbool SetRoute(FString aRouteName);\n\nStops platform movement until unpaused UnpauseTime is the absolute time the platform is to resume\nvoid Pause(double UnpauseTime);\n\nResumes platform movement if it was previously paused\nvoid Unpause();\n\nReturns the path finder attached to the platform\xe2\x80\x99s mover object\nNote: The current mover must be a type of route mover or the return value is invalid\nWsfPathFinder PathFinder();\n\nRelative Geometry Methods\nReturns the azimuth angle ([-180, 180] degrees);\nof the supplied point with respect to the current orientation of the platform (includes any yaw, pitch or roll angles);\ndouble RelativeAzimuthOf(WsfGeoPoint aPoint);\n\nReturns the elevation angle ([-90, 90] degrees);\nof the supplied point with respect to the current orientation of the platform (includes any yaw, pitch or roll angles);\ndouble RelativeElevationOf(WsfGeoPoint aPoint);\n\nReturns the bearing ([-180, 180] degrees); to the given location The angle is relative to north, with positive values being clockwise\ndouble TrueBearingTo(WsfTrack aTrack);\ndouble TrueBearingTo(WsfPlatform aPlatform);\ndouble TrueBearingTo(double aLat, double aLon, double aAlt);\ndouble TrueBearingTo(WsfGeoPoint aPoint);\n\nReturns the \xe2\x80\x98""apparent\xe2\x80\x99 azimuth angle ([-180, 180] degrees); and the elevation angle, in a two element array of type double,\nof the supplied point with respect to the current orientation of the platform (includes any yaw, pitch or roll angles);\nThe apparent location (ie, the perceived location of an object which accounts for atmospheric refraction);\nmay be needed to properly cue sensors that have very narrow beams\naEarthRadiusScale is a value that can be used to account for atmospheric refraction (typically 10);\nTArray<double> ApparentAspectOf(WsfGeoPoint aPoint, double aEarthRadiusScale);\n\nA value of less than or equal to zero is equivalent to specifying 10\n\nReturns the bearing ([-180, 180] degrees); to the given location\nThe angle is relative to the platforms current heading with positive values being clockwise\ndouble RelativeBearingTo(WsfTrack aTrack);\ndouble RelativeBearingTo(WsfPlatform aPlatform);\ndouble RelativeBearingTo(double aLat, double aLon, double aAlt);\ndouble RelativeBearingTo(WsfGeoPoint aPoint);\n\n\nReturns the slant range in meters between the platform and the indicated location If aUseSpherical is true,\ncalculate using spherical coordinates; if it is false or left unspecified, calculate using ellipsoidal coordinates\ndouble SlantRangeTo(WsfTrack aTrack);\ndouble SlantRangeTo(WsfTrack aTrack, bool aUseSpherical);\ndouble SlantRangeTo(WsfPlatform aPlatform);\ndouble SlantRangeTo(WsfPlatform aPlatform, bool aUseSpherical);\ndouble SlantRangeTo(double aLat, double aLon, double aAlt);\ndouble SlantRangeTo(double aLat, double aLon, double aAlt, bool aUseSpherical);\ndouble SlantRangeTo(WsfGeoPoint aPoint);\ndouble SlantRangeTo(WsfGeoPoint aPoint, bool aUseSpherical);\ndouble SlantRangeTo(WsfWaypoint aPoint);\ndouble SlantRangeTo(WsfWaypoint aPoint, bool aUseSpherical);\n\nReturns the approximate ground range in meters between the platform and the indicated location Calculated using spherical coordinates\ndouble GroundRangeTo(WsfTrack aTrack);\ndouble GroundRangeTo(WsfPlatform aPlatform);\ndouble GroundRangeTo(double aLat, double aLon, double aAlt);\ndouble GroundRangeTo(WsfGeoPoint aPoint);\n\n\nReturns the approximate down range in meters between the platform and the indicated location\nThis is the ground range times the cosine of the relative bearing to the location\nPositive values indicate the location is in front of the platform while negative values indicate it is behind the platform\nCalculated using spherical coordinates\ndouble DownRangeTo(WsfTrack aTrack);\ndouble DownRangeTo(WsfPlatform aPlatform);\ndouble DownRangeTo(double aLat, double aLon, double aAlt);\ndouble DownRangeTo(WsfGeoPoint aPoint);\n\n\nReturns the approximate cross range in meters between the platform and the indicated location\nThis is the ground range times the sine of the relative bearing to the location\nPositive values indicate the location is to the right of the platform while negative values indicate it is to the left of the platform\nCalculated using spherical coordinates\ndouble CrossRangeTo(WsfTrack aTrack);\ndouble CrossRangeTo(WsfPlatform aPlatform);\ndouble CrossRangeTo(double aLat, double aLon, double aAlt);\ndouble CrossRangeTo(WsfGeoPoint aPoint);\n\n\nReturns the approximate point at which the indicated object would pass closest to the platform\nIt is derived by extending the horizontal components of the velocity vector of the indicated object\nand determining the point at which the line passes closest to the platform If the object is not moving\nor if it is coincident with the requesting platform, the returned value will be the current position of the object\nWsfGeoPoint ClosestApproachOf(WsfTrack aTrack);\nWsfGeoPoint ClosestApproachOf(WsfPlatform aPlatform);\n\nNote: The velocity of the requesting platform is not considered in this calculation (ie, it is not an intercept calculation);\nReturns the difference in heading in degrees between the platform and the indicated object\nThat is, result = heading of platform - heading of object normalized to the range [-180, 180]\nThe sign of the value indicates the potential direction of the crossing of the objects\nA positive value indicates the object would cross the platform\xe2\x80\x99s path from left to right\nwhile a negative value indicates it would cross from right to left A value of zero indicates the objects are traveling\nin the same direction while a value of 180 indicates they are traveling in opposite directions\ndouble HeadingDifferenceOf(WsfTrack aTrack);\ndouble HeadingDifferenceOf(WsfPlatform aPlatform);\n\n\nReturns the closing speed in meters per second between the platform and the indicated object\nThis value is the component of the total velocity in the direction of the vector between the two objects\nPositive values mean the objects are closing and negative values mean the objects are separating\ndouble ClosingSpeedOf(WsfTrack aTrack);\ndouble ClosingSpeedOf(WsfPlatform aPlatform);\ndouble ClosingSpeedOf(WsfTrack aTrack, double aMySpeed);\ndouble ClosingSpeedOf(WsfPlatform aPlatform, double aMySpeed);\n\nIs the given track or platform within the field of view of this platform\xe2\x80\x99s sensor?\nbool WithinFieldOfView(WsfTrack aTrack, FString aMySensorName);\nbool WithinFieldOfView(WsfPlatform aPlatform, FString aMySensorName);\n\n\nReturns true if the line of sight between the platform and the supplied point is masked (obscured); by the terrain\naVerticalOffset is the amount added to the platform altitude to simulate the height of the observer (eg, antenna); above the platform\naRadiusScaleFactor is the scale factor to be applied to Earths radius to simulate atmospheric refraction\nThis value is typically 13333 (4 / 3); for radio frequencies\nbool MaskedByTerrain(WsfGeoPoint aPoint, double aVerticalOffset, double aRadiusScaleFactor);\n\nReturn the apparent mean solar time at the position of this platform in hours since midnight\ndouble ApparentTime();\n\n\nCompatibility Methods\nReturns the signed difference between the specified track and the requesting platform\nA positive value means the altitude of the track is above the requesting platform\ndouble RelativeAltitudeOf(WsfTrack aTrack);\n\nThis returns the absolute value of the angle between the line-of-sight vector from the target (represented by the supplied track);\nto the requesting platform and the heading vector of the target\nNote: The track must have a valid non-zero velocity, or a large value (10E+10); will be returned\ndouble RelativeHeadingOf(WsfTrack aTrack);\n\nThis returns the approximate ground range (in meters); to the point of closest approach of the target represented by the specified track\nNote: The track must have a valid non-zero velocity, or a large value (10E+10); will be returned\ndouble RelativeOffsetOf(WsfTrack aTrack);\n\nZone Methods\nReturns the WsfZone script object matching the given zone name\nWsfZone Zone(FString aZoneName);\n\nReturns \xe2\x80\x98true\xe2\x80\x99 if the platform is within the specified zone defined on the platform\nThe zone can be created on the platform using the zone \xe2\x80\xa6 end_zone block or the use_zone command See platform\nbool WithinZone(FString aZoneName);\n\nReturns \xe2\x80\x98true\xe2\x80\x99 if the platform is within the specified zone defined on the specified platform\nThe zone can be created on the platform using the zone \xe2\x80\xa6 end_zone block or the use_zone command See platform\nbool WithinZoneOf(WsfPlatform aPlatform, FString aZoneName);\n\nReturns an array of the names for all zones that were defined on the platform\nTArray<FString> ZoneNames();\n\nReturns an array of WsfZone objects that were defined on the platform\nTArray<WsfZone> Zones();\n\n\nAuxiliary Data Methods\nAuxiliary Data is a collection of optional named user data attributes that can be stored with the object\nThe framework will maintain the attributes but in no other way attempts to use the data contained within\nThe definition and use of any attribute is defined purely by the user\nRetrieve the value of the auxiliary data attribute with the indicated name\nIf the attribute does not exist then a default value will be returned (false for bool, 0 for int and 00 for double);\nbool AuxDataBool(FString aName);\nint AuxDataInt(FString aName);\ndouble AuxDataDouble(FString aName);\nFString AuxDataFString(FString aName);\nWsfObject AuxDataObject(FString aName);\n\nReturns true if an auxiliary data member exists with the specified name\nbool AuxDataExists(FString aName);\nbool CheckAuxData(FString aName);\n\nReturns true if the object has auxiliary data\nbool HasAuxData();\n\nDelete the auxiliary data attribute with the indicated name\nReturns true if the attribute exists and was deleted, or false if the attribute did not exist\nbool DeleteAuxData(FString aName);\n\n\nSet the value of the auxiliary data attribute with the indicated name\nThe last form of SetAuxData(); can store any script object type\nvoid SetAuxData(FString aName, bool aValue);\nvoid SetAuxData(FString aName, int aValue);\nvoid SetAuxData(FString aName, double aValue);\nvoid SetAuxData(FString aName, FString aValue);\nvoid SetAuxData(FString aName, WsfObject aValue);\n\n\nReturn the names and types of all auxiliary data attributes in the form of a Map<FString,FString>\nMap keys are valid names of auxiliary data attributes\nMap values are type names corresponding to valid auxiliary data attribute names\nTMap<FString, FString> GetAllAuxDataTypes();\n\n\nGroup Methods\nReturns true if the platform is a member of the specified group (by name, id or object);\nbool GroupMemberOf(FString aGroupName);\nbool GroupMemberOf(WsfGroup aGroupPtr);\n\nReturns a list of all groups this platform is a member of\nTArray<WsfGroup> Groups();\n\nReturns a list of the names of all groups this platform is a member of\nTArray<FString> GroupsByName();\n\nJoins the given group if it exists in the simulation\nvoid GroupJoin(FString aGroupName);\n\nLeaves the given group if this platform is a member\nvoid GroupLeave(FString aGroupName);\n\n\nOther Methods\nAdds the category to the platform\xe2\x80\x99s category list\nvoid AddCategory(FString aCategoryName);\n\nReturns true if the platform is a member of the specified category\nbool CategoryMemberOf(FString aCategoryName);\n\nSends a time-stamped comment entry for the platform to the simulation observers\n(such as event_output, dis_interface); This is typically used to insert application-specific data into\nthe event logs or simulation output stream In event_output, the supplied FString will be written as a COMMENT entry\nFor the dis_interface, a Comment PDU will be written which can be interpreted by many visualization tools as a \xe2\x80\x98thought bubble\xe2\x80\x99\n\nThe first form uses the current simulation time as the time of the comment\nThe second form uses the supplied time as the time of the comment and should be used very carefully\nas time should only increase in some output streams\nvoid Comment(FString aComment);\nvoid Comment(double aTime, FString aComment);\n\nReturns the point with the given name\nWsfGeoPoint GeoPoint(FString aGeoPointName);\n\nReturns a track that represents the current state of the platform\nWsfTrack MakeTrack();\n\nChanges the Platform\xe2\x80\x99s mover The platform actually starts using a copy of the specified mover\nUse WsfPlatformMover to access the mover after SwapMover is called\nIf aMover is null, the platform will no longer have a mover Returns the mover the platform was using prior to the swap\nWsfMover SwapMover(WsfMover aMover);\n\n\nChanges the Platform\xe2\x80\x99s mover to a new mover of the given type\nUse WsfPlatformMover to access the mover after SwapMover is called If aMoverType is known,\nreturns the mover the platform was using prior to the swap If aMoverType is unknown, this does nothing and will return a null object\nWsfMover SwapMover(FString aMoverType);\n\nEnables (\xe2\x80\x98true\xe2\x80\x99); or disable (\xe2\x80\x98""false\xe2\x80\x99); the debug mode of the mover attached to the platform\nvoid SetMoverDebugEnabled(bool aBoolean);\n\nCalculates and returns the centroid of the platform\xe2\x80\x99s subordinates\nWsfGeoPoint SubordinatesCentroid();\n\nReturns the EntityType if it exists in the entity_type mapping command\nEntityType EntityType();\n\nPrints a list of the names and types of components attached to the platform, along with a descriptive header\nvoid PrintComponentInfo();\n\nReturns a FString containing the names and types of components attached to the platform\nFString GetComponentInfo();\n\nCyber Methods\nAttack Methods\nInitiates a cyber attack against the target platform \xe2\x80\x98""aTarget\xe2\x80\x99 using the attack type \xe2\x80\x98""aAttackType\xe2\x80\x99\n\xe2\x80\x98""aAttackType\xe2\x80\x99 must be a valid cyber_attack type\nReturns true if the command was successful or false if one of the arguments was incorrect\nThis method will also return false is the attack contains an effect that requires the user to supply additional data,\nas the alternate CyberAttack method must be utilized\nbool CyberAttack(WsfPlatform aTarget, FString aAttackType);\n\nInitiates a cyber attack against the target platform \xe2\x80\x98""aTarget\xe2\x80\x99 using the attack type \xe2\x80\x98""aAttackType\xe2\x80\x99\nCertain effects require additional user supplied data at the time an attack is initiated,\nwhich is supplied via the \xe2\x80\x98""aParameters\xe2\x80\x99 object\nReturns true if the command was successful or false if one of the arguments was invalid\nIf none of the effects associated with an attack require additional user data, this method will also return false and terminate execution\nbool CyberAttack(WsfPlatform aTarget, FString aAttackType, WsfCyberAttackParameters aParameters);\n\nDetermines the perceived status of the most recent cyber attack against the target platform \xe2\x80\x98""aTarget\xe2\x80\x99 using the the attack type \xe2\x80\x98""aAttackType\xe2\x80\x99\nReturns:\n< 0 if the status is unknown (the delivery_delay_time has not expired or the victim has blocked the attack and prevented a status report);\n= 0 if the status is failed\n> 0 if the attack succeeded\nbool CyberAttackStatus(WsfPlatform aTarget, FString aAttackType);\n\nReturns the time when the last cyber attack was initiated against the target platform \xe2\x80\x98""aTarget\xe2\x80\x99 using the attack type \xe2\x80\x98""aAttackType\xe2\x80\x99\n\xe2\x80\x98""aAttackType\xe2\x80\x99 must be a valid cyber_attack type This will be a large positive value if an attack has never been attempted\ndouble LastCyberAttackTime(WsfPlatform aTarget, FString aAttackType);\n\n\nCancel Methods\nTo cancel a pending scan/attack see WsfSimulationCyberScanCancel\n\nConstraint Methods\nInitializes and/or returns a cyber constraint object associated with the platform object\nWsfCyberConstraint Constraint();\n\n\nScan Methods\nInitiates a cyber scan against the target platform \xe2\x80\x98""aTarget\xe2\x80\x99 using the attack type \xe2\x80\x98""aAttackType\xe2\x80\x99\n\xe2\x80\x98""aAttackType\xe2\x80\x99 must be a valid cyber_attack type\nReturns true if the command was successful or false if one of the arguments was incorrect\nbool CyberScan(WsfPlatform aTarget, FString aAttackType);\n\nDetermines the perceived status of the most recent cyber scan against the target platform \xe2\x80\x98""aTarget\xe2\x80\x99 using the attack type \xe2\x80\x98""aAttackType\xe2\x80\x99 \xe2\x80\x98""aAttackType\xe2\x80\x99 must be a valid cyber_attack type\nReturns:\n< 0 if the scan is still in progress (the scan_delay_time has not elapsed);\n= 0 if the scan was unsuccessful (target is not vulnerable);\n> 0 if the scan was successful (target is potentially vulnerable to an attack);\nbool CyberScanStatus(WsfPlatform aTarget, FString aAttackType);\n\nReturns the time when the last cyber scan was initiated against the target platform\n\xe2\x80\x98""aTarget\xe2\x80\x99 using the attack type \xe2\x80\x98""aAttackType\xe2\x80\x99 \xe2\x80\x98""aAttackType\xe2\x80\x99 must be a valid cyber_attack type\nThis will be a large positive value if a scan has never been attempted\n\ndouble LastCyberScanTime(WsfPlatform aTarget, FString aAttackType);\n\nMilitary Specific\nSubsystem Methods\nReturns the WsfWeapon object with the given name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_aName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfPlatform_Weapon_Statics::NewProp_aName = { "aName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfPlatform_eventWeapon_Parms, aName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWsfPlatform_Weapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfPlatform_eventWeapon_Parms, ReturnValue), Z_Construct_UClass_UWsfWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfPlatform_Weapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_Weapon_Statics::NewProp_aName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_Weapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_Weapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_Weapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "Weapon", nullptr, nullptr, Z_Construct_UFunction_UWsfPlatform_Weapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_Weapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfPlatform_Weapon_Statics::WsfPlatform_eventWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_Weapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_Weapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfPlatform_Weapon_Statics::WsfPlatform_eventWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfPlatform_Weapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_Weapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execWeapon)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_aName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWsfWeapon**)Z_Param__Result=P_THIS->Weapon(Z_Param_aName);
	P_NATIVE_END;
}
// End Class UWsfPlatform Function Weapon

// Begin Class UWsfPlatform Function WeaponCount
struct Z_Construct_UFunction_UWsfPlatform_WeaponCount_Statics
{
	struct WsfPlatform_eventWeaponCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfPlatform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n// //Returns the number of weapon instances on this platform This is not the weapon quantity\n" },
#endif
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of weapon instances on this platform This is not the weapon quantity" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWsfPlatform_WeaponCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfPlatform_eventWeaponCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfPlatform_WeaponCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfPlatform_WeaponCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_WeaponCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfPlatform_WeaponCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfPlatform, nullptr, "WeaponCount", nullptr, nullptr, Z_Construct_UFunction_UWsfPlatform_WeaponCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_WeaponCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfPlatform_WeaponCount_Statics::WsfPlatform_eventWeaponCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfPlatform_WeaponCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfPlatform_WeaponCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfPlatform_WeaponCount_Statics::WsfPlatform_eventWeaponCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfPlatform_WeaponCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfPlatform_WeaponCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfPlatform::execWeaponCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->WeaponCount();
	P_NATIVE_END;
}
// End Class UWsfPlatform Function WeaponCount

// Begin Class UWsfPlatform
void UWsfPlatform::StaticRegisterNativesUWsfPlatform()
{
	UClass* Class = UWsfPlatform::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "bluePrintPrase", &UWsfPlatform::execbluePrintPrase },
		{ "CreationTime", &UWsfPlatform::execCreationTime },
		{ "ExecuteGlobalScript", &UWsfPlatform::execExecuteGlobalScript },
		{ "getString", &UWsfPlatform::execgetString },
		{ "Icon", &UWsfPlatform::execIcon },
		{ "Index", &UWsfPlatform::execIndex },
		{ "MasterTrackList", &UWsfPlatform::execMasterTrackList },
		{ "on_damage_received", &UWsfPlatform::execon_damage_received },
		{ "on_initialize", &UWsfPlatform::execon_initialize },
		{ "on_initialize2", &UWsfPlatform::execon_initialize2 },
		{ "on_platform_deleted", &UWsfPlatform::execon_platform_deleted },
		{ "on_update", &UWsfPlatform::execon_update },
		{ "SetCreationTime", &UWsfPlatform::execSetCreationTime },
		{ "SetIcon", &UWsfPlatform::execSetIcon },
		{ "SetSide", &UWsfPlatform::execSetSide },
		{ "Side", &UWsfPlatform::execSide },
		{ "TimeSinceCreation", &UWsfPlatform::execTimeSinceCreation },
		{ "Weapon", &UWsfPlatform::execWeapon },
		{ "WeaponCount", &UWsfPlatform::execWeaponCount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWsfPlatform);
UClass* Z_Construct_UClass_UWsfPlatform_NoRegister()
{
	return UWsfPlatform::StaticClass();
}
struct Z_Construct_UClass_UWsfPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *   The Base of all PlatformType\n */" },
#endif
		{ "IncludePath", "Platform/WsfPlatform.h" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Base of all PlatformType" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaformParams_MetaData[] = {
		{ "Category", "WSF_PLATFORM" },
		{ "ModuleRelativePath", "Platform/WsfPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaformParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWsfPlatform_bluePrintPrase, "bluePrintPrase" }, // 148191879
		{ &Z_Construct_UFunction_UWsfPlatform_CreationTime, "CreationTime" }, // 2414365697
		{ &Z_Construct_UFunction_UWsfPlatform_ExecuteGlobalScript, "ExecuteGlobalScript" }, // 246859860
		{ &Z_Construct_UFunction_UWsfPlatform_getString, "getString" }, // 1922303464
		{ &Z_Construct_UFunction_UWsfPlatform_Icon, "Icon" }, // 4021228331
		{ &Z_Construct_UFunction_UWsfPlatform_Index, "Index" }, // 2435566250
		{ &Z_Construct_UFunction_UWsfPlatform_MasterTrackList, "MasterTrackList" }, // 29988520
		{ &Z_Construct_UFunction_UWsfPlatform_on_damage_received, "on_damage_received" }, // 1021879149
		{ &Z_Construct_UFunction_UWsfPlatform_on_initialize, "on_initialize" }, // 466359173
		{ &Z_Construct_UFunction_UWsfPlatform_on_initialize2, "on_initialize2" }, // 2832520384
		{ &Z_Construct_UFunction_UWsfPlatform_on_platform_deleted, "on_platform_deleted" }, // 2875948739
		{ &Z_Construct_UFunction_UWsfPlatform_on_update, "on_update" }, // 1959156236
		{ &Z_Construct_UFunction_UWsfPlatform_SetCreationTime, "SetCreationTime" }, // 1976041079
		{ &Z_Construct_UFunction_UWsfPlatform_SetIcon, "SetIcon" }, // 3053588501
		{ &Z_Construct_UFunction_UWsfPlatform_SetSide, "SetSide" }, // 1809059143
		{ &Z_Construct_UFunction_UWsfPlatform_Side, "Side" }, // 2240403866
		{ &Z_Construct_UFunction_UWsfPlatform_TimeSinceCreation, "TimeSinceCreation" }, // 2893111642
		{ &Z_Construct_UFunction_UWsfPlatform_Weapon, "Weapon" }, // 3533627990
		{ &Z_Construct_UFunction_UWsfPlatform_WeaponCount, "WeaponCount" }, // 1678810738
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWsfPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWsfPlatform_Statics::NewProp_PlaformParams = { "PlaformParams", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWsfPlatform, PlaformParams), Z_Construct_UScriptStruct_FFPlatform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaformParams_MetaData), NewProp_PlaformParams_MetaData) }; // 3983031421
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWsfPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWsfPlatform_Statics::NewProp_PlaformParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfPlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWsfPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWsfObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWsfPlatform_Statics::ClassParams = {
	&UWsfPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWsfPlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWsfPlatform_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_UWsfPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWsfPlatform()
{
	if (!Z_Registration_Info_UClass_UWsfPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWsfPlatform.OuterSingleton, Z_Construct_UClass_UWsfPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWsfPlatform.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UWsfPlatform>()
{
	return UWsfPlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWsfPlatform);
UWsfPlatform::~UWsfPlatform() {}
// End Class UWsfPlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIcon_StaticEnum, TEXT("EIcon"), &Z_Registration_Info_UEnum_EIcon, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2638291761U) },
		{ ESide_StaticEnum, TEXT("ESide"), &Z_Registration_Info_UEnum_ESide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2931397930U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFPlatform::StaticStruct, Z_Construct_UScriptStruct_FFPlatform_Statics::NewStructOps, TEXT("FPlatform"), &Z_Registration_Info_UScriptStruct_FPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFPlatform), 3983031421U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWsfPlatform, UWsfPlatform::StaticClass, TEXT("UWsfPlatform"), &Z_Registration_Info_UClass_UWsfPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWsfPlatform), 3798317984U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h_708207021(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
