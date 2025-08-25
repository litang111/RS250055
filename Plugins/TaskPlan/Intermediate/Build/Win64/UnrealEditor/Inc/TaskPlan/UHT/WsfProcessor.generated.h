// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlatformPart/Processor/WsfProcessor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TASKPLAN_WsfProcessor_generated_h
#error "WsfProcessor.generated.h already included, missing '#pragma once' in WsfProcessor.h"
#endif
#define TASKPLAN_WsfProcessor_generated_h

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfProcessor_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFWsfProcessor_Statics; \
	TASKPLAN_API static class UScriptStruct* StaticStruct();


template<> TASKPLAN_API UScriptStruct* StaticStruct<struct FFWsfProcessor>();

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfProcessor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTurnOn); \
	DECLARE_FUNCTION(execTurnOff); \
	DECLARE_FUNCTION(execSetIncludeFile); \
	DECLARE_FUNCTION(execSetScriptVariables); \
	DECLARE_FUNCTION(execSetName); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execbluePrintPrase);


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfProcessor_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWsfProcessor(); \
	friend struct Z_Construct_UClass_UWsfProcessor_Statics; \
public: \
	DECLARE_CLASS(UWsfProcessor, UWsfPlatformPart, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TaskPlan"), NO_API) \
	DECLARE_SERIALIZER(UWsfProcessor)


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfProcessor_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWsfProcessor(UWsfProcessor&&); \
	UWsfProcessor(const UWsfProcessor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWsfProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWsfProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWsfProcessor) \
	NO_API virtual ~UWsfProcessor();


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfProcessor_h_27_PROLOG
#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfProcessor_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfProcessor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfProcessor_h_30_INCLASS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfProcessor_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASKPLAN_API UClass* StaticClass<class UWsfProcessor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Processor_WsfProcessor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
