// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnumFile.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TASKPLAN_EnumFile_generated_h
#error "EnumFile.generated.h already included, missing '#pragma once' in EnumFile.h"
#endif
#define TASKPLAN_EnumFile_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_EnumFile_h


#define FOREACH_ENUM_EINPUTTYPE(op) \
	op(EInputType::WSF_PLATFORM) \
	op(EInputType::WSF_WEAPONS_MANAGER) 

enum class EInputType : uint8;
template<> struct TIsUEnumClass<EInputType> { enum { Value = true }; };
template<> TASKPLAN_API UEnum* StaticEnum<EInputType>();

#define FOREACH_ENUM_ERESULT(op) \
	op(EResult::target_impact) \
	op(EResult::far_away_in_air) \
	op(EResult::far_away_above_ground) \
	op(EResult::far_away_ground_impact) \
	op(EResult::target_proximity_air_burst) \
	op(EResult::target_proximity_above_ground) \
	op(EResult::target_proximity_ground_impact) 

enum class EResult : uint8;
template<> struct TIsUEnumClass<EResult> { enum { Value = true }; };
template<> TASKPLAN_API UEnum* StaticEnum<EResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
