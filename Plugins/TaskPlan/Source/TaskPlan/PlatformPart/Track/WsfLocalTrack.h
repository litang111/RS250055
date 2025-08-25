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
#include "WsfTrack.h"
#include "WsfLocalTrack.generated.h"


UCLASS(Blueprintable)
class TASKPLAN_API UWsfLocalTrack : public UWsfTrack
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	UWsfLocalTrack();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	//�Զ��庯��

public:
	//afsim�ٷ�����


};
