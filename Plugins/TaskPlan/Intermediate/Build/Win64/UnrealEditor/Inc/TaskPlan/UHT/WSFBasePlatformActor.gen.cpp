// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/Platform/WSFBasePlatformActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWSFBasePlatformActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
TASKPLAN_API UClass* Z_Construct_UClass_AWSFBasePlatformActor();
TASKPLAN_API UClass* Z_Construct_UClass_AWSFBasePlatformActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin Class AWSFBasePlatformActor
void AWSFBasePlatformActor::StaticRegisterNativesAWSFBasePlatformActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWSFBasePlatformActor);
UClass* Z_Construct_UClass_AWSFBasePlatformActor_NoRegister()
{
	return AWSFBasePlatformActor::StaticClass();
}
struct Z_Construct_UClass_AWSFBasePlatformActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Platform/WSFBasePlatformActor.h" },
		{ "ModuleRelativePath", "Platform/WSFBasePlatformActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Skeletal mesh component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Platform/WSFBasePlatformActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skeletal mesh component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWSFBasePlatformActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWSFBasePlatformActor_Statics::NewProp_PlatformMesh = { "PlatformMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWSFBasePlatformActor, PlatformMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformMesh_MetaData), NewProp_PlatformMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWSFBasePlatformActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWSFBasePlatformActor_Statics::NewProp_PlatformMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWSFBasePlatformActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWSFBasePlatformActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWSFBasePlatformActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWSFBasePlatformActor_Statics::ClassParams = {
	&AWSFBasePlatformActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWSFBasePlatformActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWSFBasePlatformActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWSFBasePlatformActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AWSFBasePlatformActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWSFBasePlatformActor()
{
	if (!Z_Registration_Info_UClass_AWSFBasePlatformActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWSFBasePlatformActor.OuterSingleton, Z_Construct_UClass_AWSFBasePlatformActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWSFBasePlatformActor.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<AWSFBasePlatformActor>()
{
	return AWSFBasePlatformActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWSFBasePlatformActor);
AWSFBasePlatformActor::~AWSFBasePlatformActor() {}
// End Class AWSFBasePlatformActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WSFBasePlatformActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWSFBasePlatformActor, AWSFBasePlatformActor::StaticClass, TEXT("AWSFBasePlatformActor"), &Z_Registration_Info_UClass_AWSFBasePlatformActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWSFBasePlatformActor), 2990407168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WSFBasePlatformActor_h_2414501080(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WSFBasePlatformActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_Platform_WSFBasePlatformActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
