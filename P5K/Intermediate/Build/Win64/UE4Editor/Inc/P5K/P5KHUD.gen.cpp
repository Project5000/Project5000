// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P5K/P5KHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP5KHUD() {}
// Cross Module References
	P5K_API UClass* Z_Construct_UClass_AP5KHUD_NoRegister();
	P5K_API UClass* Z_Construct_UClass_AP5KHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_P5K();
// End Cross Module References
	void AP5KHUD::StaticRegisterNativesAP5KHUD()
	{
	}
	UClass* Z_Construct_UClass_AP5KHUD_NoRegister()
	{
		return AP5KHUD::StaticClass();
	}
	struct Z_Construct_UClass_AP5KHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AP5KHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_P5K,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP5KHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "P5KHUD.h" },
		{ "ModuleRelativePath", "P5KHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AP5KHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP5KHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AP5KHUD_Statics::ClassParams = {
		&AP5KHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AP5KHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AP5KHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AP5KHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AP5KHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP5KHUD, 3988252585);
	template<> P5K_API UClass* StaticClass<AP5KHUD>()
	{
		return AP5KHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP5KHUD(Z_Construct_UClass_AP5KHUD, &AP5KHUD::StaticClass, TEXT("/Script/P5K"), TEXT("AP5KHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP5KHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
