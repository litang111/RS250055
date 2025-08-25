// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Platform/WsfPlatform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWsfLocalTrackList;
class UWsfWeapon;
enum class EIcon : uint8;
enum class ESide : uint8;
#ifdef TASKPLAN_WsfPlatform_generated_h
#error "WsfPlatform.generated.h already included, missing '#pragma once' in WsfPlatform.h"
#endif
#define TASKPLAN_WsfPlatform_generated_h

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFPlatform_Statics; \
	TASKPLAN_API static class UScriptStruct* StaticStruct();


template<> TASKPLAN_API UScriptStruct* StaticStruct<struct FFPlatform>();

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWeaponCount); \
	DECLARE_FUNCTION(execWeapon); \
	DECLARE_FUNCTION(execMasterTrackList); \
	DECLARE_FUNCTION(execIcon); \
	DECLARE_FUNCTION(execSetIcon); \
	DECLARE_FUNCTION(execSide); \
	DECLARE_FUNCTION(execSetSide); \
	DECLARE_FUNCTION(execSetCreationTime); \
	DECLARE_FUNCTION(execTimeSinceCreation); \
	DECLARE_FUNCTION(execCreationTime); \
	DECLARE_FUNCTION(execIndex); \
	DECLARE_FUNCTION(execExecuteGlobalScript); \
	DECLARE_FUNCTION(execon_platform_deleted); \
	DECLARE_FUNCTION(execon_damage_received); \
	DECLARE_FUNCTION(execon_update); \
	DECLARE_FUNCTION(execon_initialize2); \
	DECLARE_FUNCTION(execon_initialize); \
	DECLARE_FUNCTION(execgetString); \
	DECLARE_FUNCTION(execbluePrintPrase);


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h_152_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWsfPlatform(); \
	friend struct Z_Construct_UClass_UWsfPlatform_Statics; \
public: \
	DECLARE_CLASS(UWsfPlatform, UWsfObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TaskPlan"), NO_API) \
	DECLARE_SERIALIZER(UWsfPlatform)


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h_152_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWsfPlatform(UWsfPlatform&&); \
	UWsfPlatform(const UWsfPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWsfPlatform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWsfPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWsfPlatform) \
	NO_API virtual ~UWsfPlatform();


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h_149_PROLOG
#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h_152_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h_152_INCLASS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h_152_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASKPLAN_API UClass* StaticClass<class UWsfPlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WsfPlatform_h


#define FOREACH_ENUM_EICON(op) \
	op(EIcon::Scud_Launcher) \
	op(EIcon::Bullseye) 

enum class EIcon : uint8;
template<> struct TIsUEnumClass<EIcon> { enum { Value = true }; };
template<> TASKPLAN_API UEnum* StaticEnum<EIcon>();

#define FOREACH_ENUM_ESIDE(op) \
	op(ESide::red) \
	op(ESide::blue) 

enum class ESide : uint8;
template<> struct TIsUEnumClass<ESide> { enum { Value = true }; };
template<> TASKPLAN_API UEnum* StaticEnum<ESide>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
