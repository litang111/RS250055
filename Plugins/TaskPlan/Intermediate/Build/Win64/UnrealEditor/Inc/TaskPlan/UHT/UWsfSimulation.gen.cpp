// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/UWsfSimulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUWsfSimulation() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TASKPLAN_API UClass* Z_Construct_UClass_UUWsfSimulation();
TASKPLAN_API UClass* Z_Construct_UClass_UUWsfSimulation_NoRegister();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin Class UUWsfSimulation
void UUWsfSimulation::StaticRegisterNativesUUWsfSimulation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUWsfSimulation);
UClass* Z_Construct_UClass_UUWsfSimulation_NoRegister()
{
	return UUWsfSimulation::StaticClass();
}
struct Z_Construct_UClass_UUWsfSimulation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UWsfSimulation.h" },
		{ "ModuleRelativePath", "UWsfSimulation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUWsfSimulation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUWsfSimulation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUWsfSimulation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUWsfSimulation_Statics::ClassParams = {
	&UUWsfSimulation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUWsfSimulation_Statics::Class_MetaDataParams), Z_Construct_UClass_UUWsfSimulation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUWsfSimulation()
{
	if (!Z_Registration_Info_UClass_UUWsfSimulation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUWsfSimulation.OuterSingleton, Z_Construct_UClass_UUWsfSimulation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUWsfSimulation.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UUWsfSimulation>()
{
	return UUWsfSimulation::StaticClass();
}
UUWsfSimulation::UUWsfSimulation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUWsfSimulation);
UUWsfSimulation::~UUWsfSimulation() {}
// End Class UUWsfSimulation

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_UWsfSimulation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUWsfSimulation, UUWsfSimulation::StaticClass, TEXT("UUWsfSimulation"), &Z_Registration_Info_UClass_UUWsfSimulation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUWsfSimulation), 3666473998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_UWsfSimulation_h_963999121(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_UWsfSimulation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_UWsfSimulation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
