// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/PlatformPart/Mover/WsfGuidedMover.h"
#include "TaskPlan/PlatformPart/Mover/WsfMover.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWsfGuidedMover() {}

// Begin Cross Module References
TASKPLAN_API UClass* Z_Construct_UClass_UWsfGuidedMover();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfGuidedMover_NoRegister();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfMover();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFMoverStage();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFWsfGuidedMover();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFWsfMover();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin ScriptStruct FFMoverStage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverStage;
class UScriptStruct* FFMoverStage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverStage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverStage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMoverStage, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("FMoverStage"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverStage.OuterSingleton;
}
template<> TASKPLAN_API UScriptStruct* StaticStruct<FFMoverStage>()
{
	return FFMoverStage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFMoverStage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aero_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_empty_mass_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fuel_mass_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_total_mass_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_thrust_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sea_level_thrust_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_vacuum_thrust_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_thrust_table_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sea_level_thrust_table_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_vacuum_thrust_table_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reverse_thrust_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_specific_impulse_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sea_level_specific_impulse_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_vacuum_specific_impulse_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_nozzle_exit_area_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_thrust_duration_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_burn_rate_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_burn_rate_table_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_throttle_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_thrust_vectoring_angle_limit_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_thrust_vectoring_time_limits_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lateral_thrust_gain_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_divert_thrust_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_divert_fuel_mass_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_divert_fuel_flow_rate_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_divert_altitude_limits_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pre_ignition_coast_time_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pre_separation_coast_time_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_integration_timestep_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ignition_failure_probability_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_separation_failure_probability_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_angle_of_attack_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bank_to_turn_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_skid_to_turn_MetaData[] = {
		{ "Category", "WSF_MOVER_STAGE" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_aero;
	static const UECodeGen_Private::FIntPropertyParams NewProp_empty_mass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_fuel_mass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_total_mass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_thrust;
	static const UECodeGen_Private::FIntPropertyParams NewProp_sea_level_thrust;
	static const UECodeGen_Private::FIntPropertyParams NewProp_vacuum_thrust;
	static const UECodeGen_Private::FIntPropertyParams NewProp_thrust_table;
	static const UECodeGen_Private::FIntPropertyParams NewProp_sea_level_thrust_table;
	static const UECodeGen_Private::FIntPropertyParams NewProp_vacuum_thrust_table;
	static const UECodeGen_Private::FIntPropertyParams NewProp_reverse_thrust;
	static const UECodeGen_Private::FIntPropertyParams NewProp_specific_impulse;
	static const UECodeGen_Private::FIntPropertyParams NewProp_sea_level_specific_impulse;
	static const UECodeGen_Private::FIntPropertyParams NewProp_vacuum_specific_impulse;
	static const UECodeGen_Private::FIntPropertyParams NewProp_nozzle_exit_area;
	static const UECodeGen_Private::FIntPropertyParams NewProp_thrust_duration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_burn_rate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_burn_rate_table;
	static const UECodeGen_Private::FIntPropertyParams NewProp_throttle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_thrust_vectoring_angle_limit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_thrust_vectoring_time_limits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_lateral_thrust_gain;
	static const UECodeGen_Private::FIntPropertyParams NewProp_divert_thrust;
	static const UECodeGen_Private::FIntPropertyParams NewProp_divert_fuel_mass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_divert_fuel_flow_rate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_divert_altitude_limits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_pre_ignition_coast_time;
	static const UECodeGen_Private::FIntPropertyParams NewProp_pre_separation_coast_time;
	static const UECodeGen_Private::FIntPropertyParams NewProp_integration_timestep;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ignition_failure_probability;
	static const UECodeGen_Private::FIntPropertyParams NewProp_separation_failure_probability;
	static const UECodeGen_Private::FIntPropertyParams NewProp_angle_of_attack;
	static const UECodeGen_Private::FIntPropertyParams NewProp_bank_to_turn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_skid_to_turn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMoverStage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_aero = { "aero", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, aero), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aero_MetaData), NewProp_aero_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_empty_mass = { "empty_mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, empty_mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_empty_mass_MetaData), NewProp_empty_mass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_fuel_mass = { "fuel_mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, fuel_mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fuel_mass_MetaData), NewProp_fuel_mass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_total_mass = { "total_mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, total_mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_total_mass_MetaData), NewProp_total_mass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_thrust = { "thrust", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, thrust), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_thrust_MetaData), NewProp_thrust_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_sea_level_thrust = { "sea_level_thrust", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, sea_level_thrust), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sea_level_thrust_MetaData), NewProp_sea_level_thrust_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_vacuum_thrust = { "vacuum_thrust", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, vacuum_thrust), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_vacuum_thrust_MetaData), NewProp_vacuum_thrust_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_thrust_table = { "thrust_table", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, thrust_table), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_thrust_table_MetaData), NewProp_thrust_table_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_sea_level_thrust_table = { "sea_level_thrust_table", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, sea_level_thrust_table), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sea_level_thrust_table_MetaData), NewProp_sea_level_thrust_table_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_vacuum_thrust_table = { "vacuum_thrust_table", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, vacuum_thrust_table), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_vacuum_thrust_table_MetaData), NewProp_vacuum_thrust_table_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_reverse_thrust = { "reverse_thrust", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, reverse_thrust), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reverse_thrust_MetaData), NewProp_reverse_thrust_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_specific_impulse = { "specific_impulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, specific_impulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_specific_impulse_MetaData), NewProp_specific_impulse_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_sea_level_specific_impulse = { "sea_level_specific_impulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, sea_level_specific_impulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sea_level_specific_impulse_MetaData), NewProp_sea_level_specific_impulse_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_vacuum_specific_impulse = { "vacuum_specific_impulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, vacuum_specific_impulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_vacuum_specific_impulse_MetaData), NewProp_vacuum_specific_impulse_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_nozzle_exit_area = { "nozzle_exit_area", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, nozzle_exit_area), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_nozzle_exit_area_MetaData), NewProp_nozzle_exit_area_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_thrust_duration = { "thrust_duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, thrust_duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_thrust_duration_MetaData), NewProp_thrust_duration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_burn_rate = { "burn_rate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, burn_rate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_burn_rate_MetaData), NewProp_burn_rate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_burn_rate_table = { "burn_rate_table", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, burn_rate_table), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_burn_rate_table_MetaData), NewProp_burn_rate_table_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_throttle = { "throttle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, throttle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_throttle_MetaData), NewProp_throttle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_thrust_vectoring_angle_limit = { "thrust_vectoring_angle_limit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, thrust_vectoring_angle_limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_thrust_vectoring_angle_limit_MetaData), NewProp_thrust_vectoring_angle_limit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_thrust_vectoring_time_limits = { "thrust_vectoring_time_limits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, thrust_vectoring_time_limits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_thrust_vectoring_time_limits_MetaData), NewProp_thrust_vectoring_time_limits_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_lateral_thrust_gain = { "lateral_thrust_gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, lateral_thrust_gain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lateral_thrust_gain_MetaData), NewProp_lateral_thrust_gain_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_divert_thrust = { "divert_thrust", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, divert_thrust), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_divert_thrust_MetaData), NewProp_divert_thrust_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_divert_fuel_mass = { "divert_fuel_mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, divert_fuel_mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_divert_fuel_mass_MetaData), NewProp_divert_fuel_mass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_divert_fuel_flow_rate = { "divert_fuel_flow_rate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, divert_fuel_flow_rate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_divert_fuel_flow_rate_MetaData), NewProp_divert_fuel_flow_rate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_divert_altitude_limits = { "divert_altitude_limits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, divert_altitude_limits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_divert_altitude_limits_MetaData), NewProp_divert_altitude_limits_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_pre_ignition_coast_time = { "pre_ignition_coast_time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, pre_ignition_coast_time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pre_ignition_coast_time_MetaData), NewProp_pre_ignition_coast_time_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_pre_separation_coast_time = { "pre_separation_coast_time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, pre_separation_coast_time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pre_separation_coast_time_MetaData), NewProp_pre_separation_coast_time_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_integration_timestep = { "integration_timestep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, integration_timestep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_integration_timestep_MetaData), NewProp_integration_timestep_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_ignition_failure_probability = { "ignition_failure_probability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, ignition_failure_probability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ignition_failure_probability_MetaData), NewProp_ignition_failure_probability_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_separation_failure_probability = { "separation_failure_probability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, separation_failure_probability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_separation_failure_probability_MetaData), NewProp_separation_failure_probability_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_angle_of_attack = { "angle_of_attack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, angle_of_attack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_angle_of_attack_MetaData), NewProp_angle_of_attack_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_bank_to_turn = { "bank_to_turn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, bank_to_turn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bank_to_turn_MetaData), NewProp_bank_to_turn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_skid_to_turn = { "skid_to_turn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMoverStage, skid_to_turn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_skid_to_turn_MetaData), NewProp_skid_to_turn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMoverStage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_aero,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_empty_mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_fuel_mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_total_mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_thrust,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_sea_level_thrust,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_vacuum_thrust,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_thrust_table,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_sea_level_thrust_table,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_vacuum_thrust_table,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_reverse_thrust,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_specific_impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_sea_level_specific_impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_vacuum_specific_impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_nozzle_exit_area,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_thrust_duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_burn_rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_burn_rate_table,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_throttle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_thrust_vectoring_angle_limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_thrust_vectoring_time_limits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_lateral_thrust_gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_divert_thrust,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_divert_fuel_mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_divert_fuel_flow_rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_divert_altitude_limits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_pre_ignition_coast_time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_pre_separation_coast_time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_integration_timestep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_ignition_failure_probability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_separation_failure_probability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_angle_of_attack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_bank_to_turn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMoverStage_Statics::NewProp_skid_to_turn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMoverStage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMoverStage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	&NewStructOps,
	"FMoverStage",
	Z_Construct_UScriptStruct_FFMoverStage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMoverStage_Statics::PropPointers),
	sizeof(FFMoverStage),
	alignof(FFMoverStage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMoverStage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFMoverStage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFMoverStage()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverStage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverStage.InnerSingleton, Z_Construct_UScriptStruct_FFMoverStage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverStage.InnerSingleton;
}
// End ScriptStruct FFMoverStage

