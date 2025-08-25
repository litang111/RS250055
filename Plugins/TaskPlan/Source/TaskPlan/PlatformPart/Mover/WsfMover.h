// Fill out your copyright notice in the Description page of Project Settings.
/*****************************************************************//**
 * \file   WsfMover.h
 * \brief  
 * \note   
 * TODO：
 *  - 1、 
 *  - 2、
 * \author li.tang 
 * \date   2025.07.21
 *********************************************************************/

#pragma once
#include "../WsfPlatformPart.h"
#include "CoreMinimal.h"
#include "WsfMover.generated.h"
//file:///E:/Project/RS250055/Refproject/AFSim/am-2.9.0-win64/documentation/html/docs/mover.html#mover
USTRUCT(BlueprintType)
 struct FFWsfMover
 {
 	GENERATED_BODY()
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfMover");
 	FFPlatformPart PlatformPart;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfMover");
 	int update_interval;
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WsfMover");
 	int update_time_tolerance;
 };
UENUM(BlueprintType)
enum class EMover :uint8
{
	WSF_AIR_MOVER, WSF_GROUND_MOVER, WSF_SURFACE_MOVER, WSF_SPACE_MOVER, WSF_NORAD_SPACE_MOVER, WSF_INTEGRATING_SPACE_MOVER
};

UCLASS()
class TASKPLAN_API UWsfMover : public UWsfPlatformPart
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWsfMover();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_Mover");
	FFWsfMover MoverParams;
	//自定义函数变量
	//Sets the mover
	UFUNCTION(BlueprintCallable, Category = "WsfPlatform")
	FString SetMover(EMover aMover);

//static Methods
	// Returns a new mover with the specified type. The result mover can be used with WsfPlatform.SwapMover.
	//AWsfMover Create(FString aMoverType);
	
	// Returns true if the mover type specified by aDerivedType inherits from the mover type specified by aBaseType
	// (compare to WsfObject.IsA_TypeOf(aBaseType) which determines if a specific object inherits from aBaseType).
	static bool IsA_TypeOf(FString aDerivedType, FString aBaseType);

	
// Methods
	// Returns the mover’s update interval.
	double UpdateInterval();
	
	// Returns a copy of the mover’s route.
	//WsfRoute Route();
	
	// Returns a copy of the mover’s default route.
	//WsfRoute DefaultRoute();
	
	// Sets the “Mode” of the mover. Effect is Mover type implementation-defined.
	// Initial functionality is for the WSF_ROTORCRAFT_MOVER,
	// so see its documentation for that implementation.
	void SetMode(FString aModeFString);

	// Sets the name of the data file to be opened and parsed by a WSF_TSPI_MOVER to define trajectory motion path to follow.
	// The aFileName will have path variable names substituted before opening. Returns true if successful.
	// Will not be successful if Mover is of type other than TSPI_Mover, or if the TSPI file is already open.
	bool SetTSPI_FileName(FString aFileName);

	// Returns ‘true’ if the mover is ‘extrapolating’. For route-movers,
	// this is true when extrapolating at end of path or after script commands like TurnToHeading().
	// Other mover types may or may not set this flag.
	 bool IsExtrapolating();

	// Triggers extrapolation in the mover.
	void BurnedOut(double aBurnoutTime);
	
	// Turn the mover off and returns true if successful.
	 bool TurnOff();
	
	// Turn the mover on and returns true if successful.
	 bool TurnOn();
	
// Data Access Methods
	// Returns the integer value of the given property name. The array will be empty if the property is unrecognized.
	TArray<int> PropertyInt(FString aPropertyName);
	
	// Returns the double value of the given property name. The array will be empty if the property is unrecognized.
	TArray<double> PropertyDouble(FString aPropertyName);
	
	// Returns the FString value of the given property name. The array will be empty if the property is unrecognized.
	TArray<FString> PropertyFString(FString aPropertyName);
	
		
};


