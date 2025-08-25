// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
class UBlueprint;
class UObject;
class UStaticMesh;
class UStaticMeshComponent;
struct FEdGraphPinType;
#ifdef TASKPLAN_BlueprintGenerator_generated_h
#error "BlueprintGenerator.generated.h already included, missing '#pragma once' in BlueprintGenerator.h"
#endif
#define TASKPLAN_BlueprintGenerator_generated_h

#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintGenerator_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddLogicToBlueprint); \
	DECLARE_FUNCTION(execAddStaticMeshComponentToBlueprint); \
	DECLARE_FUNCTION(execAddComponentToBlueprint); \
	DECLARE_FUNCTION(execAddVariableToBlueprint); \
	DECLARE_FUNCTION(execCreateNewBlueprint);


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintGenerator_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintGenerator(); \
	friend struct Z_Construct_UClass_UBlueprintGenerator_Statics; \
public: \
	DECLARE_CLASS(UBlueprintGenerator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TaskPlan"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintGenerator)


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintGenerator_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintGenerator(UBlueprintGenerator&&); \
	UBlueprintGenerator(const UBlueprintGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintGenerator) \
	NO_API virtual ~UBlueprintGenerator();


#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintGenerator_h_33_PROLOG
#define FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintGenerator_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintGenerator_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintGenerator_h_36_INCLASS_NO_PURE_DECLS \
	FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintGenerator_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TASKPLAN_API UClass* StaticClass<class UBlueprintGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_BlueprintGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
