// Fill out your copyright notice in the Description page of Project Settings.
/*****************************************************************
 * \file   EnumFile.h
 * \brief  The enumerated structure of character type required for this project。 
 * \note   nan
 * TODO：
 *  - 1、 The subsequent updates will be placed here for the required struct,
 *        not just for the enumeration variables
 * \author li.tang 
 * \date   2025.07.21
 *********************************************************************/

#pragma once
#include "CoreMinimal.h"

UENUM (BlueprintType)
enum class EInputType : uint8
{
	WSF_PLATFORM UMETA(DisplayName = "WSF_PLATFORM"),
	WSF_WEAPONS_MANAGER UMETA(DisplayName = "WSF_WEAPONS_MANAGER")
};

UENUM (BlueprintType)
enum class EResult : uint8
{
	target_impact UMETA(DisplayName = "target_impact"),
	far_away_in_air UMETA(DisplayName = "far_away_in_air"),
	far_away_above_ground UMETA(DisplayName = "far_away_above_ground"),
	far_away_ground_impact UMETA(DisplayName = "far_away_ground_impact"),
	target_proximity_air_burst UMETA(DisplayName = "target_proximity_air_burstUMETA"),
	target_proximity_above_ground UMETA(DisplayName = "target_proximity_above_ground"),
	target_proximity_ground_impact UMETA(DisplayName = "target_proximity_ground_impact")
};


/**
 * 
 */
class TASKPLAN_API EnumFile
{
public:
	EnumFile();
	~EnumFile();
};
