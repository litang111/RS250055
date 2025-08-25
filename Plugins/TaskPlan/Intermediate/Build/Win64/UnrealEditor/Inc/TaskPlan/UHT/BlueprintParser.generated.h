// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintParser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
#ifdef TASKPLAN_BlueprintParser_generated_h
#error "BlueprintParser.generated.h already included, missing '#pragma once' in BlueprintParser.h"
#endif
#define TASKPLAN_BlueprintParser_generated_h

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintParser_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNodeConnections); \
	DECLARE_FUNCTION(execGetFunctions); \
	DECLARE_FUNCTION(execGetVariables); \
	DECLARE_FUNCTION(execParseBlueprint);


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintParser_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintParser(); \
	friend struct Z_Construct_UClass_UBlueprintParser_Statics; \
public: \
	DECLARE_CLASS(UBlueprintParser, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TaskPlan"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintParser)


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintParser_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintParser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintParser(UBlueprintParser&&); \
	UBlueprintParser(const UBlueprintParser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintParser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintParser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintParser) \
	NO_API virtual ~UBlueprintParser();


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintParser_h_18_PROLOG
#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintParser_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintParser_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintParser_h_21_INCLASS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintParser_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASKPLAN_API UClass* StaticClass<class UBlueprintParser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintParser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
