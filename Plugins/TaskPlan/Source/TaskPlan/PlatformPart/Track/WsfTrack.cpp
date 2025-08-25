// Fill out your copyright notice in the Description page of Project Settings.


#include "WsfTrack.h"

// Sets default values
UWsfTrack::UWsfTrack()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void UWsfTrack::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void UWsfTrack::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

