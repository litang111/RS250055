// Fill out your copyright notice in the Description page of Project Settings.


#include "WsfMover.h"

// Sets default values for this component's properties
UWsfMover::UWsfMover()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
 // off to improve performance if you don't need them.
 PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWsfMover::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UWsfMover::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
 Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

 // ...
}

FString UWsfMover::SetMover(EMover aMover)
{
 return"";
}

double UWsfMover::UpdateInterval()
{
  return 0.0;
}

 void UWsfMover::SetMode(FString aModeFString)
{
}

 bool UWsfMover::SetTSPI_FileName(FString aFileName)
{
  return false;
}

 bool UWsfMover::IsExtrapolating()
{
  return false;
}

 void UWsfMover::BurnedOut(double aBurnoutTime)
{
}

 bool UWsfMover::TurnOff()
{
 return false;
}

 bool UWsfMover::TurnOn()
{
 return false;
}