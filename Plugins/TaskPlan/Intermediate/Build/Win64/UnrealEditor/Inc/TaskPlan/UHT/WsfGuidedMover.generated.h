// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlatformPart/Mover/WsfGuidedMover.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TASKPLAN_WsfGuidedMover_generated_h
#error "WsfGuidedMover.generated.h already included, missing '#pragma once' in WsfGuidedMover.h"
#endif
#define TASKPLAN_WsfGuidedMover_generated_h

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfGuidedMover_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFMoverStage_Statics; \
	TASKPLAN_API static class UScriptStruct* StaticStruct();


template<> TASKPLAN_API UScriptStruct* StaticStruct<struct FFMoverStage>();

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfGuidedMover_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFWsfGuidedMover_Statics; \
	TASKPLAN_API static class UScriptStruct* StaticStruct();


template<> TASKPLAN_API UScriptStruct* StaticStruct<struct FFWsfGuidedMover>();

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfGuidedMover_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execon_stage_separation); \
	DECLARE_FUNCTION(execon_stage_burnout); \
	DECLARE_FUNCTION(execon_stage_ignition);


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfGuidedMover_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWsfGuidedMover(); \
	friend struct Z_Construct_UClass_UWsfGuidedMover_Statics; \
public: \
	DECLARE_CLASS(UWsfGuidedMover, UWsfMover, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TaskPlan"), NO_API) \
	DECLARE_SERIALIZER(UWsfGuidedMover)


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfGuidedMover_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWsfGuidedMover(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWsfGuidedMover(UWsfGuidedMover&&); \
	UWsfGuidedMover(const UWsfGuidedMover&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWsfGuidedMover); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWsfGuidedMover); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWsfGuidedMover) \
	NO_API virtual ~UWsfGuidedMover();


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfGuidedMover_h_116_PROLOG
#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfGuidedMover_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfGuidedMover_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfGuidedMover_h_119_INCLASS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfGuidedMover_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASKPLAN_API UClass* StaticClass<class UWsfGuidedMover>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfGuidedMover_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
