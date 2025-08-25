// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WsfObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TASKPLAN_WsfObject_generated_h
#error "WsfObject.generated.h already included, missing '#pragma once' in WsfObject.h"
#endif
#define TASKPLAN_WsfObject_generated_h

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_WsfObject_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProcessInput); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execIsA_TypeOf); \
	DECLARE_FUNCTION(execBaseType); \
	DECLARE_FUNCTION(execType); \
	DECLARE_FUNCTION(execName);


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_WsfObject_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWsfObject(); \
	friend struct Z_Construct_UClass_UWsfObject_Statics; \
public: \
	DECLARE_CLASS(UWsfObject, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TaskPlan"), NO_API) \
	DECLARE_SERIALIZER(UWsfObject)


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_WsfObject_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWsfObject(UWsfObject&&); \
	UWsfObject(const UWsfObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWsfObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWsfObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWsfObject) \
	NO_API virtual ~UWsfObject();


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_WsfObject_h_19_PROLOG
#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_WsfObject_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_WsfObject_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_WsfObject_h_22_INCLASS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_WsfObject_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASKPLAN_API UClass* StaticClass<class UWsfObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_WsfObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
