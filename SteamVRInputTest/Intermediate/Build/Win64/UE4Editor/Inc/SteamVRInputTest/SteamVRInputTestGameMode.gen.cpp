// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamVRInputTest/SteamVRInputTestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVRInputTestGameMode() {}
// Cross Module References
	STEAMVRINPUTTEST_API UClass* Z_Construct_UClass_ASteamVRInputTestGameMode_NoRegister();
	STEAMVRINPUTTEST_API UClass* Z_Construct_UClass_ASteamVRInputTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SteamVRInputTest();
// End Cross Module References
	void ASteamVRInputTestGameMode::StaticRegisterNativesASteamVRInputTestGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASteamVRInputTestGameMode_NoRegister()
	{
		return ASteamVRInputTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASteamVRInputTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASteamVRInputTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteamVRInputTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SteamVRInputTestGameMode.h" },
		{ "ModuleRelativePath", "SteamVRInputTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASteamVRInputTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteamVRInputTestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASteamVRInputTestGameMode_Statics::ClassParams = {
		&ASteamVRInputTestGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ASteamVRInputTestGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASteamVRInputTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASteamVRInputTestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASteamVRInputTestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASteamVRInputTestGameMode, 2755006405);
	template<> STEAMVRINPUTTEST_API UClass* StaticClass<ASteamVRInputTestGameMode>()
	{
		return ASteamVRInputTestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASteamVRInputTestGameMode(Z_Construct_UClass_ASteamVRInputTestGameMode, &ASteamVRInputTestGameMode::StaticClass, TEXT("/Script/SteamVRInputTest"), TEXT("ASteamVRInputTestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASteamVRInputTestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
