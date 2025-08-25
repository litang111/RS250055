// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlatformPart/Weapons/WsfWeapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWsfTrack;
enum class EWeapon : uint8;
#ifdef TASKPLAN_WsfWeapon_generated_h
#error "WsfWeapon.generated.h already included, missing '#pragma once' in WsfWeapon.h"
#endif
#define TASKPLAN_WsfWeapon_generated_h

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLaunchComputer_Statics; \
	TASKPLAN_API static class UScriptStruct* StaticStruct();


template<> TASKPLAN_API UScriptStruct* StaticStruct<struct FLaunchComputer>();

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFWeapon_Statics; \
	TASKPLAN_API static class UScriptStruct* StaticStruct();


template<> TASKPLAN_API UScriptStruct* StaticStruct<struct FFWeapon>();

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetQuantityRemaining); \
	DECLARE_FUNCTION(execQuantityRemaining); \
	DECLARE_FUNCTION(execquantity); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execCueToTarget); \
	DECLARE_FUNCTION(execSetIncludeFile); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execSetWeapon);


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWsfWeapon(); \
	friend struct Z_Construct_UClass_UWsfWeapon_Statics; \
public: \
	DECLARE_CLASS(UWsfWeapon, UWsfArticulatedPart, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TaskPlan"), NO_API) \
	DECLARE_SERIALIZER(UWsfWeapon)


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWsfWeapon(UWsfWeapon&&); \
	UWsfWeapon(const UWsfWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWsfWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWsfWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWsfWeapon) \
	NO_API virtual ~UWsfWeapon();


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_82_PROLOG
#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_85_INCLASS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASKPLAN_API UClass* StaticClass<class UWsfWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h


#define FOREACH_ENUM_EWEAPON(op) \
	op(EWeapon::RED_MRBM_2) \
	op(EWeapon::RED_SRBM_1) \
	op(EWeapon::RED_SRBM_2) \
	op(EWeapon::RED_SRBM_3) \
	op(EWeapon::RED_SRBM_4) 

enum class EWeapon : uint8;
template<> struct TIsUEnumClass<EWeapon> { enum { Value = true }; };
template<> TASKPLAN_API UEnum* StaticEnum<EWeapon>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
