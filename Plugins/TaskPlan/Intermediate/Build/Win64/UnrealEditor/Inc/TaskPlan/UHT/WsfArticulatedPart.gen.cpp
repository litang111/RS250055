// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/PlatformPart/Weapons/WsfArticulatedPart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWsfArticulatedPart() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfArticulatedPart();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfArticulatedPart_NoRegister();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfPlatformPart();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFArticulatedPart();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin ScriptStruct FFArticulatedPart
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FArticulatedPart;
class UScriptStruct* FFArticulatedPart::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FArticulatedPart.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FArticulatedPart.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFArticulatedPart, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("FArticulatedPart"));
	}
	return Z_Registration_Info_UScriptStruct_FArticulatedPart.OuterSingleton;
}
template<> TASKPLAN_API UScriptStruct* StaticStruct<FFArticulatedPart>()
{
	return FFArticulatedPart::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFArticulatedPart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfArticulatedPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[] = {
		{ "Category", "WsfArticulatedPart" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfArticulatedPart.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFArticulatedPart>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFArticulatedPart_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFArticulatedPart, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_location_MetaData), NewProp_location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFArticulatedPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFArticulatedPart_Statics::NewProp_location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFArticulatedPart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFArticulatedPart_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	&NewStructOps,
	"FArticulatedPart",
	Z_Construct_UScriptStruct_FFArticulatedPart_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFArticulatedPart_Statics::PropPointers),
	sizeof(FFArticulatedPart),
	alignof(FFArticulatedPart),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFArticulatedPart_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFArticulatedPart_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFArticulatedPart()
{
	if (!Z_Registration_Info_UScriptStruct_FArticulatedPart.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FArticulatedPart.InnerSingleton, Z_Construct_UScriptStruct_FFArticulatedPart_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FArticulatedPart.InnerSingleton;
}
// End ScriptStruct FFArticulatedPart

// Begin Class UWsfArticulatedPart
void UWsfArticulatedPart::StaticRegisterNativesUWsfArticulatedPart()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWsfArticulatedPart);
UClass* Z_Construct_UClass_UWsfArticulatedPart_NoRegister()
{
	return UWsfArticulatedPart::StaticClass();
}
struct Z_Construct_UClass_UWsfArticulatedPart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlatformPart/Weapons/WsfArticulatedPart.h" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfArticulatedPart.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWsfArticulatedPart>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWsfArticulatedPart_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWsfPlatformPart,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfArticulatedPart_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWsfArticulatedPart_Statics::ClassParams = {
	&UWsfArticulatedPart::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfArticulatedPart_Statics::Class_MetaDataParams), Z_Construct_UClass_UWsfArticulatedPart_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWsfArticulatedPart()
{
	if (!Z_Registration_Info_UClass_UWsfArticulatedPart.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWsfArticulatedPart.OuterSingleton, Z_Construct_UClass_UWsfArticulatedPart_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWsfArticulatedPart.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UWsfArticulatedPart>()
{
	return UWsfArticulatedPart::StaticClass();
}
UWsfArticulatedPart::UWsfArticulatedPart() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWsfArticulatedPart);
UWsfArticulatedPart::~UWsfArticulatedPart() {}
// End Class UWsfArticulatedPart

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfArticulatedPart_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFArticulatedPart::StaticStruct, Z_Construct_UScriptStruct_FFArticulatedPart_Statics::NewStructOps, TEXT("FArticulatedPart"), &Z_Registration_Info_UScriptStruct_FArticulatedPart, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFArticulatedPart), 126356560U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWsfArticulatedPart, UWsfArticulatedPart::StaticClass, TEXT("UWsfArticulatedPart"), &Z_Registration_Info_UClass_UWsfArticulatedPart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWsfArticulatedPart), 2969091329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfArticulatedPart_h_181372095(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfArticulatedPart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfArticulatedPart_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfArticulatedPart_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfArticulatedPart_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
