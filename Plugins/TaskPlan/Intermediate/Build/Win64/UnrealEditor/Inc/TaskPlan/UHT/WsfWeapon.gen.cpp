// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/PlatformPart/Weapons/WsfWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWsfWeapon() {}

// Begin Cross Module References
TASKPLAN_API UClass* Z_Construct_UClass_UWsfArticulatedPart();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfTrack_NoRegister();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfWeapon();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfWeapon_NoRegister();
TASKPLAN_API UEnum* Z_Construct_UEnum_TaskPlan_EWeapon();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFWeapon();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchComputer();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin ScriptStruct FLaunchComputer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchComputer;
class UScriptStruct* FLaunchComputer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchComputer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchComputer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchComputer, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("LaunchComputer"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchComputer.OuterSingleton;
}
template<> TASKPLAN_API UScriptStruct* StaticStruct<FLaunchComputer>()
{
	return FLaunchComputer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLaunchComputer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_surface_to_surface_table_MetaData[] = {
		{ "Category", "WsfWeapon|launchComputer" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_surface_to_surface_table;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchComputer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchComputer_Statics::NewProp_surface_to_surface_table = { "surface_to_surface_table", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchComputer, surface_to_surface_table), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_surface_to_surface_table_MetaData), NewProp_surface_to_surface_table_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchComputer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchComputer_Statics::NewProp_surface_to_surface_table,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchComputer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchComputer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	&NewStructOps,
	"LaunchComputer",
	Z_Construct_UScriptStruct_FLaunchComputer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchComputer_Statics::PropPointers),
	sizeof(FLaunchComputer),
	alignof(FLaunchComputer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchComputer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLaunchComputer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLaunchComputer()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchComputer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchComputer.InnerSingleton, Z_Construct_UScriptStruct_FLaunchComputer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LaunchComputer.InnerSingleton;
}
// End ScriptStruct FLaunchComputer

// Begin ScriptStruct FFWeapon
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWeapon;
class UScriptStruct* FFWeapon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWeapon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWeapon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFWeapon, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("FWeapon"));
	}
	return Z_Registration_Info_UScriptStruct_FWeapon.OuterSingleton;
}
template<> TASKPLAN_API UScriptStruct* StaticStruct<FFWeapon>()
{
	return FFWeapon::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_quantity_MetaData[] = {
		{ "Category", "WsfWeapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WsfWeapon\");\n// FFPlatformPart PlatformPart;\n// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WsfWeapon\");\n// FFArticulatedPart ArticulatedPart;\n// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WsfWeapon\");\n// int on_off;\n// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WsfWeapon\");\n// int update_interval;\n// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WsfWeapon\");\n// FLaunchComputer launch_computer ;\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WsfWeapon\");\nFFPlatformPart PlatformPart;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WsfWeapon\");\nFFArticulatedPart ArticulatedPart;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WsfWeapon\");\nint on_off;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WsfWeapon\");\nint update_interval;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WsfWeapon\");\nFLaunchComputer launch_computer ;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFWeapon>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWeapon_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWeapon, quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_quantity_MetaData), NewProp_quantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWeapon_Statics::NewProp_quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFWeapon_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	&NewStructOps,
	"FWeapon",
	Z_Construct_UScriptStruct_FFWeapon_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWeapon_Statics::PropPointers),
	sizeof(FFWeapon),
	alignof(FFWeapon),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWeapon_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFWeapon_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFWeapon()
{
	if (!Z_Registration_Info_UScriptStruct_FWeapon.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWeapon.InnerSingleton, Z_Construct_UScriptStruct_FFWeapon_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWeapon.InnerSingleton;
}
// End ScriptStruct FFWeapon

// Begin Enum EWeapon
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeapon;
static UEnum* EWeapon_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeapon.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeapon.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TaskPlan_EWeapon, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("EWeapon"));
	}
	return Z_Registration_Info_UEnum_EWeapon.OuterSingleton;
}
template<> TASKPLAN_API UEnum* StaticEnum<EWeapon>()
{
	return EWeapon_StaticEnum();
}
struct Z_Construct_UEnum_TaskPlan_EWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfWeapon.h" },
		{ "RED_MRBM_2.Name", "EWeapon::RED_MRBM_2" },
		{ "RED_SRBM_1.Name", "EWeapon::RED_SRBM_1" },
		{ "RED_SRBM_2.Name", "EWeapon::RED_SRBM_2" },
		{ "RED_SRBM_3.Name", "EWeapon::RED_SRBM_3" },
		{ "RED_SRBM_4.Name", "EWeapon::RED_SRBM_4" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeapon::RED_MRBM_2", (int64)EWeapon::RED_MRBM_2 },
		{ "EWeapon::RED_SRBM_1", (int64)EWeapon::RED_SRBM_1 },
		{ "EWeapon::RED_SRBM_2", (int64)EWeapon::RED_SRBM_2 },
		{ "EWeapon::RED_SRBM_3", (int64)EWeapon::RED_SRBM_3 },
		{ "EWeapon::RED_SRBM_4", (int64)EWeapon::RED_SRBM_4 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TaskPlan_EWeapon_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	"EWeapon",
	"EWeapon",
	Z_Construct_UEnum_TaskPlan_EWeapon_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TaskPlan_EWeapon_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TaskPlan_EWeapon_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TaskPlan_EWeapon_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TaskPlan_EWeapon()
{
	if (!Z_Registration_Info_UEnum_EWeapon.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeapon.InnerSingleton, Z_Construct_UEnum_TaskPlan_EWeapon_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeapon.InnerSingleton;
}
// End Enum EWeapon

// Begin Class UWsfWeapon Function CueToTarget
struct Z_Construct_UFunction_UWsfWeapon_CueToTarget_Statics
{
	struct WsfWeapon_eventCueToTarget_Parms
	{
		UWsfTrack* aTrack;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfWeapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//afsim\xe5\xae\x98\xe6\x96\xb9\xe5\x87\xbd\xe6\x95\xb0\n// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WsfWeapon\");\n// FWeapon WeaponParams;\n// Static Methods\n// static bool IsA_TypeOf(string aDerivedType, string aBaseType)\n// Returns true if the weapon type specified by aDerivedType inherits from the weapon type specified by aBaseType (compare to WsfObject.IsA_TypeOf(aBaseType), which determines if a specific object inherits from aBaseType).\n//\n// Methods\n// bool TurnOff()\n// Turns the weapon off and returns true if successful.\n//\n// bool TurnOn()\n// Turns the weapon on and returns true if successful.\n//\n//Cues the weapon to the track.\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "afsim\xe5\xae\x98\xe6\x96\xb9\xe5\x87\xbd\xe6\x95\xb0\n UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WsfWeapon\");\n FWeapon WeaponParams;\n Static Methods\n static bool IsA_TypeOf(string aDerivedType, string aBaseType)\n Returns true if the weapon type specified by aDerivedType inherits from the weapon type specified by aBaseType (compare to WsfObject.IsA_TypeOf(aBaseType), which determines if a specific object inherits from aBaseType).\n\n Methods\n bool TurnOff()\n Turns the weapon off and returns true if successful.\n\n bool TurnOn()\n Turns the weapon on and returns true if successful.\n\nCues the weapon to the track." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aTrack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aTrack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWsfWeapon_CueToTarget_Statics::NewProp_aTrack = { "aTrack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfWeapon_eventCueToTarget_Parms, aTrack), Z_Construct_UClass_UWsfTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aTrack_MetaData), NewProp_aTrack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfWeapon_CueToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfWeapon_CueToTarget_Statics::NewProp_aTrack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_CueToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfWeapon_CueToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfWeapon, nullptr, "CueToTarget", nullptr, nullptr, Z_Construct_UFunction_UWsfWeapon_CueToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_CueToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfWeapon_CueToTarget_Statics::WsfWeapon_eventCueToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_CueToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfWeapon_CueToTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfWeapon_CueToTarget_Statics::WsfWeapon_eventCueToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfWeapon_CueToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfWeapon_CueToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfWeapon::execCueToTarget)
{
	P_GET_OBJECT(UWsfTrack,Z_Param_aTrack);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CueToTarget(Z_Param_aTrack);
	P_NATIVE_END;
}
// End Class UWsfWeapon Function CueToTarget

// Begin Class UWsfWeapon Function Fire
struct Z_Construct_UFunction_UWsfWeapon_Fire_Statics
{
	struct WsfWeapon_eventFire_Parms
	{
		UWsfTrack* aTrack;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfWeapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Fires the weapon with or without a current track.\xe8\x93\x9d\xe5\x9b\xbe\xe7\x9a\x84\xe8\xa7\x86\xe8\xa7\x89\xe8\x84\x9a\xe6\x9c\xac\xe7\xb3\xbb\xe7\xbb\x9f\xe6\x97\xa0\xe6\xb3\x95\xe4\xbb\x85\xe9\x80\x9a\xe8\xbf\x87\xe5\x8f\x82\xe6\x95\xb0\xe7\xb1\xbb\xe5\x9e\x8b\xe5\x8c\xba\xe5\x88\x86\xe5\x87\xbd\xe6\x95\xb0\n" },
#endif
		{ "DisplayName", "FireByPercent" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires the weapon with or without a current track.\xe8\x93\x9d\xe5\x9b\xbe\xe7\x9a\x84\xe8\xa7\x86\xe8\xa7\x89\xe8\x84\x9a\xe6\x9c\xac\xe7\xb3\xbb\xe7\xbb\x9f\xe6\x97\xa0\xe6\xb3\x95\xe4\xbb\x85\xe9\x80\x9a\xe8\xbf\x87\xe5\x8f\x82\xe6\x95\xb0\xe7\xb1\xbb\xe5\x9e\x8b\xe5\x8c\xba\xe5\x88\x86\xe5\x87\xbd\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aTrack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aTrack;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWsfWeapon_Fire_Statics::NewProp_aTrack = { "aTrack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfWeapon_eventFire_Parms, aTrack), Z_Construct_UClass_UWsfTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aTrack_MetaData), NewProp_aTrack_MetaData) };
void Z_Construct_UFunction_UWsfWeapon_Fire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WsfWeapon_eventFire_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWsfWeapon_Fire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WsfWeapon_eventFire_Parms), &Z_Construct_UFunction_UWsfWeapon_Fire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfWeapon_Fire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfWeapon_Fire_Statics::NewProp_aTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfWeapon_Fire_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_Fire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfWeapon_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfWeapon, nullptr, "Fire", nullptr, nullptr, Z_Construct_UFunction_UWsfWeapon_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_Fire_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfWeapon_Fire_Statics::WsfWeapon_eventFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfWeapon_Fire_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfWeapon_Fire_Statics::WsfWeapon_eventFire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfWeapon_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfWeapon_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfWeapon::execFire)
{
	P_GET_OBJECT(UWsfTrack,Z_Param_aTrack);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Fire(Z_Param_aTrack);
	P_NATIVE_END;
}
// End Class UWsfWeapon Function Fire

// Begin Class UWsfWeapon Function quantity
struct Z_Construct_UFunction_UWsfWeapon_quantity_Statics
{
	struct WsfWeapon_eventquantity_Parms
	{
		int32 num;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfWeapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// bool Fire(WsfTrack aTrack)\n// Fires the weapon with or without a current track. This method returns \xe2\x80\x98true\xe2\x80\x99 if a launch has been successfully scheduled. Some weapons may have a delay between the time when a fire command is issued and the actual time of launch. A successful weapon launch will trigger a WEAPON_FIRED event. This method returns \xe2\x80\x98""false\xe2\x80\x99 if a launch cannot be scheduled due to several reasons, such as, the weapon quantity is 0, the launch interval has not elapsed, the weapon is reloading and it cannot shoot while reloading, or the weapon is damaged. Additional checks at the time of launch may still result in a launch failure triggering a WEAPON_FIRE_ABORTED event.\n//\n// bool FireAtLocation(WsfGeoPoint aLocation)\n// Generates a track based on the location provided and then fires the weapon on the generated track. The track is stored in the master track list on the platform that owns the weapon. This method returns \xe2\x80\x98true\xe2\x80\x99 if a launch has been successfully scheduled. Some weapons may have a delay between the time when a fire command is issued and the actual time of launch. A successful weapon launch will trigger a WEAPON_FIRED event. This method returns \xe2\x80\x98""false\xe2\x80\x99 if a launch cannot be scheduled due to several reasons, such as, the weapon quantity is 0, the launch interval has not elapsed, the weapon is reloading and it cannot shoot while reloading, or the weapon is damaged. Additional checks at the time of launch may still result in a launch failure triggering a WEAPON_FIRE_ABORTED event.\n//\n// bool FireSalvo(WsfTrack aTrack, int aNumRounds)\n// Fires the weapon at the current track using the requested number of rounds. This method returns \xe2\x80\x98true\xe2\x80\x99 if salvo request was successfully initiated. A successful salvo request triggers a WEAPON_FIRE_REQUESTED event. This method returns \xe2\x80\x98""false\xe2\x80\x99 if the number of requested rounds is 0, the maximum number of salvos requests are currently active, or the weapon is reloading and it cannot shoot while reloading.\n//\n// Note A WEAPON_FIRED event will not trigger for Fire and FireSalvo unless a weapon_effects is defined either on the weapon or on the launched_platform_type.\n// void AbortSalvo(WsfTrackId aTrackId)\n// Abandons the launch of any rounds of a salvo request that have yet to be released. If aTrackId is a \xe2\x80\x98null\xe2\x80\x99 track (i.e., aTrackId.IsNull()) then the request will apply to all pending rounds; otherwise, it will apply only to salvo requests against the specified track.\n//\n// Note This does not affect rounds that have already been released.\n// void CeaseFire()\n// Stops all active fire requests including salvo requests. This is like \xe2\x80\x98""AbortSalvo(WsfTrackId())\xe2\x80\x99.\n//\n// int ActiveRequestCount()\n// Returns the number of fire/jam requests that are currently in process.\n//\n// int MaximumRequestCount()\n// Returns the maximum number of fire/jam requests than may be in process simultaneously.\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bool Fire(WsfTrack aTrack)\nFires the weapon with or without a current track. This method returns \xe2\x80\x98true\xe2\x80\x99 if a launch has been successfully scheduled. Some weapons may have a delay between the time when a fire command is issued and the actual time of launch. A successful weapon launch will trigger a WEAPON_FIRED event. This method returns \xe2\x80\x98""false\xe2\x80\x99 if a launch cannot be scheduled due to several reasons, such as, the weapon quantity is 0, the launch interval has not elapsed, the weapon is reloading and it cannot shoot while reloading, or the weapon is damaged. Additional checks at the time of launch may still result in a launch failure triggering a WEAPON_FIRE_ABORTED event.\n\nbool FireAtLocation(WsfGeoPoint aLocation)\nGenerates a track based on the location provided and then fires the weapon on the generated track. The track is stored in the master track list on the platform that owns the weapon. This method returns \xe2\x80\x98true\xe2\x80\x99 if a launch has been successfully scheduled. Some weapons may have a delay between the time when a fire command is issued and the actual time of launch. A successful weapon launch will trigger a WEAPON_FIRED event. This method returns \xe2\x80\x98""false\xe2\x80\x99 if a launch cannot be scheduled due to several reasons, such as, the weapon quantity is 0, the launch interval has not elapsed, the weapon is reloading and it cannot shoot while reloading, or the weapon is damaged. Additional checks at the time of launch may still result in a launch failure triggering a WEAPON_FIRE_ABORTED event.\n\nbool FireSalvo(WsfTrack aTrack, int aNumRounds)\nFires the weapon at the current track using the requested number of rounds. This method returns \xe2\x80\x98true\xe2\x80\x99 if salvo request was successfully initiated. A successful salvo request triggers a WEAPON_FIRE_REQUESTED event. This method returns \xe2\x80\x98""false\xe2\x80\x99 if the number of requested rounds is 0, the maximum number of salvos requests are currently active, or the weapon is reloading and it cannot shoot while reloading.\n\nNote A WEAPON_FIRED event will not trigger for Fire and FireSalvo unless a weapon_effects is defined either on the weapon or on the launched_platform_type.\nvoid AbortSalvo(WsfTrackId aTrackId)\nAbandons the launch of any rounds of a salvo request that have yet to be released. If aTrackId is a \xe2\x80\x98null\xe2\x80\x99 track (i.e., aTrackId.IsNull()) then the request will apply to all pending rounds; otherwise, it will apply only to salvo requests against the specified track.\n\nNote This does not affect rounds that have already been released.\nvoid CeaseFire()\nStops all active fire requests including salvo requests. This is like \xe2\x80\x98""AbortSalvo(WsfTrackId())\xe2\x80\x99.\n\nint ActiveRequestCount()\nReturns the number of fire/jam requests that are currently in process.\n\nint MaximumRequestCount()\nReturns the maximum number of fire/jam requests than may be in process simultaneously." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_num;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWsfWeapon_quantity_Statics::NewProp_num = { "num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfWeapon_eventquantity_Parms, num), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfWeapon_quantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfWeapon_eventquantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfWeapon_quantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfWeapon_quantity_Statics::NewProp_num,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfWeapon_quantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_quantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfWeapon_quantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfWeapon, nullptr, "quantity", nullptr, nullptr, Z_Construct_UFunction_UWsfWeapon_quantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_quantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfWeapon_quantity_Statics::WsfWeapon_eventquantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_quantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfWeapon_quantity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfWeapon_quantity_Statics::WsfWeapon_eventquantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfWeapon_quantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfWeapon_quantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfWeapon::execquantity)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_num);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->quantity(Z_Param_num);
	P_NATIVE_END;
}
// End Class UWsfWeapon Function quantity

// Begin Class UWsfWeapon Function QuantityRemaining
struct Z_Construct_UFunction_UWsfWeapon_QuantityRemaining_Statics
{
	struct WsfWeapon_eventQuantityRemaining_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfWeapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the number of weapons / jam requests remaining as a double precision value, so percentages can be used if desired.\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of weapons / jam requests remaining as a double precision value, so percentages can be used if desired." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UWsfWeapon_QuantityRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfWeapon_eventQuantityRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfWeapon_QuantityRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfWeapon_QuantityRemaining_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_QuantityRemaining_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfWeapon_QuantityRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfWeapon, nullptr, "QuantityRemaining", nullptr, nullptr, Z_Construct_UFunction_UWsfWeapon_QuantityRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_QuantityRemaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfWeapon_QuantityRemaining_Statics::WsfWeapon_eventQuantityRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_QuantityRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfWeapon_QuantityRemaining_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfWeapon_QuantityRemaining_Statics::WsfWeapon_eventQuantityRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfWeapon_QuantityRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfWeapon_QuantityRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfWeapon::execQuantityRemaining)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->QuantityRemaining();
	P_NATIVE_END;
}
// End Class UWsfWeapon Function QuantityRemaining

// Begin Class UWsfWeapon Function SetIncludeFile
struct Z_Construct_UFunction_UWsfWeapon_SetIncludeFile_Statics
{
	struct WsfWeapon_eventSetIncludeFile_Parms
	{
		FString FileName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfWeapon" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfWeapon_SetIncludeFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfWeapon_eventSetIncludeFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfWeapon_SetIncludeFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfWeapon_eventSetIncludeFile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfWeapon_SetIncludeFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfWeapon_SetIncludeFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfWeapon_SetIncludeFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_SetIncludeFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfWeapon_SetIncludeFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfWeapon, nullptr, "SetIncludeFile", nullptr, nullptr, Z_Construct_UFunction_UWsfWeapon_SetIncludeFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_SetIncludeFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfWeapon_SetIncludeFile_Statics::WsfWeapon_eventSetIncludeFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_SetIncludeFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfWeapon_SetIncludeFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfWeapon_SetIncludeFile_Statics::WsfWeapon_eventSetIncludeFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfWeapon_SetIncludeFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfWeapon_SetIncludeFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfWeapon::execSetIncludeFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SetIncludeFile(Z_Param_FileName);
	P_NATIVE_END;
}
// End Class UWsfWeapon Function SetIncludeFile

// Begin Class UWsfWeapon Function SetQuantityRemaining
struct Z_Construct_UFunction_UWsfWeapon_SetQuantityRemaining_Statics
{
	struct WsfWeapon_eventSetQuantityRemaining_Parms
	{
		double aQuantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfWeapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets the number of weapons remaining to the specified quantity.\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the number of weapons remaining to the specified quantity." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_aQuantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UWsfWeapon_SetQuantityRemaining_Statics::NewProp_aQuantity = { "aQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfWeapon_eventSetQuantityRemaining_Parms, aQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfWeapon_SetQuantityRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfWeapon_SetQuantityRemaining_Statics::NewProp_aQuantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_SetQuantityRemaining_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfWeapon_SetQuantityRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfWeapon, nullptr, "SetQuantityRemaining", nullptr, nullptr, Z_Construct_UFunction_UWsfWeapon_SetQuantityRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_SetQuantityRemaining_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfWeapon_SetQuantityRemaining_Statics::WsfWeapon_eventSetQuantityRemaining_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_SetQuantityRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfWeapon_SetQuantityRemaining_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfWeapon_SetQuantityRemaining_Statics::WsfWeapon_eventSetQuantityRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfWeapon_SetQuantityRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfWeapon_SetQuantityRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfWeapon::execSetQuantityRemaining)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_aQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetQuantityRemaining(Z_Param_aQuantity);
	P_NATIVE_END;
}
// End Class UWsfWeapon Function SetQuantityRemaining

// Begin Class UWsfWeapon Function SetString
struct Z_Construct_UFunction_UWsfWeapon_SetString_Statics
{
	struct WsfWeapon_eventSetString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfWeapon" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfWeapon_SetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfWeapon_eventSetString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfWeapon_SetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfWeapon_SetString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_SetString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfWeapon_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfWeapon, nullptr, "SetString", nullptr, nullptr, Z_Construct_UFunction_UWsfWeapon_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_SetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfWeapon_SetString_Statics::WsfWeapon_eventSetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_SetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfWeapon_SetString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfWeapon_SetString_Statics::WsfWeapon_eventSetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfWeapon_SetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfWeapon_SetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfWeapon::execSetString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SetString();
	P_NATIVE_END;
}
// End Class UWsfWeapon Function SetString

// Begin Class UWsfWeapon Function SetWeapon
struct Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics
{
	struct WsfWeapon_eventSetWeapon_Parms
	{
		EWeapon aWeapon;
		FString name;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfWeapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe5\x87\xbd\xe6\x95\xb0\n// UFUNCTION(BlueprintCallable, Category = \"WsfWeapon\")\n// bool IsValid() override;\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe5\x87\xbd\xe6\x95\xb0\n UFUNCTION(BlueprintCallable, Category = \"WsfWeapon\")\n bool IsValid() override;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_aWeapon_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_aWeapon;
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::NewProp_aWeapon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::NewProp_aWeapon = { "aWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfWeapon_eventSetWeapon_Parms, aWeapon), Z_Construct_UEnum_TaskPlan_EWeapon, METADATA_PARAMS(0, nullptr) }; // 1053230220
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfWeapon_eventSetWeapon_Parms, name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfWeapon_eventSetWeapon_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::NewProp_aWeapon_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::NewProp_aWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfWeapon, nullptr, "SetWeapon", nullptr, nullptr, Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::WsfWeapon_eventSetWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::WsfWeapon_eventSetWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfWeapon_SetWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfWeapon_SetWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfWeapon::execSetWeapon)
{
	P_GET_ENUM(EWeapon,Z_Param_aWeapon);
	P_GET_PROPERTY(FStrProperty,Z_Param_name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SetWeapon(EWeapon(Z_Param_aWeapon),Z_Param_name);
	P_NATIVE_END;
}
// End Class UWsfWeapon Function SetWeapon

// Begin Class UWsfWeapon
void UWsfWeapon::StaticRegisterNativesUWsfWeapon()
{
	UClass* Class = UWsfWeapon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CueToTarget", &UWsfWeapon::execCueToTarget },
		{ "Fire", &UWsfWeapon::execFire },
		{ "quantity", &UWsfWeapon::execquantity },
		{ "QuantityRemaining", &UWsfWeapon::execQuantityRemaining },
		{ "SetIncludeFile", &UWsfWeapon::execSetIncludeFile },
		{ "SetQuantityRemaining", &UWsfWeapon::execSetQuantityRemaining },
		{ "SetString", &UWsfWeapon::execSetString },
		{ "SetWeapon", &UWsfWeapon::execSetWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWsfWeapon);
UClass* Z_Construct_UClass_UWsfWeapon_NoRegister()
{
	return UWsfWeapon::StaticClass();
}
struct Z_Construct_UClass_UWsfWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlatformPart/Weapons/WsfWeapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfWeapon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWsfWeapon_CueToTarget, "CueToTarget" }, // 2106394697
		{ &Z_Construct_UFunction_UWsfWeapon_Fire, "Fire" }, // 1702467435
		{ &Z_Construct_UFunction_UWsfWeapon_quantity, "quantity" }, // 1617555355
		{ &Z_Construct_UFunction_UWsfWeapon_QuantityRemaining, "QuantityRemaining" }, // 402668336
		{ &Z_Construct_UFunction_UWsfWeapon_SetIncludeFile, "SetIncludeFile" }, // 2948052485
		{ &Z_Construct_UFunction_UWsfWeapon_SetQuantityRemaining, "SetQuantityRemaining" }, // 4102907364
		{ &Z_Construct_UFunction_UWsfWeapon_SetString, "SetString" }, // 1745278737
		{ &Z_Construct_UFunction_UWsfWeapon_SetWeapon, "SetWeapon" }, // 3572902162
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWsfWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWsfWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWsfArticulatedPart,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWsfWeapon_Statics::ClassParams = {
	&UWsfWeapon::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_UWsfWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWsfWeapon()
{
	if (!Z_Registration_Info_UClass_UWsfWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWsfWeapon.OuterSingleton, Z_Construct_UClass_UWsfWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWsfWeapon.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UWsfWeapon>()
{
	return UWsfWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWsfWeapon);
UWsfWeapon::~UWsfWeapon() {}
// End Class UWsfWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeapon_StaticEnum, TEXT("EWeapon"), &Z_Registration_Info_UEnum_EWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1053230220U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLaunchComputer::StaticStruct, Z_Construct_UScriptStruct_FLaunchComputer_Statics::NewStructOps, TEXT("LaunchComputer"), &Z_Registration_Info_UScriptStruct_LaunchComputer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchComputer), 2054540654U) },
		{ FFWeapon::StaticStruct, Z_Construct_UScriptStruct_FFWeapon_Statics::NewStructOps, TEXT("FWeapon"), &Z_Registration_Info_UScriptStruct_FWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFWeapon), 2392750026U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWsfWeapon, UWsfWeapon::StaticClass, TEXT("UWsfWeapon"), &Z_Registration_Info_UClass_UWsfWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWsfWeapon), 859800695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_1353323621(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfWeapon_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
