// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlatformPart/Mover/WsfMover.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMover : uint8;
#ifdef TASKPLAN_WsfMover_generated_h
#error "WsfMover.generated.h already included, missing '#pragma once' in WsfMover.h"
#endif
#define TASKPLAN_WsfMover_generated_h

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFWsfMover_Statics; \
	TASKPLAN_API static class UScriptStruct* StaticStruct();


template<> TASKPLAN_API UScriptStruct* StaticStruct<struct FFWsfMover>();

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMover);


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWsfMover(); \
	friend struct Z_Construct_UClass_UWsfMover_Statics; \
public: \
	DECLARE_CLASS(UWsfMover, UWsfPlatformPart, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TaskPlan"), NO_API) \
	DECLARE_SERIALIZER(UWsfMover)


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWsfMover(UWsfMover&&); \
	UWsfMover(const UWsfMover&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWsfMover); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWsfMover); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWsfMover) \
	NO_API virtual ~UWsfMover();


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h_35_PROLOG
#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h_38_INCLASS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASKPLAN_API UClass* StaticClass<class UWsfMover>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Mover_WsfMover_h


#define FOREACH_ENUM_EMOVER(op) \
	op(EMover::WSF_AIR_MOVER) \
	op(EMover::WSF_GROUND_MOVER) \
	op(EMover::WSF_SURFACE_MOVER) \
	op(EMover::WSF_SPACE_MOVER) \
	op(EMover::WSF_NORAD_SPACE_MOVER) \
	op(EMover::WSF_INTEGRATING_SPACE_MOVER) 

enum class EMover : uint8;
template<> struct TIsUEnumClass<EMover> { enum { Value = true }; };
template<> TASKPLAN_API UEnum* StaticEnum<EMover>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
