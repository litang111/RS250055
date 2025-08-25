// Fill out your copyright notice in the Description page of Project Settings.
/*****************************************************************//**
 * \file   WsfTrack.h
 * \brief
 * \note
 * TODO��
 *  - 1�� To be improved
 *  - 2��
 * \author ping.fang
 * \date   2025.08.7
 *********************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WsfTrack.h"
#include "WsfLocalTrackList.generated.h"


UCLASS(Blueprintable)
class TASKPLAN_API UWsfLocalTrackList : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	UWsfLocalTrackList();

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
	//WsfLocalTrack Entry(int aIndex) �޸ĺ�����������ֵ����
	UFUNCTION(BlueprintCallable, Category = "WsfLocalTrackList")
	UWsfTrack* TrackEntry(int aIndex);

	//int Count();  �޸ĺ�����
	UFUNCTION(BlueprintCallable, Category = "WsfLocalTrackList")
	int TrackCount();
};
