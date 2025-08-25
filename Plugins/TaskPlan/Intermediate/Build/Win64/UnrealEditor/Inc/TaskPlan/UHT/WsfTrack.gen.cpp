// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/PlatformPart/Track/WsfTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWsfTrack() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfTrack();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfTrack_NoRegister();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin Class UWsfTrack
void UWsfTrack::StaticRegisterNativesUWsfTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWsfTrack);
UClass* Z_Construct_UClass_UWsfTrack_NoRegister()
{
	return UWsfTrack::StaticClass();
}
struct Z_Construct_UClass_UWsfTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlatformPart/Track/WsfTrack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PlatformPart/Track/WsfTrack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWsfTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWsfTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWsfTrack_Statics::ClassParams = {
	&UWsfTrack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UWsfTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWsfTrack()
{
	if (!Z_Registration_Info_UClass_UWsfTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWsfTrack.OuterSingleton, Z_Construct_UClass_UWsfTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWsfTrack.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UWsfTrack>()
{
	return UWsfTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWsfTrack);
UWsfTrack::~UWsfTrack() {}
// End Class UWsfTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfTrack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWsfTrack, UWsfTrack::StaticClass, TEXT("UWsfTrack"), &Z_Registration_Info_UClass_UWsfTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWsfTrack), 780864004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfTrack_h_63023060(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfTrack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
