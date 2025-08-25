// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlatformPart/Weapons/WsfExplicitWeapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TASKPLAN_WsfExplicitWeapon_generated_h
#error "WsfExplicitWeapon.generated.h already included, missing '#pragma once' in WsfExplicitWeapon.h"
#endif
#define TASKPLAN_WsfExplicitWeapon_generated_h

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfExplicitWeapon_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics; \
	TASKPLAN_API static class UScriptStruct* StaticStruct();


template<> TASKPLAN_API UScriptStruct* StaticStruct<struct FFWsfExplicitWeapon>();

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfExplicitWeapon_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execon_update); \
	DECLARE_FUNCTION(execon_initialize2); \
	DECLARE_FUNCTION(execon_initialize);


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfExplicitWeapon_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWsfExplicitWeapon(); \
	friend struct Z_Construct_UClass_UWsfExplicitWeapon_Statics; \
public: \
	DECLARE_CLASS(UWsfExplicitWeapon, UWsfWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TaskPlan"), NO_API) \
	DECLARE_SERIALIZER(UWsfExplicitWeapon)


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfExplicitWeapon_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWsfExplicitWeapon(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWsfExplicitWeapon(UWsfExplicitWeapon&&); \
	UWsfExplicitWeapon(const UWsfExplicitWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWsfExplicitWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWsfExplicitWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWsfExplicitWeapon) \
	NO_API virtual ~UWsfExplicitWeapon();


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfExplicitWeapon_h_40_PROLOG
#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfExplicitWeapon_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfExplicitWeapon_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfExplicitWeapon_h_43_INCLASS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfExplicitWeapon_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASKPLAN_API UClass* StaticClass<class UWsfExplicitWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfExplicitWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
