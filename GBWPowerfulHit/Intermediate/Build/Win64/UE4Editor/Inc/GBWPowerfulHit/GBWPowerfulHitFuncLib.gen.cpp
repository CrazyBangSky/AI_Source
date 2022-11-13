// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBWPowerfulHit/Public/GBWPowerfulHitFuncLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGBWPowerfulHitFuncLib() {}
// Cross Module References
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPowerfulHitFuncLib_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBWPowerfulHitFuncLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GBWPowerfulHit();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGBWPowerfulHitFuncLib::execGBWGetSectionNameFromMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UGBWPowerfulHitFuncLib::GBWGetSectionNameFromMontage(Z_Param_Montage);
		P_NATIVE_END;
	}
	void UGBWPowerfulHitFuncLib::StaticRegisterNativesUGBWPowerfulHitFuncLib()
	{
		UClass* Class = UGBWPowerfulHitFuncLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GBWGetSectionNameFromMontage", &UGBWPowerfulHitFuncLib::execGBWGetSectionNameFromMontage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics
	{
		struct GBWPowerfulHitFuncLib_eventGBWGetSectionNameFromMontage_Parms
		{
			UAnimMontage* Montage;
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWGetSectionNameFromMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWGetSectionNameFromMontage_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBox|PowerfulHit|Animation" },
		{ "DisplayName", "GetSectionNameFromMontage" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWGetSectionNameFromMontage", nullptr, nullptr, sizeof(GBWPowerfulHitFuncLib_eventGBWGetSectionNameFromMontage_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGBWPowerfulHitFuncLib_NoRegister()
	{
		return UGBWPowerfulHitFuncLib::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage, "GBWGetSectionNameFromMontage" }, // 1381210179
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GBWPowerfulHitFuncLib.h" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBWPowerfulHitFuncLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::ClassParams = {
		&UGBWPowerfulHitFuncLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBWPowerfulHitFuncLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGBWPowerfulHitFuncLib, 626686553);
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWPowerfulHitFuncLib>()
	{
		return UGBWPowerfulHitFuncLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGBWPowerfulHitFuncLib(Z_Construct_UClass_UGBWPowerfulHitFuncLib, &UGBWPowerfulHitFuncLib::StaticClass, TEXT("/Script/GBWPowerfulHit"), TEXT("UGBWPowerfulHitFuncLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPowerfulHitFuncLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
