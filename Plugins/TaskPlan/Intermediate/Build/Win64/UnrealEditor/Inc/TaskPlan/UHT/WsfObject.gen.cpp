// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaskPlan/WsfObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWsfObject() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfObject();
TASKPLAN_API UClass* Z_Construct_UClass_UWsfObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_TaskPlan();
// End Cross Module References

// Begin Class UWsfObject Function BaseType
struct Z_Construct_UFunction_UWsfObject_BaseType_Statics
{
	struct WsfObject_eventBaseType_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the object\xe2\x80\x99s base type as a string.\n//The base type of an object is the type from which the object derives.\n" },
#endif
		{ "ModuleRelativePath", "WsfObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the object\xe2\x80\x99s base type as a string.\nThe base type of an object is the type from which the object derives." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfObject_BaseType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfObject_eventBaseType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfObject_BaseType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfObject_BaseType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_BaseType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfObject_BaseType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfObject, nullptr, "BaseType", nullptr, nullptr, Z_Construct_UFunction_UWsfObject_BaseType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_BaseType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfObject_BaseType_Statics::WsfObject_eventBaseType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_BaseType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfObject_BaseType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfObject_BaseType_Statics::WsfObject_eventBaseType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfObject_BaseType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfObject_BaseType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfObject::execBaseType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->BaseType();
	P_NATIVE_END;
}
// End Class UWsfObject Function BaseType

// Begin Class UWsfObject Function IsA_TypeOf
struct Z_Construct_UFunction_UWsfObject_IsA_TypeOf_Statics
{
	struct WsfObject_eventIsA_TypeOf_Parms
	{
		FString aType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns true if aType is an ancestor of the object.\n" },
#endif
		{ "ModuleRelativePath", "WsfObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if aType is an ancestor of the object." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_aType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfObject_IsA_TypeOf_Statics::NewProp_aType = { "aType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfObject_eventIsA_TypeOf_Parms, aType), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWsfObject_IsA_TypeOf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WsfObject_eventIsA_TypeOf_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWsfObject_IsA_TypeOf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WsfObject_eventIsA_TypeOf_Parms), &Z_Construct_UFunction_UWsfObject_IsA_TypeOf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfObject_IsA_TypeOf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfObject_IsA_TypeOf_Statics::NewProp_aType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfObject_IsA_TypeOf_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_IsA_TypeOf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfObject_IsA_TypeOf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfObject, nullptr, "IsA_TypeOf", nullptr, nullptr, Z_Construct_UFunction_UWsfObject_IsA_TypeOf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_IsA_TypeOf_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfObject_IsA_TypeOf_Statics::WsfObject_eventIsA_TypeOf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_IsA_TypeOf_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfObject_IsA_TypeOf_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfObject_IsA_TypeOf_Statics::WsfObject_eventIsA_TypeOf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfObject_IsA_TypeOf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfObject_IsA_TypeOf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfObject::execIsA_TypeOf)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_aType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsA_TypeOf(Z_Param_aType);
	P_NATIVE_END;
}
// End Class UWsfObject Function IsA_TypeOf

// Begin Class UWsfObject Function IsValid
struct Z_Construct_UFunction_UWsfObject_IsValid_Statics
{
	struct WsfObject_eventIsValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns true if the object reference does indeed refer to a valid object.\n//Many methods may return \xe2\x80\x9cnull\xe2\x80\x99 references if the requested object does not exist\n//(e.g., PLATFORM.Sensor(\xe2\x80\x98radar-1\xe2\x80\x99) will return a \xe2\x80\x9cnull reference\xe2\x80\x99 if the platform does not have a sensor with the name \xe2\x80\x98radar-1\xe2\x80\x99).\n//This method allows you to test a reference to make sure it is \xe2\x80\x9cvalid\xe2\x80\x99 (not \xe2\x80\x9cnull\xe2\x80\x99) before attempting to use it.\n" },
#endif
		{ "ModuleRelativePath", "WsfObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the object reference does indeed refer to a valid object.\nMany methods may return \xe2\x80\x9cnull\xe2\x80\x99 references if the requested object does not exist\n(e.g., PLATFORM.Sensor(\xe2\x80\x98radar-1\xe2\x80\x99) will return a \xe2\x80\x9cnull reference\xe2\x80\x99 if the platform does not have a sensor with the name \xe2\x80\x98radar-1\xe2\x80\x99).\nThis method allows you to test a reference to make sure it is \xe2\x80\x9cvalid\xe2\x80\x99 (not \xe2\x80\x9cnull\xe2\x80\x99) before attempting to use it." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWsfObject_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WsfObject_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWsfObject_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WsfObject_eventIsValid_Parms), &Z_Construct_UFunction_UWsfObject_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfObject_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfObject_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfObject_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfObject, nullptr, "IsValid", nullptr, nullptr, Z_Construct_UFunction_UWsfObject_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfObject_IsValid_Statics::WsfObject_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfObject_IsValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfObject_IsValid_Statics::WsfObject_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfObject_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfObject_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfObject::execIsValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValid();
	P_NATIVE_END;
}
// End Class UWsfObject Function IsValid

// Begin Class UWsfObject Function Name
struct Z_Construct_UFunction_UWsfObject_Name_Statics
{
	struct WsfObject_eventName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the object\xe2\x80\x99s name as a string.\n" },
#endif
		{ "ModuleRelativePath", "WsfObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the object\xe2\x80\x99s name as a string." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfObject_Name_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfObject_eventName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfObject_Name_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfObject_Name_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_Name_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfObject_Name_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfObject, nullptr, "Name", nullptr, nullptr, Z_Construct_UFunction_UWsfObject_Name_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_Name_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfObject_Name_Statics::WsfObject_eventName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_Name_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfObject_Name_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfObject_Name_Statics::WsfObject_eventName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfObject_Name()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfObject_Name_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfObject::execName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->Name();
	P_NATIVE_END;
}
// End Class UWsfObject Function Name

// Begin Class UWsfObject Function ProcessInput
struct Z_Construct_UFunction_UWsfObject_ProcessInput_Statics
{
	struct WsfObject_eventProcessInput_Parms
	{
		FString aCommands;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Call ProcessInput on the current object passing the current command(s). Returns true if the command(s) were handled properly.\n//Warning This method may not work with all commands, especially post-initialization.\n" },
#endif
		{ "ModuleRelativePath", "WsfObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call ProcessInput on the current object passing the current command(s). Returns true if the command(s) were handled properly.\nWarning This method may not work with all commands, especially post-initialization." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_aCommands;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfObject_ProcessInput_Statics::NewProp_aCommands = { "aCommands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfObject_eventProcessInput_Parms, aCommands), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWsfObject_ProcessInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WsfObject_eventProcessInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWsfObject_ProcessInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WsfObject_eventProcessInput_Parms), &Z_Construct_UFunction_UWsfObject_ProcessInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfObject_ProcessInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfObject_ProcessInput_Statics::NewProp_aCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfObject_ProcessInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_ProcessInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfObject_ProcessInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfObject, nullptr, "ProcessInput", nullptr, nullptr, Z_Construct_UFunction_UWsfObject_ProcessInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_ProcessInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfObject_ProcessInput_Statics::WsfObject_eventProcessInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_ProcessInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfObject_ProcessInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfObject_ProcessInput_Statics::WsfObject_eventProcessInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfObject_ProcessInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfObject_ProcessInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfObject::execProcessInput)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_aCommands);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ProcessInput(Z_Param_aCommands);
	P_NATIVE_END;
}
// End Class UWsfObject Function ProcessInput

// Begin Class UWsfObject Function Type
struct Z_Construct_UFunction_UWsfObject_Type_Statics
{
	struct WsfObject_eventType_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WsfObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the object\xe2\x80\x99s type as a string.\n" },
#endif
		{ "ModuleRelativePath", "WsfObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the object\xe2\x80\x99s type as a string." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWsfObject_Type_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WsfObject_eventType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWsfObject_Type_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWsfObject_Type_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_Type_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWsfObject_Type_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWsfObject, nullptr, "Type", nullptr, nullptr, Z_Construct_UFunction_UWsfObject_Type_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_Type_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWsfObject_Type_Statics::WsfObject_eventType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWsfObject_Type_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWsfObject_Type_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWsfObject_Type_Statics::WsfObject_eventType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWsfObject_Type()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWsfObject_Type_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWsfObject::execType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->Type();
	P_NATIVE_END;
}
// End Class UWsfObject Function Type

// Begin Class UWsfObject
void UWsfObject::StaticRegisterNativesUWsfObject()
{
	UClass* Class = UWsfObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BaseType", &UWsfObject::execBaseType },
		{ "IsA_TypeOf", &UWsfObject::execIsA_TypeOf },
		{ "IsValid", &UWsfObject::execIsValid },
		{ "Name", &UWsfObject::execName },
		{ "ProcessInput", &UWsfObject::execProcessInput },
		{ "Type", &UWsfObject::execType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWsfObject);
UClass* Z_Construct_UClass_UWsfObject_NoRegister()
{
	return UWsfObject::StaticClass();
}
struct Z_Construct_UClass_UWsfObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WsfObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "WsfObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWsfObject_BaseType, "BaseType" }, // 2153797489
		{ &Z_Construct_UFunction_UWsfObject_IsA_TypeOf, "IsA_TypeOf" }, // 206553463
		{ &Z_Construct_UFunction_UWsfObject_IsValid, "IsValid" }, // 3303885806
		{ &Z_Construct_UFunction_UWsfObject_Name, "Name" }, // 21267221
		{ &Z_Construct_UFunction_UWsfObject_ProcessInput, "ProcessInput" }, // 1622034552
		{ &Z_Construct_UFunction_UWsfObject_Type, "Type" }, // 3662459493
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWsfObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWsfObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TaskPlan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWsfObject_Statics::ClassParams = {
	&UWsfObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWsfObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UWsfObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWsfObject()
{
	if (!Z_Registration_Info_UClass_UWsfObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWsfObject.OuterSingleton, Z_Construct_UClass_UWsfObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWsfObject.OuterSingleton;
}
template<> TASKPLAN_API UClass* StaticClass<UWsfObject>()
{
	return UWsfObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWsfObject);
UWsfObject::~UWsfObject() {}
// End Class UWsfObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_WsfObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWsfObject, UWsfObject::StaticClass, TEXT("UWsfObject"), &Z_Registration_Info_UClass_UWsfObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWsfObject), 3414793363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_WsfObject_h_1809497389(TEXT("/Script/TaskPlan"),
	Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_WsfObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RS250055_Plugins_TaskPlan_Source_TaskPlan_WsfObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
