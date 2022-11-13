// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GBWPowerfulHit/Public/GBW_TrailArrow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGBW_TrailArrow() {}
// Cross Module References
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBW_TrailArrow_NoRegister();
	GBWPOWERFULHIT_API UClass* Z_Construct_UClass_UGBW_TrailArrow();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent();
	UPackage* Z_Construct_UPackage__Script_GBWPowerfulHit();
// End Cross Module References
	void UGBW_TrailArrow::StaticRegisterNativesUGBW_TrailArrow()
	{
	}
	UClass* Z_Construct_UClass_UGBW_TrailArrow_NoRegister()
	{
		return UGBW_TrailArrow::StaticClass();
	}
	struct Z_Construct_UClass_UGBW_TrailArrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGBW_TrailArrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArrowComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GBWPowerfulHit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGBW_TrailArrow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Mobility VirtualTexture Trigger" },
		{ "IncludePath", "GBW_TrailArrow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GBW_TrailArrow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGBW_TrailArrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGBW_TrailArrow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGBW_TrailArrow_Statics::ClassParams = {
		&UGBW_TrailArrow::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGBW_TrailArrow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGBW_TrailArrow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGBW_TrailArrow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGBW_TrailArrow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGBW_TrailArrow, 2520155763);
	template<> GBWPOWERFULHIT_API UClass* StaticClass<UGBW_TrailArrow>()
	{
		return UGBW_TrailArrow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGBW_TrailArrow(Z_Construct_UClass_UGBW_TrailArrow, &UGBW_TrailArrow::StaticClass, TEXT("/Script/GBWPowerfulHit"), TEXT("UGBW_TrailArrow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGBW_TrailArrow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
