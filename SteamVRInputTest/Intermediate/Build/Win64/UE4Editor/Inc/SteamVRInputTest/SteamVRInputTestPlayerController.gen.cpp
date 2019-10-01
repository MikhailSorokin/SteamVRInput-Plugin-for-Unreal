// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamVRInputTest/SteamVRInputTestPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVRInputTestPlayerController() {}
// Cross Module References
	STEAMVRINPUTTEST_API UClass* Z_Construct_UClass_ASteamVRInputTestPlayerController_NoRegister();
	STEAMVRINPUTTEST_API UClass* Z_Construct_UClass_ASteamVRInputTestPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_SteamVRInputTest();
// End Cross Module References
	void ASteamVRInputTestPlayerController::StaticRegisterNativesASteamVRInputTestPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ASteamVRInputTestPlayerController_NoRegister()
	{
		return ASteamVRInputTestPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASteamVRInputTestPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASteamVRInputTestPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteamVRInputTestPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SteamVRInputTestPlayerController.h" },
		{ "ModuleRelativePath", "SteamVRInputTestPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASteamVRInputTestPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteamVRInputTestPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASteamVRInputTestPlayerController_Statics::ClassParams = {
		&ASteamVRInputTestPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASteamVRInputTestPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASteamVRInputTestPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASteamVRInputTestPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASteamVRInputTestPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASteamVRInputTestPlayerController, 2840505842);
	template<> STEAMVRINPUTTEST_API UClass* StaticClass<ASteamVRInputTestPlayerController>()
	{
		return ASteamVRInputTestPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASteamVRInputTestPlayerController(Z_Construct_UClass_ASteamVRInputTestPlayerController, &ASteamVRInputTestPlayerController::StaticClass, TEXT("/Script/SteamVRInputTest"), TEXT("ASteamVRInputTestPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASteamVRInputTestPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
