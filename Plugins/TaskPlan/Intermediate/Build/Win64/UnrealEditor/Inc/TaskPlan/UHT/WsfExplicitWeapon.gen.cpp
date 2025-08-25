// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/PlatformPart/Weapons/WsfExplicitWeapon.h"
#include "TaskPlan/PlatformPart/Weapons/WsfArticulatedPart.h"
#include "TaskPlan/PlatformPart/Weapons/WsfWeapon.h"
#include "TaskPlan/PlatformPart/WsfPlatformPart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWsfExplicitWeapon() {}

// Begin Cross Module References
TASKPLAN_API UClass* Z_Construct_UClass_UWsfExplicitWeapon();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfExplicitWeapon_NoRegister();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfWeapon();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFArticulatedPart();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFPlatformPart();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFWeapon();
TASKPLAN_API UScriptStruct* Z_Construct_UScriptStruct_FFWsfExplicitWeapon();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin ScriptStruct FFWsfExplicitWeapon
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWsfExplicitWeapon;
class UScriptStruct* FFWsfExplicitWeapon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWsfExplicitWeapon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWsfExplicitWeapon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFWsfExplicitWeapon, (UObject*)Z_Construct_UPackage__Script_TaskPlan(), TEXT("FWsfExplicitWeapon"));
	}
	return Z_Registration_Info_UScriptStruct_FWsfExplicitWeapon.OuterSingleton;
}
template<> TASKPLAN_API UScriptStruct* StaticStruct<FFWsfExplicitWeapon>()
{
	return FFWsfExplicitWeapon::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformPartCommands_MetaData[] = {
		{ "Category", "WSF_EXPLICIT_WEAPON" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArticulatedPartCommands_MetaData[] = {
		{ "Category", "WSF_EXPLICIT_WEAPON" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponCommands_MetaData[] = {
		{ "Category", "WSF_EXPLICIT_WEAPON" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_launched_platform_type_MetaData[] = {
		{ "Category", "WSF_EXPLICIT_WEAPON" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_launch_delta_v_MetaData[] = {
		{ "Category", "WSF_EXPLICIT_WEAPON" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ignore_launch_platform_velocity_MetaData[] = {
		{ "Category", "WSF_EXPLICIT_WEAPON" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_require_loft_angle_MetaData[] = {
		{ "Category", "WSF_EXPLICIT_WEAPON" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_require_intercept_point_MetaData[] = {
		{ "Category", "WSF_EXPLICIT_WEAPON" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_commander_MetaData[] = {
		{ "Category", "WSF_EXPLICIT_WEAPON" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_command_chain_MetaData[] = {
		{ "Category", "WSF_EXPLICIT_WEAPON" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dis_entity_id_offset_MetaData[] = {
		{ "Category", "WSF_EXPLICIT_WEAPON" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformPartCommands;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArticulatedPartCommands;
	static const UECodeGen_Private::FStructPropertyParams NewProp_weaponCommands;
	static const UECodeGen_Private::FIntPropertyParams NewProp_launched_platform_type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_launch_delta_v;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ignore_launch_platform_velocity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_require_loft_angle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_require_intercept_point;
	static const UECodeGen_Private::FIntPropertyParams NewProp_commander;
	static const UECodeGen_Private::FIntPropertyParams NewProp_command_chain;
	static const UECodeGen_Private::FIntPropertyParams NewProp_dis_entity_id_offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFWsfExplicitWeapon>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_PlatformPartCommands = { "PlatformPartCommands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfExplicitWeapon, PlatformPartCommands), Z_Construct_UScriptStruct_FFPlatformPart, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformPartCommands_MetaData), NewProp_PlatformPartCommands_MetaData) }; // 1482664585
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_ArticulatedPartCommands = { "ArticulatedPartCommands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfExplicitWeapon, ArticulatedPartCommands), Z_Construct_UScriptStruct_FFArticulatedPart, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArticulatedPartCommands_MetaData), NewProp_ArticulatedPartCommands_MetaData) }; // 126356560
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_weaponCommands = { "weaponCommands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfExplicitWeapon, weaponCommands), Z_Construct_UScriptStruct_FFWeapon, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponCommands_MetaData), NewProp_weaponCommands_MetaData) }; // 2392750026
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_launched_platform_type = { "launched_platform_type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfExplicitWeapon, launched_platform_type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_launched_platform_type_MetaData), NewProp_launched_platform_type_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_launch_delta_v = { "launch_delta_v", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfExplicitWeapon, launch_delta_v), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_launch_delta_v_MetaData), NewProp_launch_delta_v_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_ignore_launch_platform_velocity = { "ignore_launch_platform_velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfExplicitWeapon, ignore_launch_platform_velocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ignore_launch_platform_velocity_MetaData), NewProp_ignore_launch_platform_velocity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_require_loft_angle = { "require_loft_angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfExplicitWeapon, require_loft_angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_require_loft_angle_MetaData), NewProp_require_loft_angle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_require_intercept_point = { "require_intercept_point", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfExplicitWeapon, require_intercept_point), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_require_intercept_point_MetaData), NewProp_require_intercept_point_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_commander = { "commander", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfExplicitWeapon, commander), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_commander_MetaData), NewProp_commander_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_command_chain = { "command_chain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfExplicitWeapon, command_chain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_command_chain_MetaData), NewProp_command_chain_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_dis_entity_id_offset = { "dis_entity_id_offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFWsfExplicitWeapon, dis_entity_id_offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dis_entity_id_offset_MetaData), NewProp_dis_entity_id_offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_PlatformPartCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_ArticulatedPartCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_weaponCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_launched_platform_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_launch_delta_v,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_ignore_launch_platform_velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_require_loft_angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_require_intercept_point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_commander,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_command_chain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewProp_dis_entity_id_offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
	nullptr,
	&NewStructOps,
	"FWsfExplicitWeapon",
	Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::PropPointers),
	sizeof(FFWsfExplicitWeapon),
	alignof(FFWsfExplicitWeapon),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFWsfExplicitWeapon()
{
	if (!Z_Registration_Info_UScriptStruct_FWsfExplicitWeapon.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWsfExplicitWeapon.InnerSingleton, Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWsfExplicitWeapon.InnerSingleton;
}
// End ScriptStruct FFWsfExplicitWeapon

// Begin Class UWsfExplicitWeapon Function on_initialize
struct Z_Construct_UFunction_UWsfExplicitWeapon_on_initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WSF_EXPLICIT_WEAPON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Script Interface\n" },
#endif
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Script Interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfExplicitWeapon_on_initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfExplicitWeapon, nullptr, "on_initialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfExplicitWeapon_on_initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfExplicitWeapon_on_initialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWsfExplicitWeapon_on_initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfExplicitWeapon_on_initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfExplicitWeapon::execon_initialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->on_initialize();
	P_NATIVE_END;
}
// End Class UWsfExplicitWeapon Function on_initialize

// Begin Class UWsfExplicitWeapon Function on_initialize2
struct Z_Construct_UFunction_UWsfExplicitWeapon_on_initialize2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WSF_EXPLICIT_WEAPON" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfExplicitWeapon_on_initialize2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfExplicitWeapon, nullptr, "on_initialize2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfExplicitWeapon_on_initialize2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfExplicitWeapon_on_initialize2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWsfExplicitWeapon_on_initialize2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfExplicitWeapon_on_initialize2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfExplicitWeapon::execon_initialize2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->on_initialize2();
	P_NATIVE_END;
}
// End Class UWsfExplicitWeapon Function on_initialize2

// Begin Class UWsfExplicitWeapon Function on_update
struct Z_Construct_UFunction_UWsfExplicitWeapon_on_update_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WSF_EXPLICIT_WEAPON" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfExplicitWeapon_on_update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfExplicitWeapon, nullptr, "on_update", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfExplicitWeapon_on_update_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfExplicitWeapon_on_update_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWsfExplicitWeapon_on_update()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfExplicitWeapon_on_update_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfExplicitWeapon::execon_update)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->on_update();
	P_NATIVE_END;
}
// End Class UWsfExplicitWeapon Function on_update

// Begin Class UWsfExplicitWeapon
void UWsfExplicitWeapon::StaticRegisterNativesUWsfExplicitWeapon()
{
	UClass* Class = UWsfExplicitWeapon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "on_initialize", &UWsfExplicitWeapon::execon_initialize },
		{ "on_initialize2", &UWsfExplicitWeapon::execon_initialize2 },
		{ "on_update", &UWsfExplicitWeapon::execon_update },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWsfExplicitWeapon);
UClass* Z_Construct_UClass_UWsfExplicitWeapon_NoRegister()
{
	return UWsfExplicitWeapon::StaticClass();
}
struct Z_Construct_UClass_UWsfExplicitWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WsfExplicitWeaponParams_MetaData[] = {
		{ "Category", "WSF_EXPLICIT_WEAPON" },
		{ "ModuleRelativePath", "PlatformPart/Weapons/WsfExplicitWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WsfExplicitWeaponParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWsfExplicitWeapon_on_initialize, "on_initialize" }, // 2782731454
		{ &Z_Construct_UFunction_UWsfExplicitWeapon_on_initialize2, "on_initialize2" }, // 2453129272
		{ &Z_Construct_UFunction_UWsfExplicitWeapon_on_update, "on_update" }, // 1190590184
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWsfExplicitWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWsfExplicitWeapon_Statics::NewProp_WsfExplicitWeaponParams = { "WsfExplicitWeaponParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWsfExplicitWeapon, WsfExplicitWeaponParams), Z_Construct_UScriptStruct_FFWsfExplicitWeapon, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WsfExplicitWeaponParams_MetaData), NewProp_WsfExplicitWeaponParams_MetaData) }; // 110200905
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWsfExplicitWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWsfExplicitWeapon_Statics::NewProp_WsfExplicitWeaponParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfExplicitWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWsfExplicitWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWsfWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfExplicitWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWsfExplicitWeapon_Statics::ClassParams = {
	&UWsfExplicitWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWsfExplicitWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWsfExplicitWeapon_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfExplicitWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_UWsfExplicitWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWsfExplicitWeapon()
{
	if (!Z_Registration_Info_UClass_UWsfExplicitWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWsfExplicitWeapon.OuterSingleton, Z_Construct_UClass_UWsfExplicitWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWsfExplicitWeapon.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UWsfExplicitWeapon>()
{
	return UWsfExplicitWeapon::StaticClass();
}
UWsfExplicitWeapon::UWsfExplicitWeapon() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWsfExplicitWeapon);
UWsfExplicitWeapon::~UWsfExplicitWeapon() {}
// End Class UWsfExplicitWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfExplicitWeapon_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFWsfExplicitWeapon::StaticStruct, Z_Construct_UScriptStruct_FFWsfExplicitWeapon_Statics::NewStructOps, TEXT("FWsfExplicitWeapon"), &Z_Registration_Info_UScriptStruct_FWsfExplicitWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFWsfExplicitWeapon), 110200905U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWsfExplicitWeapon, UWsfExplicitWeapon::StaticClass, TEXT("UWsfExplicitWeapon"), &Z_Registration_Info_UClass_UWsfExplicitWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWsfExplicitWeapon), 1479982028U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfExplicitWeapon_h_190860968(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfExplicitWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfExplicitWeapon_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfExplicitWeapon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_PlatformPart_Weapons_WsfExplicitWeapon_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
