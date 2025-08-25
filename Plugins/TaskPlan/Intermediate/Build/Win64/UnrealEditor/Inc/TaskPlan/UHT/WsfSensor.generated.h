// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlatformPart/Sensor/WsfSensor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TASKPLAN_WsfSensor_generated_h
#error "WsfSensor.generated.h already included, missing '#pragma once' in WsfSensor.h"
#endif
#define TASKPLAN_WsfSensor_generated_h

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Sensor_WsfSensor_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWsfSensor(); \
	friend struct Z_Construct_UClass_UWsfSensor_Statics; \
public: \
	DECLARE_CLASS(UWsfSensor, UWsfArticulatedPart, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TaskPlan"), NO_API) \
	DECLARE_SERIALIZER(UWsfSensor)


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Sensor_WsfSensor_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWsfSensor(UWsfSensor&&); \
	UWsfSensor(const UWsfSensor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWsfSensor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWsfSensor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWsfSensor) \
	NO_API virtual ~UWsfSensor();


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Sensor_WsfSensor_h_20_PROLOG
#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Sensor_WsfSensor_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Sensor_WsfSensor_h_23_INCLASS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Sensor_WsfSensor_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASKPLAN_API UClass* StaticClass<class UWsfSensor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Sensor_WsfSensor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
