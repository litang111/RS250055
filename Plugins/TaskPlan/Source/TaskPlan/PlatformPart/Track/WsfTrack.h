// Fill out your copyright notice in the Description page of Project Settings.
/*****************************************************************//**
 * \file   WsfTrack.h
 * \brief
 * \note
 * TODO��
 *  - 1�� To be improved
 *  - 2��
 * \author ping.fang
 * \date   2025.08.07
 *********************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WsfTrack.generated.h"


UCLASS(Blueprintable)
class TASKPLAN_API UWsfTrack : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	UWsfTrack();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;




};
