// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/PlatformPart/Track/WsfLocalTrackList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWsfLocalTrackList() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfLocalTrackList();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfLocalTrackList_NoRegister();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfTrack_NoRegister();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin Class UWsfLocalTrackList Function TrackCount
struct Z_Construct_UFunction_UWsfLocalTrackList_TrackCount_Statics
{
	struct WsfLocalTrackList_eventTrackCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfLocalTrackList" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//int Count();  \xef\xbf\xbd\xde\xb8\xc4\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Track/WsfLocalTrackList.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "int Count();  \xef\xbf\xbd\xde\xb8\xc4\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWsfLocalTrackList_TrackCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfLocalTrackList_eventTrackCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfLocalTrackList_TrackCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfLocalTrackList_TrackCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfLocalTrackList_TrackCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfLocalTrackList_TrackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfLocalTrackList, nullptr, "TrackCount", nullptr, nullptr, Z_Construct_UFunction_UWsfLocalTrackList_TrackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfLocalTrackList_TrackCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfLocalTrackList_TrackCount_Statics::WsfLocalTrackList_eventTrackCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfLocalTrackList_TrackCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfLocalTrackList_TrackCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfLocalTrackList_TrackCount_Statics::WsfLocalTrackList_eventTrackCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfLocalTrackList_TrackCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfLocalTrackList_TrackCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfLocalTrackList::execTrackCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->TrackCount();
	P_NATIVE_END;
}
// End Class UWsfLocalTrackList Function TrackCount

// Begin Class UWsfLocalTrackList Function TrackEntry
struct Z_Construct_UFunction_UWsfLocalTrackList_TrackEntry_Statics
{
	struct WsfLocalTrackList_eventTrackEntry_Parms
	{
		int32 aIndex;
		UWsfTrack* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfLocalTrackList" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//afsim\xef\xbf\xbd\xd9\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n//WsfLocalTrack Entry(int aIndex) \xef\xbf\xbd\xde\xb8\xc4\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Track/WsfLocalTrackList.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "afsim\xef\xbf\xbd\xd9\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nWsfLocalTrack Entry(int aIndex) \xef\xbf\xbd\xde\xb8\xc4\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_aIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWsfLocalTrackList_TrackEntry_Statics::NewProp_aIndex = { "aIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfLocalTrackList_eventTrackEntry_Parms, aIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWsfLocalTrackList_TrackEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfLocalTrackList_eventTrackEntry_Parms, ReturnValue), Z_Construct_UClass_UWsfTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfLocalTrackList_TrackEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfLocalTrackList_TrackEntry_Statics::NewProp_aIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfLocalTrackList_TrackEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfLocalTrackList_TrackEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfLocalTrackList_TrackEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfLocalTrackList, nullptr, "TrackEntry", nullptr, nullptr, Z_Construct_UFunction_UWsfLocalTrackList_TrackEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfLocalTrackList_TrackEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfLocalTrackList_TrackEntry_Statics::WsfLocalTrackList_eventTrackEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfLocalTrackList_TrackEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfLocalTrackList_TrackEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfLocalTrackList_TrackEntry_Statics::WsfLocalTrackList_eventTrackEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfLocalTrackList_TrackEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfLocalTrackList_TrackEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfLocalTrackList::execTrackEntry)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_aIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWsfTrack**)Z_Param__Result=P_THIS->TrackEntry(Z_Param_aIndex);
	P_NATIVE_END;
}
// End Class UWsfLocalTrackList Function TrackEntry

// Begin Class UWsfLocalTrackList
void UWsfLocalTrackList::StaticRegisterNativesUWsfLocalTrackList()
{
	UClass* Class = UWsfLocalTrackList::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TrackCount", &UWsfLocalTrackList::execTrackCount },
		{ "TrackEntry", &UWsfLocalTrackList::execTrackEntry },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWsfLocalTrackList);
UClass* Z_Construct_UClass_UWsfLocalTrackList_NoRegister()
{
	return UWsfLocalTrackList::StaticClass();
}
struct Z_Construct_UClass_UWsfLocalTrackList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlatformPart/Track/WsfLocalTrackList.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PlatformPart/Track/WsfLocalTrackList.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWsfLocalTrackList_TrackCount, "TrackCount" }, // 3218923572
		{ &Z_Construct_UFunction_UWsfLocalTrackList_TrackEntry, "TrackEntry" }, // 659838492
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWsfLocalTrackList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWsfLocalTrackList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfLocalTrackList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWsfLocalTrackList_Statics::ClassParams = {
	&UWsfLocalTrackList::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfLocalTrackList_Statics::Class_MetaDataParams), Z_Construct_UClass_UWsfLocalTrackList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWsfLocalTrackList()
{
	if (!Z_Registration_Info_UClass_UWsfLocalTrackList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWsfLocalTrackList.OuterSingleton, Z_Construct_UClass_UWsfLocalTrackList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWsfLocalTrackList.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UWsfLocalTrackList>()
{
	return UWsfLocalTrackList::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWsfLocalTrackList);
UWsfLocalTrackList::~UWsfLocalTrackList() {}
// End Class UWsfLocalTrackList

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfLocalTrackList_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWsfLocalTrackList, UWsfLocalTrackList::StaticClass, TEXT("UWsfLocalTrackList"), &Z_Registration_Info_UClass_UWsfLocalTrackList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWsfLocalTrackList), 2909931888U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfLocalTrackList_h_1200418739(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfLocalTrackList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Track_WsfLocalTrackList_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
