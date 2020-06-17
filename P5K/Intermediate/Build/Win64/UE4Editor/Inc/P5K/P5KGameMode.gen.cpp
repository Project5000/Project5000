// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P5K/P5KGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP5KGameMode() {}
// Cross Module References
	P5K_API UClass* Z_Construct_UClass_AP5KGameMode_NoRegister();
	P5K_API UClass* Z_Construct_UClass_AP5KGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_P5K();
// End Cross Module References
	void AP5KGameMode::StaticRegisterNativesAP5KGameMode()
	{
	}
	UClass* Z_Construct_UClass_AP5KGameMode_NoRegister()
	{
		return AP5KGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AP5KGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AP5KGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_P5K,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP5KGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "P5KGameMode.h" },
		{ "ModuleRelativePath", "P5KGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AP5KGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP5KGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AP5KGameMode_Statics::ClassParams = {
		&AP5KGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AP5KGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AP5KGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AP5KGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AP5KGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP5KGameMode, 2474927949);
	template<> P5K_API UClass* StaticClass<AP5KGameMode>()
	{
		return AP5KGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP5KGameMode(Z_Construct_UClass_AP5KGameMode, &AP5KGameMode::StaticClass, TEXT("/Script/P5K"), TEXT("AP5KGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP5KGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
