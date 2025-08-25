// Fill out your copyright notice in the Description page of Project Settings.


#include "WsfObject.h"

// Sets default values
UWsfObject::UWsfObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryComponentTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void UWsfObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void UWsfObject::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

FString UWsfObject::Name()
{
	return "true";
}

FString UWsfObject::Type()
{
	return "true";
}

FString UWsfObject::BaseType()
{
	return "true";
}

bool UWsfObject::IsA_TypeOf(FString aType)
{
	return true;
}

bool UWsfObject::IsValid()
{
	return true;
}

bool UWsfObject::ProcessInput(FString aCommands)
{
	return true;
}

