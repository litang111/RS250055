// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/PlatformPart/Processor/WsfGuidanceComputer.h"
#include "TaskPlan/PlatformPart/Processor/WsfScriptProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWsfGuidanceComputer() {}

// Begin Cross Module References
TASKPLAN_API UClass* Z_Construct_UClass_UWsfGuidanceComputer();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfGuidanceComputer_NoRegister();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfProcessor();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFWsfGuidanceComputer();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFWsfScriptProcessor();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FPhase();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin ScriptStruct FPhase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Phase;
class UScriptStruct* FPhase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Phase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Phase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhase, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("Phase"));
	}
	return Z_Registration_Info_UScriptStruct_Phase.OuterSingleton;
}
template<> TASKPLAN_API UScriptStruct* StaticStruct<FPhase>()
{
	return FPhase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_guidance_delay_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//# General Subcommands\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "# General Subcommands" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_on_entry_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_on_exit_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_on_update_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_guidance_target_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//# Aimpoint Selection Subcommands\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "# Aimpoint Selection Subcommands" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_allow_route_following_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aimpoint_altitude_offset_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aimpoint_azimuth_offset_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aimpoint_range_offset_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aimpoint_evaluation_interval_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_use_program_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// # Program Selection Commands\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "# Program Selection Commands" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_program_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_proportional_navigation_gain_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//# Navigation Subcommands\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "# Navigation Subcommands" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_proportional_navigation_limit_angle_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_proportional_navigation_method_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_velocity_pursuit_gain_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_g_bias_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//# Trajectory Shaping Subcommands\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "# Trajectory Shaping Subcommands" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lateral_g_bias_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_commanded_altitude_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_commanded_azimuth_offset_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_commanded_flight_path_angle_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_commanded_mach_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_commanded_speed_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_commanded_throttle_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maximum_commanded_g_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//# Limiting Subcommands\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "# Limiting Subcommands" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maximum_ascent_rate_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maximum_descent_rate_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maximum_pitch_angle_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pitch_change_gain_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_guidance_delay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_on_entry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_on_exit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_on_update;
	static const UECodeGen_Private::FIntPropertyParams NewProp_guidance_target;
	static const UECodeGen_Private::FIntPropertyParams NewProp_allow_route_following;
	static const UECodeGen_Private::FIntPropertyParams NewProp_aimpoint_altitude_offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_aimpoint_azimuth_offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_aimpoint_range_offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_aimpoint_evaluation_interval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_use_program;
	static const UECodeGen_Private::FIntPropertyParams NewProp_program;
	static const UECodeGen_Private::FIntPropertyParams NewProp_proportional_navigation_gain;
	static const UECodeGen_Private::FIntPropertyParams NewProp_proportional_navigation_limit_angle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_proportional_navigation_method;
	static const UECodeGen_Private::FIntPropertyParams NewProp_velocity_pursuit_gain;
	static const UECodeGen_Private::FIntPropertyParams NewProp_g_bias;
	static const UECodeGen_Private::FIntPropertyParams NewProp_lateral_g_bias;
	static const UECodeGen_Private::FIntPropertyParams NewProp_commanded_altitude;
	static const UECodeGen_Private::FIntPropertyParams NewProp_commanded_azimuth_offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_commanded_flight_path_angle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_commanded_mach;
	static const UECodeGen_Private::FIntPropertyParams NewProp_commanded_speed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_commanded_throttle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maximum_commanded_g;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maximum_ascent_rate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maximum_descent_rate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maximum_pitch_angle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_pitch_change_gain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_guidance_delay = { "guidance_delay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, guidance_delay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_guidance_delay_MetaData), NewProp_guidance_delay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_on_entry = { "on_entry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, on_entry), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_on_entry_MetaData), NewProp_on_entry_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_on_exit = { "on_exit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, on_exit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_on_exit_MetaData), NewProp_on_exit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_on_update = { "on_update", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, on_update), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_on_update_MetaData), NewProp_on_update_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_guidance_target = { "guidance_target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, guidance_target), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_guidance_target_MetaData), NewProp_guidance_target_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_allow_route_following = { "allow_route_following", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, allow_route_following), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_allow_route_following_MetaData), NewProp_allow_route_following_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_aimpoint_altitude_offset = { "aimpoint_altitude_offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, aimpoint_altitude_offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aimpoint_altitude_offset_MetaData), NewProp_aimpoint_altitude_offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_aimpoint_azimuth_offset = { "aimpoint_azimuth_offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, aimpoint_azimuth_offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aimpoint_azimuth_offset_MetaData), NewProp_aimpoint_azimuth_offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_aimpoint_range_offset = { "aimpoint_range_offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, aimpoint_range_offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aimpoint_range_offset_MetaData), NewProp_aimpoint_range_offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_aimpoint_evaluation_interval = { "aimpoint_evaluation_interval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, aimpoint_evaluation_interval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aimpoint_evaluation_interval_MetaData), NewProp_aimpoint_evaluation_interval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_use_program = { "use_program", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, use_program), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_use_program_MetaData), NewProp_use_program_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_program = { "program", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, program), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_program_MetaData), NewProp_program_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_proportional_navigation_gain = { "proportional_navigation_gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, proportional_navigation_gain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_proportional_navigation_gain_MetaData), NewProp_proportional_navigation_gain_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_proportional_navigation_limit_angle = { "proportional_navigation_limit_angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, proportional_navigation_limit_angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_proportional_navigation_limit_angle_MetaData), NewProp_proportional_navigation_limit_angle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_proportional_navigation_method = { "proportional_navigation_method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, proportional_navigation_method), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_proportional_navigation_method_MetaData), NewProp_proportional_navigation_method_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_velocity_pursuit_gain = { "velocity_pursuit_gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, velocity_pursuit_gain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_velocity_pursuit_gain_MetaData), NewProp_velocity_pursuit_gain_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_g_bias = { "g_bias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, g_bias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_g_bias_MetaData), NewProp_g_bias_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_lateral_g_bias = { "lateral_g_bias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, lateral_g_bias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lateral_g_bias_MetaData), NewProp_lateral_g_bias_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_commanded_altitude = { "commanded_altitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, commanded_altitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_commanded_altitude_MetaData), NewProp_commanded_altitude_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_commanded_azimuth_offset = { "commanded_azimuth_offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, commanded_azimuth_offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_commanded_azimuth_offset_MetaData), NewProp_commanded_azimuth_offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_commanded_flight_path_angle = { "commanded_flight_path_angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, commanded_flight_path_angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_commanded_flight_path_angle_MetaData), NewProp_commanded_flight_path_angle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_commanded_mach = { "commanded_mach", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, commanded_mach), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_commanded_mach_MetaData), NewProp_commanded_mach_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_commanded_speed = { "commanded_speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, commanded_speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_commanded_speed_MetaData), NewProp_commanded_speed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_commanded_throttle = { "commanded_throttle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, commanded_throttle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_commanded_throttle_MetaData), NewProp_commanded_throttle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_maximum_commanded_g = { "maximum_commanded_g", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, maximum_commanded_g), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maximum_commanded_g_MetaData), NewProp_maximum_commanded_g_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_maximum_ascent_rate = { "maximum_ascent_rate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, maximum_ascent_rate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maximum_ascent_rate_MetaData), NewProp_maximum_ascent_rate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_maximum_descent_rate = { "maximum_descent_rate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, maximum_descent_rate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maximum_descent_rate_MetaData), NewProp_maximum_descent_rate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_maximum_pitch_angle = { "maximum_pitch_angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, maximum_pitch_angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maximum_pitch_angle_MetaData), NewProp_maximum_pitch_angle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhase_Statics::NewProp_pitch_change_gain = { "pitch_change_gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhase, pitch_change_gain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pitch_change_gain_MetaData), NewProp_pitch_change_gain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_guidance_delay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_on_entry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_on_exit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_on_update,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_guidance_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_allow_route_following,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_aimpoint_altitude_offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_aimpoint_azimuth_offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_aimpoint_range_offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_aimpoint_evaluation_interval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_use_program,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_program,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_proportional_navigation_gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_proportional_navigation_limit_angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_proportional_navigation_method,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_velocity_pursuit_gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_g_bias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_lateral_g_bias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_commanded_altitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_commanded_azimuth_offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_commanded_flight_path_angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_commanded_mach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_commanded_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_commanded_throttle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_maximum_commanded_g,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_maximum_ascent_rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_maximum_descent_rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_maximum_pitch_angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhase_Statics::NewProp_pitch_change_gain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	&NewStructOps,
	"Phase",
	Z_Construct_UScriptStruct_FPhase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhase_Statics::PropPointers),
	sizeof(FPhase),
	alignof(FPhase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPhase()
{
	if (!Z_Registration_Info_UScriptStruct_Phase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Phase.InnerSingleton, Z_Construct_UScriptStruct_FPhase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Phase.InnerSingleton;
}
// End ScriptStruct FPhase

// Begin ScriptStruct FFWsfGuidanceComputer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWsfGuidanceComputer;
class UScriptStruct* FFWsfGuidanceComputer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWsfGuidanceComputer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWsfGuidanceComputer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFWsfGuidanceComputer, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("FWsfGuidanceComputer"));
	}
	return Z_Registration_Info_UScriptStruct_FWsfGuidanceComputer.OuterSingleton;
}
template<> TASKPLAN_API UScriptStruct* StaticStruct<FFWsfGuidanceComputer>()
{
	return FFWsfGuidanceComputer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WSFScriptProcessorCommands_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_show_status_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//    # Global Commands\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "# Global Commands" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_show_diagnostics_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_show_commands_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_show_evaluations_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_guide_to_truth_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_program_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_phase_MetaData[] = {
		{ "Category", "WsfGuidanceComputer" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WSFScriptProcessorCommands;
	static const UECodeGen_Private::FIntPropertyParams NewProp_show_status;
	static const UECodeGen_Private::FIntPropertyParams NewProp_show_diagnostics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_show_commands;
	static const UECodeGen_Private::FIntPropertyParams NewProp_show_evaluations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_guide_to_truth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_program;
	static const UECodeGen_Private::FStructPropertyParams NewProp_phase_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_phase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFWsfGuidanceComputer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_WSFScriptProcessorCommands = { "WSFScriptProcessorCommands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfGuidanceComputer, WSFScriptProcessorCommands), Z_Construct_UScriptStruct_FFWsfScriptProcessor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WSFScriptProcessorCommands_MetaData), NewProp_WSFScriptProcessorCommands_MetaData) }; // 2902023844
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_show_status = { "show_status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfGuidanceComputer, show_status), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_show_status_MetaData), NewProp_show_status_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_show_diagnostics = { "show_diagnostics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfGuidanceComputer, show_diagnostics), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_show_diagnostics_MetaData), NewProp_show_diagnostics_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_show_commands = { "show_commands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfGuidanceComputer, show_commands), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_show_commands_MetaData), NewProp_show_commands_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_show_evaluations = { "show_evaluations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfGuidanceComputer, show_evaluations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_show_evaluations_MetaData), NewProp_show_evaluations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_guide_to_truth = { "guide_to_truth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfGuidanceComputer, guide_to_truth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_guide_to_truth_MetaData), NewProp_guide_to_truth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_program = { "program", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfGuidanceComputer, program), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_program_MetaData), NewProp_program_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_phase_Inner = { "phase", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPhase, METADATA_PARAMS(0, nullptr) }; // 86551084
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_phase = { "phase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfGuidanceComputer, phase), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_phase_MetaData), NewProp_phase_MetaData) }; // 86551084
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_WSFScriptProcessorCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_show_status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_show_diagnostics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_show_commands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_show_evaluations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_guide_to_truth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_program,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_phase_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewProp_phase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	&NewStructOps,
	"FWsfGuidanceComputer",
	Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::PropPointers),
	sizeof(FFWsfGuidanceComputer),
	alignof(FFWsfGuidanceComputer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFWsfGuidanceComputer()
{
	if (!Z_Registration_Info_UScriptStruct_FWsfGuidanceComputer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWsfGuidanceComputer.InnerSingleton, Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWsfGuidanceComputer.InnerSingleton;
}
// End ScriptStruct FFWsfGuidanceComputer

// Begin Class UWsfGuidanceComputer
void UWsfGuidanceComputer::StaticRegisterNativesUWsfGuidanceComputer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWsfGuidanceComputer);
UClass* Z_Construct_UClass_UWsfGuidanceComputer_NoRegister()
{
	return UWsfGuidanceComputer::StaticClass();
}
struct Z_Construct_UClass_UWsfGuidanceComputer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
		{ "ModuleRelativePath", "PlatformPart/Processor/WsfGuidanceComputer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWsfGuidanceComputer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWsfGuidanceComputer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWsfProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfGuidanceComputer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWsfGuidanceComputer_Statics::ClassParams = {
	&UWsfGuidanceComputer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfGuidanceComputer_Statics::Class_MetaDataParams), Z_Construct_UClass_UWsfGuidanceComputer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWsfGuidanceComputer()
{
	if (!Z_Registration_Info_UClass_UWsfGuidanceComputer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWsfGuidanceComputer.OuterSingleton, Z_Construct_UClass_UWsfGuidanceComputer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWsfGuidanceComputer.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UWsfGuidanceComputer>()
{
	return UWsfGuidanceComputer::StaticClass();
}
UWsfGuidanceComputer::UWsfGuidanceComputer() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWsfGuidanceComputer);
UWsfGuidanceComputer::~UWsfGuidanceComputer() {}
// End Class UWsfGuidanceComputer

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfGuidanceComputer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPhase::StaticStruct, Z_Construct_UScriptStruct_FPhase_Statics::NewStructOps, TEXT("Phase"), &Z_Registration_Info_UScriptStruct_Phase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhase), 86551084U) },
		{ FFWsfGuidanceComputer::StaticStruct, Z_Construct_UScriptStruct_FFWsfGuidanceComputer_Statics::NewStructOps, TEXT("FWsfGuidanceComputer"), &Z_Registration_Info_UScriptStruct_FWsfGuidanceComputer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFWsfGuidanceComputer), 413317282U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWsfGuidanceComputer, UWsfGuidanceComputer::StaticClass, TEXT("UWsfGuidanceComputer"), &Z_Registration_Info_UClass_UWsfGuidanceComputer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWsfGuidanceComputer), 450443048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfGuidanceComputer_h_2563278920(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfGuidanceComputer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfGuidanceComputer_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfGuidanceComputer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfGuidanceComputer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
