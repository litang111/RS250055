
// Fill out your copyright notice in the Description page of Project Settings.


#include "WSFBasePlatformActor.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AWSFBasePlatformActor::AWSFBasePlatformActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the skeletal mesh component
	PlatformMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	RootComponent = PlatformMesh;
	
}

// Called when the game starts or when spawned
void AWSFBasePlatformActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWSFBasePlatformActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}