// Begin ScriptStruct FFWsfGuidedMover
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWsfGuidedMover;
class UScriptStruct* FFWsfGuidedMover::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWsfGuidedMover.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWsfGuidedMover.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFWsfGuidedMover, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("FWsfGuidedMover"));
	}
	return Z_Registration_Info_UScriptStruct_FWsfGuidedMover.OuterSingleton;
}
template<> TASKPLAN_API UScriptStruct* StaticStruct<FFWsfGuidedMover>()
{
	return FFWsfGuidedMover::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//file:///E:/Project/RS250055/Refproject/AFSim/am-2.9.0-win64/documentation/html/docs/wsf_guided_mover.html?highlight=wsf_\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "file:E:/Project/RS250055/Refproject/AFSim/am-2.9.0-win64/documentation/html/docs/wsf_guided_mover.html?highlight=wsf_" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoverCommand_MetaData[] = {
		{ "Category", "WSF_GUIDED_MOVER" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_integration_timestep_MetaData[] = {
		{ "Category", "WSF_GUIDED_MOVER" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stage_MetaData[] = {
		{ "Category", "WSF_GUIDED_MOVER" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\n// int integration_method ;\n// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\n// int compute_all_forces_each_substep ;\n// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\n// int coordinate_frame ;\n// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\n// int maintain_inclination ;\n// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\n// int show_status ;\n// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\n// int show_trajectory ;\n// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\n// int align_heading_with_velocity ;\n// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\n// int check_for_ground_impact ;\n// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\n// int time_history_path ;\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\nint integration_method ;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\nint compute_all_forces_each_substep ;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\nint coordinate_frame ;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\nint maintain_inclination ;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\nint show_status ;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\nint show_trajectory ;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\nint align_heading_with_velocity ;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\nint check_for_ground_impact ;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WSF_GUIDED_MOVER\");\nint time_history_path ;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoverCommand;
	static const UECodeGen_Private::FIntPropertyParams NewProp_integration_timestep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stage_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFWsfGuidedMover>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics::NewProp_MoverCommand = { "MoverCommand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfGuidedMover, MoverCommand), Z_Construct_UScriptStruct_FFWsfMover, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoverCommand_MetaData), NewProp_MoverCommand_MetaData) }; // 2628519974
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics::NewProp_integration_timestep = { "integration_timestep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfGuidedMover, integration_timestep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_integration_timestep_MetaData), NewProp_integration_timestep_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics::NewProp_Stage_Inner = { "Stage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFMoverStage, METADATA_PARAMS(0, nullptr) }; // 1555544253
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics::NewProp_Stage = { "Stage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfGuidedMover, Stage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stage_MetaData), NewProp_Stage_MetaData) }; // 1555544253
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics::NewProp_MoverCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics::NewProp_integration_timestep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics::NewProp_Stage_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics::NewProp_Stage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	&NewStructOps,
	"FWsfGuidedMover",
	Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics::PropPointers),
	sizeof(FFWsfGuidedMover),
	alignof(FFWsfGuidedMover),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFWsfGuidedMover()
{
	if (!Z_Registration_Info_UScriptStruct_FWsfGuidedMover.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWsfGuidedMover.InnerSingleton, Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWsfGuidedMover.InnerSingleton;
}
// End ScriptStruct FFWsfGuidedMover

// Begin Class UWsfGuidedMover Function on_stage_burnout
struct Z_Construct_UFunction_UWsfGuidedMover_on_stage_burnout_Statics
{
	struct WsfGuidedMover_eventon_stage_burnout_Parms
	{
		int32 aStage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WSF_GUIDED_MOVER" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_aStage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWsfGuidedMover_on_stage_burnout_Statics::NewProp_aStage = { "aStage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfGuidedMover_eventon_stage_burnout_Parms, aStage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfGuidedMover_on_stage_burnout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfGuidedMover_on_stage_burnout_Statics::NewProp_aStage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfGuidedMover_on_stage_burnout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfGuidedMover_on_stage_burnout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfGuidedMover, nullptr, "on_stage_burnout", nullptr, nullptr, Z_Construct_UFunction_UWsfGuidedMover_on_stage_burnout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfGuidedMover_on_stage_burnout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfGuidedMover_on_stage_burnout_Statics::WsfGuidedMover_eventon_stage_burnout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfGuidedMover_on_stage_burnout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfGuidedMover_on_stage_burnout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfGuidedMover_on_stage_burnout_Statics::WsfGuidedMover_eventon_stage_burnout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfGuidedMover_on_stage_burnout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfGuidedMover_on_stage_burnout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfGuidedMover::execon_stage_burnout)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_aStage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->on_stage_burnout(Z_Param_aStage);
	P_NATIVE_END;
}
// End Class UWsfGuidedMover Function on_stage_burnout

// Begin Class UWsfGuidedMover Function on_stage_ignition
struct Z_Construct_UFunction_UWsfGuidedMover_on_stage_ignition_Statics
{
	struct WsfGuidedMover_eventon_stage_ignition_Parms
	{
		int32 aStage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WSF_GUIDED_MOVER" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_aStage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWsfGuidedMover_on_stage_ignition_Statics::NewProp_aStage = { "aStage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfGuidedMover_eventon_stage_ignition_Parms, aStage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfGuidedMover_on_stage_ignition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfGuidedMover_on_stage_ignition_Statics::NewProp_aStage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfGuidedMover_on_stage_ignition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfGuidedMover_on_stage_ignition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfGuidedMover, nullptr, "on_stage_ignition", nullptr, nullptr, Z_Construct_UFunction_UWsfGuidedMover_on_stage_ignition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfGuidedMover_on_stage_ignition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfGuidedMover_on_stage_ignition_Statics::WsfGuidedMover_eventon_stage_ignition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfGuidedMover_on_stage_ignition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfGuidedMover_on_stage_ignition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfGuidedMover_on_stage_ignition_Statics::WsfGuidedMover_eventon_stage_ignition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfGuidedMover_on_stage_ignition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfGuidedMover_on_stage_ignition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfGuidedMover::execon_stage_ignition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_aStage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->on_stage_ignition(Z_Param_aStage);
	P_NATIVE_END;
}
// End Class UWsfGuidedMover Function on_stage_ignition

// Begin Class UWsfGuidedMover Function on_stage_separation
struct Z_Construct_UFunction_UWsfGuidedMover_on_stage_separation_Statics
{
	struct WsfGuidedMover_eventon_stage_separation_Parms
	{
		int32 aStage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WSF_GUIDED_MOVER" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_aStage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWsfGuidedMover_on_stage_separation_Statics::NewProp_aStage = { "aStage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfGuidedMover_eventon_stage_separation_Parms, aStage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfGuidedMover_on_stage_separation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfGuidedMover_on_stage_separation_Statics::NewProp_aStage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfGuidedMover_on_stage_separation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfGuidedMover_on_stage_separation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfGuidedMover, nullptr, "on_stage_separation", nullptr, nullptr, Z_Construct_UFunction_UWsfGuidedMover_on_stage_separation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfGuidedMover_on_stage_separation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfGuidedMover_on_stage_separation_Statics::WsfGuidedMover_eventon_stage_separation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfGuidedMover_on_stage_separation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfGuidedMover_on_stage_separation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfGuidedMover_on_stage_separation_Statics::WsfGuidedMover_eventon_stage_separation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfGuidedMover_on_stage_separation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfGuidedMover_on_stage_separation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfGuidedMover::execon_stage_separation)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_aStage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->on_stage_separation(Z_Param_aStage);
	P_NATIVE_END;
}
// End Class UWsfGuidedMover Function on_stage_separation

// Begin Class UWsfGuidedMover
void UWsfGuidedMover::StaticRegisterNativesUWsfGuidedMover()
{
	UClass* Class = UWsfGuidedMover::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "on_stage_burnout", &UWsfGuidedMover::execon_stage_burnout },
		{ "on_stage_ignition", &UWsfGuidedMover::execon_stage_ignition },
		{ "on_stage_separation", &UWsfGuidedMover::execon_stage_separation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWsfGuidedMover);
UClass* Z_Construct_UClass_UWsfGuidedMover_NoRegister()
{
	return UWsfGuidedMover::StaticClass();
}
struct Z_Construct_UClass_UWsfGuidedMover_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlatformPart/Mover/WsfGuidedMover.h" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WsfGuidedMoverParams_MetaData[] = {
		{ "Category", "WSF_GUIDED_MOVER" },
		{ "ModuleRelativePath", "PlatformPart/Mover/WsfGuidedMover.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WsfGuidedMoverParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWsfGuidedMover_on_stage_burnout, "on_stage_burnout" }, // 3285350384
		{ &Z_Construct_UFunction_UWsfGuidedMover_on_stage_ignition, "on_stage_ignition" }, // 3883676365
		{ &Z_Construct_UFunction_UWsfGuidedMover_on_stage_separation, "on_stage_separation" }, // 4043994597
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWsfGuidedMover>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWsfGuidedMover_Statics::NewProp_WsfGuidedMoverParams = { "WsfGuidedMoverParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWsfGuidedMover, WsfGuidedMoverParams), Z_Construct_UScriptStruct_FFWsfGuidedMover, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WsfGuidedMoverParams_MetaData), NewProp_WsfGuidedMoverParams_MetaData) }; // 2129567961
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWsfGuidedMover_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWsfGuidedMover_Statics::NewProp_WsfGuidedMoverParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfGuidedMover_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWsfGuidedMover_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWsfMover,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfGuidedMover_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWsfGuidedMover_Statics::ClassParams = {
	&UWsfGuidedMover::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWsfGuidedMover_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWsfGuidedMover_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfGuidedMover_Statics::Class_MetaDataParams), Z_Construct_UClass_UWsfGuidedMover_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWsfGuidedMover()
{
	if (!Z_Registration_Info_UClass_UWsfGuidedMover.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWsfGuidedMover.OuterSingleton, Z_Construct_UClass_UWsfGuidedMover_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWsfGuidedMover.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UWsfGuidedMover>()
{
	return UWsfGuidedMover::StaticClass();
}
UWsfGuidedMover::UWsfGuidedMover() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWsfGuidedMover);
UWsfGuidedMover::~UWsfGuidedMover() {}
// End Class UWsfGuidedMover

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfGuidedMover_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFMoverStage::StaticStruct, Z_Construct_UScriptStruct_FFMoverStage_Statics::NewStructOps, TEXT("FMoverStage"), &Z_Registration_Info_UScriptStruct_FMoverStage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMoverStage), 1555544253U) },
		{ FFWsfGuidedMover::StaticStruct, Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics::NewStructOps, TEXT("FWsfGuidedMover"), &Z_Registration_Info_UScriptStruct_FWsfGuidedMover, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFWsfGuidedMover), 2129567961U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWsfGuidedMover, UWsfGuidedMover::StaticClass, TEXT("UWsfGuidedMover"), &Z_Registration_Info_UClass_UWsfGuidedMover, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWsfGuidedMover), 4012199072U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfGuidedMover_h_1319616731(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfGuidedMover_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfGuidedMover_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfGuidedMover_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfGuidedMover_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
