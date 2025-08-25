// Fill out your copyright notice in the Description page of Project Settings.


#include "WsfLocalTrackList.h"

// Sets default values
UWsfLocalTrackList::UWsfLocalTrackList()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryComponentTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void UWsfLocalTrackList::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void UWsfLocalTrackList::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}



UWsfTrack *UWsfLocalTrackList::TrackEntry(int aIndex)
{
	return NULL;
}

int UWsfLocalTrackList::TrackCount()
{
	return 0;
}