// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/PlatformPart/Track/WsfLocalTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWsfLocalTrack() {}

// Begin Cross Module References
TASKPLAN_API UClass* Z_Construct_UClass_UWsfLocalTrack();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfLocalTrack_NoRegister();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfTrack();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin Class UWsfLocalTrack
void UWsfLocalTrack::StaticRegisterNativesUWsfLocalTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWsfLocalTrack);
UClass* Z_Construct_UClass_UWsfLocalTrack_NoRegister()
{
	return UWsfLocalTrack::StaticClass();
}
struct Z_Construct_UClass_UWsfLocalTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlatformPart/Track/WsfLocalTrack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PlatformPart/Track/WsfLocalTrack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWsfLocalTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWsfLocalTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWsfTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfLocalTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWsfLocalTrack_Statics::ClassParams = {
	&UWsfLocalTrack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfLocalTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UWsfLocalTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWsfLocalTrack()
{
	if (!Z_Registration_Info_UClass_UWsfLocalTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWsfLocalTrack.OuterSingleton, Z_Construct_UClass_UWsfLocalTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWsfLocalTrack.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UWsfLocalTrack>()
{
	return UWsfLocalTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWsfLocalTrack);
UWsfLocalTrack::~UWsfLocalTrack() {}
// End Class UWsfLocalTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfLocalTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWsfLocalTrack, UWsfLocalTrack::StaticClass, TEXT("UWsfLocalTrack"), &Z_Registration_Info_UClass_UWsfLocalTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWsfLocalTrack), 1943264171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfLocalTrack_h_1526241014(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfLocalTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfLocalTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
