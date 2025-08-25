// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WsfMover.h"
#include "WsfGuidedMover.generated.h"

USTRUCT(BlueprintType)
struct FFMoverStage
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int aero ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int empty_mass ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int fuel_mass ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int total_mass ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int thrust ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int sea_level_thrust;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int vacuum_thrust ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int thrust_table;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int sea_level_thrust_table;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int vacuum_thrust_table ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int reverse_thrust;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int specific_impulse ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int sea_level_specific_impulse ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int vacuum_specific_impulse ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int nozzle_exit_area ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int thrust_duration ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int burn_rate ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int burn_rate_table ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int throttle ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int thrust_vectoring_angle_limit ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int thrust_vectoring_time_limits ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int lateral_thrust_gain ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int divert_thrust ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int divert_fuel_mass ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int divert_fuel_flow_rate ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int divert_altitude_limits ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int pre_ignition_coast_time ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int pre_separation_coast_time ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int integration_timestep ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int ignition_failure_probability ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int separation_failure_probability ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int angle_of_attack ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int bank_to_turn ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_MOVER_STAGE");
	int skid_to_turn ;
};

//file:///E:/Project/RS250055/Refproject/AFSim/am-2.9.0-win64/documentation/html/docs/wsf_guided_mover.html?highlight=wsf_
USTRUCT(BlueprintType)
struct FFWsfGuidedMover
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_GUIDED_MOVER");
	FFWsfMover MoverCommand;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_GUIDED_MOVER");
	int integration_timestep ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_GUIDED_MOVER");
	// int integration_method ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_GUIDED_MOVER");
	// int compute_all_forces_each_substep ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_GUIDED_MOVER");
	// int coordinate_frame ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_GUIDED_MOVER");
	// int maintain_inclination ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_GUIDED_MOVER");
	// int show_status ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_GUIDED_MOVER");
	// int show_trajectory ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_GUIDED_MOVER");
	// int align_heading_with_velocity ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_GUIDED_MOVER");
	// int check_for_ground_impact ;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_GUIDED_MOVER");
	// int time_history_path ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_GUIDED_MOVER");
	TArray<FFMoverStage> Stage ;
};
/**
 * 
 */
UCLASS()
class TASKPLAN_API UWsfGuidedMover : public UWsfMover
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_GUIDED_MOVER")
	FFWsfGuidedMover WsfGuidedMoverParams;
	UFUNCTION(BlueprintCallable, Category = "WSF_GUIDED_MOVER")
	void on_stage_ignition(int aStage) ;
	UFUNCTION(BlueprintCallable, Category = "WSF_GUIDED_MOVER")
	void on_stage_burnout(int aStage) ;
	UFUNCTION(BlueprintCallable, Category = "WSF_GUIDED_MOVER")
	void on_stage_separation(int aStage) ; 
// // 	Methods
// 	// Note The methods that return aerodynamic forces (lateral and drag) and thrust forces return values that were computed using the conditions from the previous timestep.
// 	// This may result in values that are slightly different than those that would be returned if using the actual current conditions.
// 	
// 	// Returns the dynamic pressure (in Newtons per square meter) currently being experienced by the platform.
// 	double DynamicPressure();
// 	
// 	// Returns the drag force (in Newtons) currently being experienced by the platform.
// 	double DragForce();
// 	
// 	// Returns the lateral aerodynamic force (in Newtons) currently being applied.
// 	double LateralAerodynamicForce();
// 	
// 	// Returns the maximum lateral aerodynamic force (in Newtons) that can be applied under the current conditions.
// 	double MaximumLateralAerodynamicForce();
// 	
// 	// Returns the axial thrust force (in Newtons) currently being produced by the engines.
// 	double AxialThrustForce();
// 	
// 	// Returns the lateral thrust force (in Newtons) currently being produced by the engines plus any divert thrust being applied.
// 	double LateralThrustForce();
// 	
// 	// Returns the thrust force (in Newtons) currently being produced by the engines and divert thrust.
// 	// This is the magnitude of the vector sum of WsfGuidedMover.AxialThrustForce () and WsfGuidedMover.LateralThrustForce ().
// 	double TotalThrustForce();
//
// 	// Returns the acceleration due to gravity (meters per second^2) at the current location of the platform.
// 	double GravitationalAcceleration();
//
// 	// Returns the force due to gravity (in Newtons) experienced by the platform at its current location. This is simply WsfGuidedMover.GravitationalAcceleration () times WsfPlatform.TotalMass ().
//     // Any of the aerodynamic or thrust force values returned by the methods of this class can be converted to G’s by simply dividing by this value, e.g:
// 	double GravitationalForce();
// 	
// 	// Returns the empty_mass (in kg) of the stage given by aStage, or the current stage if not specified.
// 	double EmptyMass();
// 	double EmptyMass(int aStage);
//
// 	// Returns the payload mass (in kg) of the stage given by aStage, or the current stage if not specified.
// 	// This is equivalent to the sum of the total_mass of subsequent stages.
// 	double PayloadMass();
// 	double PayloadMass(int aStage);
//
// 	// Returns the fuel_mass (in kg) of the stage given by aStage, or the current stage if not specified.
// 	double InitialFuelMass();
// 	double InitialFuelMass(int aStage);
//
// 	// Returns the total mass (in kg) at the beginning of the stage given by aStage, or the current stage if not specified.
// 	// This includes the mass of subsequent stages and is equivalent to InitialFuelMass() + EmptyMass() + PayloadMass()
// 	double InitialTotalMass();
// 	double InitialTotalMass(int aStage);
//
// 	// Returns the current amount of fuel remaining, in kg.
// 	double CurrentFuelMass();
//
// 	// Returns the current total mass, in kg. This is equivalent to CurrentFuelMass() + EmptyMass() + PayloadMass().
// 	double CurrentTotalMass();
//
// 	// Returns the current fuel flow rate, in kg/s.
// 	double CurrentFuelFlowRate();

};
