// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/PlatformPart/Sensor/WsfSensor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWsfSensor() {}

// Begin Cross Module References
TASKPLAN_API UClass* Z_Construct_UClass_UWsfArticulatedPart();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfSensor();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfSensor_NoRegister();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin Class UWsfSensor
void UWsfSensor::StaticRegisterNativesUWsfSensor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWsfSensor);
UClass* Z_Construct_UClass_UWsfSensor_NoRegister()
{
	return UWsfSensor::StaticClass();
}
struct Z_Construct_UClass_UWsfSensor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlatformPart/Sensor/WsfSensor.h" },
		{ "ModuleRelativePath", "PlatformPart/Sensor/WsfSensor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWsfSensor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWsfSensor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWsfArticulatedPart,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfSensor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWsfSensor_Statics::ClassParams = {
	&UWsfSensor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfSensor_Statics::Class_MetaDataParams), Z_Construct_UClass_UWsfSensor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWsfSensor()
{
	if (!Z_Registration_Info_UClass_UWsfSensor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWsfSensor.OuterSingleton, Z_Construct_UClass_UWsfSensor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWsfSensor.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UWsfSensor>()
{
	return UWsfSensor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWsfSensor);
UWsfSensor::~UWsfSensor() {}
// End Class UWsfSensor

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Sensor_WsfSensor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWsfSensor, UWsfSensor::StaticClass, TEXT("UWsfSensor"), &Z_Registration_Info_UClass_UWsfSensor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWsfSensor), 952300916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Sensor_WsfSensor_h_2748214593(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Sensor_WsfSensor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Sensor_WsfSensor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
