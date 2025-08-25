// Fill out your copyright notice in the Description page of Project Settings.
/*****************************************************************//**
 * \file   WsfSensor.h
 * \brief  
 * \note 
 * TODO：
 *  - 1、 To be improved
 *  - 2、
 * \author li.tang 
 * \date   2025.07.21
 *********************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "../Weapons/WsfArticulatedPart.h"
#include "WsfSensor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TASKPLAN_API UWsfSensor : public UWsfArticulatedPart
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWsfSensor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
