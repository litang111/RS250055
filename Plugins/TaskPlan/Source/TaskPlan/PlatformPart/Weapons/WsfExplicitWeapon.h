// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WsfWeapon.h"
#include "WsfExplicitWeapon.generated.h"
USTRUCT(BlueprintType)
struct FFWsfExplicitWeapon
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_EXPLICIT_WEAPON");
	FFPlatformPart PlatformPartCommands ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_EXPLICIT_WEAPON");
	FFArticulatedPart ArticulatedPartCommands ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_EXPLICIT_WEAPON");
	FFWeapon  weaponCommands ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_EXPLICIT_WEAPON");
	int launched_platform_type ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_EXPLICIT_WEAPON");
	int launch_delta_v ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_EXPLICIT_WEAPON");
	int ignore_launch_platform_velocity ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_EXPLICIT_WEAPON");
	int require_loft_angle ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_EXPLICIT_WEAPON");
	int  require_intercept_point ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_EXPLICIT_WEAPON");
	int commander ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_EXPLICIT_WEAPON");
	int  command_chain ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_EXPLICIT_WEAPON");
	int dis_entity_id_offset ;


};
/**
 * 
 */
UCLASS()
class TASKPLAN_API UWsfExplicitWeapon : public UWsfWeapon
{
	GENERATED_BODY()
public:
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WSF_EXPLICIT_WEAPON");
	 FFWsfExplicitWeapon WsfExplicitWeaponParams;
	//Script Interface
	UFUNCTION(BlueprintCallable, Category = "WSF_EXPLICIT_WEAPON")
	void on_initialize() ;
	UFUNCTION(BlueprintCallable, Category = "WSF_EXPLICIT_WEAPON")
	 void on_initialize2() ;
	UFUNCTION(BlueprintCallable, Category = "WSF_EXPLICIT_WEAPON")
	void on_update() ; 
	// UFUNCTION(BlueprintCallable, Category = "WSF_EXPLICIT_WEAPON")
	// void on_create(WsfPlatform aWeapon, WsfTrack aTarget) ; 
};
