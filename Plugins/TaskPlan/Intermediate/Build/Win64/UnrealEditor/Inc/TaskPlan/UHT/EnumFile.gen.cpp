// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/EnumFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnumFile() {}

// Begin Cross Module References
TASKPLAN_API UEnum* Z_Construct_UEnum_TaskPlan_EInputType();
TASKPLAN_API UEnum* Z_Construct_UEnum_TaskPlan_EResult();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin Enum EInputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputType;
static UEnum* EInputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TaskPlan_EInputType, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("EInputType"));
	}
	return Z_Registration_Info_UEnum_EInputType.OuterSingleton;
}
template<> TASKPLAN_API UEnum* StaticEnum<EInputType>()
{
	return EInputType_StaticEnum();
}
struct Z_Construct_UEnum_TaskPlan_EInputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "EnumFile.h" },
		{ "WSF_PLATFORM.DisplayName", "WSF_PLATFORM" },
		{ "WSF_PLATFORM.Name", "EInputType::WSF_PLATFORM" },
		{ "WSF_WEAPONS_MANAGER.DisplayName", "WSF_WEAPONS_MANAGER" },
		{ "WSF_WEAPONS_MANAGER.Name", "EInputType::WSF_WEAPONS_MANAGER" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputType::WSF_PLATFORM", (int64)EInputType::WSF_PLATFORM },
		{ "EInputType::WSF_WEAPONS_MANAGER", (int64)EInputType::WSF_WEAPONS_MANAGER },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TaskPlan_EInputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	"EInputType",
	"EInputType",
	Z_Construct_UEnum_TaskPlan_EInputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TaskPlan_EInputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TaskPlan_EInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TaskPlan_EInputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TaskPlan_EInputType()
{
	if (!Z_Registration_Info_UEnum_EInputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputType.InnerSingleton, Z_Construct_UEnum_TaskPlan_EInputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputType.InnerSingleton;
}
// End Enum EInputType

// Begin Enum EResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResult;
static UEnum* EResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TaskPlan_EResult, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("EResult"));
	}
	return Z_Registration_Info_UEnum_EResult.OuterSingleton;
}
template<> TASKPLAN_API UEnum* StaticEnum<EResult>()
{
	return EResult_StaticEnum();
}
struct Z_Construct_UEnum_TaskPlan_EResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "far_away_above_ground.DisplayName", "far_away_above_ground" },
		{ "far_away_above_ground.Name", "EResult::far_away_above_ground" },
		{ "far_away_ground_impact.DisplayName", "far_away_ground_impact" },
		{ "far_away_ground_impact.Name", "EResult::far_away_ground_impact" },
		{ "far_away_in_air.DisplayName", "far_away_in_air" },
		{ "far_away_in_air.Name", "EResult::far_away_in_air" },
		{ "ModuleRelativePath", "EnumFile.h" },
		{ "target_impact.DisplayName", "target_impact" },
		{ "target_impact.Name", "EResult::target_impact" },
		{ "target_proximity_above_ground.DisplayName", "target_proximity_above_ground" },
		{ "target_proximity_above_ground.Name", "EResult::target_proximity_above_ground" },
		{ "target_proximity_air_burst.DisplayName", "target_proximity_air_burstUMETA" },
		{ "target_proximity_air_burst.Name", "EResult::target_proximity_air_burst" },
		{ "target_proximity_ground_impact.DisplayName", "target_proximity_ground_impact" },
		{ "target_proximity_ground_impact.Name", "EResult::target_proximity_ground_impact" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EResult::target_impact", (int64)EResult::target_impact },
		{ "EResult::far_away_in_air", (int64)EResult::far_away_in_air },
		{ "EResult::far_away_above_ground", (int64)EResult::far_away_above_ground },
		{ "EResult::far_away_ground_impact", (int64)EResult::far_away_ground_impact },
		{ "EResult::target_proximity_air_burst", (int64)EResult::target_proximity_air_burst },
		{ "EResult::target_proximity_above_ground", (int64)EResult::target_proximity_above_ground },
		{ "EResult::target_proximity_ground_impact", (int64)EResult::target_proximity_ground_impact },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TaskPlan_EResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	"EResult",
	"EResult",
	Z_Construct_UEnum_TaskPlan_EResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TaskPlan_EResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TaskPlan_EResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TaskPlan_EResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TaskPlan_EResult()
{
	if (!Z_Registration_Info_UEnum_EResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResult.InnerSingleton, Z_Construct_UEnum_TaskPlan_EResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EResult.InnerSingleton;
}
// End Enum EResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_EnumFile_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInputType_StaticEnum, TEXT("EInputType"), &Z_Registration_Info_UEnum_EInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1504483220U) },
		{ EResult_StaticEnum, TEXT("EResult"), &Z_Registration_Info_UEnum_EResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 536754557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_EnumFile_h_3285943874(TEXT("/Script/TaskPlan"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_EnumFile_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_EnumFile_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
