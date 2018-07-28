// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "cppUE4HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecppUE4HUD() {}
// Cross Module References
	CPPUE4_API UClass* Z_Construct_UClass_AcppUE4HUD_NoRegister();
	CPPUE4_API UClass* Z_Construct_UClass_AcppUE4HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_cppUE4();
// End Cross Module References
	void AcppUE4HUD::StaticRegisterNativesAcppUE4HUD()
	{
	}
	UClass* Z_Construct_UClass_AcppUE4HUD_NoRegister()
	{
		return AcppUE4HUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AcppUE4HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_cppUE4,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "cppUE4HUD.h" },
				{ "ModuleRelativePath", "cppUE4HUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AcppUE4HUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AcppUE4HUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AcppUE4HUD, 2762383589);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AcppUE4HUD(Z_Construct_UClass_AcppUE4HUD, &AcppUE4HUD::StaticClass, TEXT("/Script/cppUE4"), TEXT("AcppUE4HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AcppUE4HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
