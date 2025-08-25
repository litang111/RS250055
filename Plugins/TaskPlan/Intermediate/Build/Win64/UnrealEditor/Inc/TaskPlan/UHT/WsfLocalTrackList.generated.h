// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlatformPart/Track/WsfLocalTrackList.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWsfTrack;
#ifdef TASKPLAN_WsfLocalTrackList_generated_h
#error "WsfLocalTrackList.generated.h already included, missing '#pragma once' in WsfLocalTrackList.h"
#endif
#define TASKPLAN_WsfLocalTrackList_generated_h

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfLocalTrackList_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTrackCount); \
	DECLARE_FUNCTION(execTrackEntry);


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfLocalTrackList_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWsfLocalTrackList(); \
	friend struct Z_Construct_UClass_UWsfLocalTrackList_Statics; \
public: \
	DECLARE_CLASS(UWsfLocalTrackList, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TaskPlan"), NO_API) \
	DECLARE_SERIALIZER(UWsfLocalTrackList)


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfLocalTrackList_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWsfLocalTrackList(UWsfLocalTrackList&&); \
	UWsfLocalTrackList(const UWsfLocalTrackList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWsfLocalTrackList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWsfLocalTrackList); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWsfLocalTrackList) \
	NO_API virtual ~UWsfLocalTrackList();


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfLocalTrackList_h_21_PROLOG
#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfLocalTrackList_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfLocalTrackList_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfLocalTrackList_h_24_INCLASS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfLocalTrackList_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASKPLAN_API UClass* StaticClass<class UWsfLocalTrackList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfLocalTrackList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
