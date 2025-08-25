// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WsfScriptProcessor.h"
#include "WsfProcessor.h"
#include "WsfGuidanceComputer.generated.h"
USTRUCT(BlueprintType)
struct FPhase
{
	GENERATED_BODY()
//# General Subcommands
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int  guidance_delay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int on_entry ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int on_exit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int  on_update;
	
//# Aimpoint Selection Subcommands
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int  guidance_target;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int  allow_route_following;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int aimpoint_altitude_offset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int aimpoint_azimuth_offset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int  aimpoint_range_offset ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int aimpoint_evaluation_interval ;
	
	// # Program Selection Commands
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int  use_program;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int program;
	
   //# Navigation Subcommands
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int  proportional_navigation_gain;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int  proportional_navigation_limit_angle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int  proportional_navigation_method;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int velocity_pursuit_gain;
	
	//# Trajectory Shaping Subcommands
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int g_bias;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int  lateral_g_bias;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int commanded_altitude;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int commanded_azimuth_offset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int commanded_flight_path_angle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int commanded_mach;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int commanded_speed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int commanded_throttle ;
	
	//# Limiting Subcommands
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int maximum_commanded_g;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int maximum_ascent_rate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int maximum_descent_rate ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int maximum_pitch_angle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int pitch_change_gain;
	
};
USTRUCT(BlueprintType)
struct FFWsfGuidanceComputer 
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	 FFWsfScriptProcessor WSFScriptProcessorCommands;
//    # Global Commands
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int show_status;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int show_diagnostics;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int show_commands;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int show_evaluations;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int guide_to_truth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	int  program ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfGuidanceComputer");
	TArray<FPhase>phase;
};
/**
 * 
 */
UCLASS()
class TASKPLAN_API UWsfGuidanceComputer : public UWsfProcessor
{
	GENERATED_BODY()
	
};
