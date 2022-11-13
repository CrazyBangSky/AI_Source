// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBWPowerfulHit/Public/GBWPowerfulHitFuncLib.h"
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWGetSectionNameFromMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GBWPowerfulHitFuncLib_eventGBWGetSectionNameFromMontage_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "GBox|PowerfulHit|Animation" },
		{ "DisplayName", "GetSectionNameFromMontage" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGBWPowerfulHitFuncLib, nullptr, "GBWGetSectionNameFromMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::GBWPowerfulHitFuncLib_eventGBWGetSectionNameFromMontage_Parms), Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGBWPowerfulHitFuncLib);
	UClass* Z_Construct_UClass_UGBWPowerfulHitFuncLib_NoRegister()
	{
		return UGBWPowerfulHitFuncLib::StaticClass();
	}
	struct Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGBWPowerfulHitFuncLib_GBWGetSectionNameFromMontage, "GBWGetSectionNameFromMontage" }, // 4128930124
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GBWPowerfulHitFuncLib.h" },
		{ "ModuleRelativePath", "Public/GBWPowerfulHitFuncLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBWPowerfulHitFuncLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UGBWPowerfulHitFuncLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGBWPowerfulHitFuncLib.OuterSingleton, Z_Construct_UClass_UGBWPowerfulHitFuncLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGBWPowerfulHitFuncLib.OuterSingleton;
	}
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBWPowerfulHitFuncLib>()
	{
		return UGBWPowerfulHitFuncLib::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBWPowerfulHitFuncLib);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGBWPowerfulHitFuncLib, UGBWPowerfulHitFuncLib::StaticClass, TEXT("UGBWPowerfulHitFuncLib"), &Z_Registration_Info_UClass_UGBWPowerfulHitFuncLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGBWPowerfulHitFuncLib), 3992627553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_339015998(TEXT("/Script/GBWPowerfulHit"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GBWPowerfulHit_Source_GBWPowerfulHit_Public_GBWPowerfulHitFuncLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
