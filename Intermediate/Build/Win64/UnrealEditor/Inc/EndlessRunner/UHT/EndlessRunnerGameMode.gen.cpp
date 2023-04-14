// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/EndlessRunnerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndlessRunnerGameMode() {}
// Cross Module References
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AEndlessRunnerGameMode();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AEndlessRunnerGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
// End Cross Module References
	void AEndlessRunnerGameMode::StaticRegisterNativesAEndlessRunnerGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEndlessRunnerGameMode);
	UClass* Z_Construct_UClass_AEndlessRunnerGameMode_NoRegister()
	{
		return AEndlessRunnerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEndlessRunnerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEndlessRunnerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndlessRunnerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EndlessRunnerGameMode.h" },
		{ "ModuleRelativePath", "EndlessRunnerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEndlessRunnerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEndlessRunnerGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEndlessRunnerGameMode_Statics::ClassParams = {
		&AEndlessRunnerGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEndlessRunnerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEndlessRunnerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEndlessRunnerGameMode()
	{
		if (!Z_Registration_Info_UClass_AEndlessRunnerGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEndlessRunnerGameMode.OuterSingleton, Z_Construct_UClass_AEndlessRunnerGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEndlessRunnerGameMode.OuterSingleton;
	}
	template<> ENDLESSRUNNER_API UClass* StaticClass<AEndlessRunnerGameMode>()
	{
		return AEndlessRunnerGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEndlessRunnerGameMode);
	AEndlessRunnerGameMode::~AEndlessRunnerGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_EndlessRunnerGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_EndlessRunnerGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEndlessRunnerGameMode, AEndlessRunnerGameMode::StaticClass, TEXT("AEndlessRunnerGameMode"), &Z_Registration_Info_UClass_AEndlessRunnerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEndlessRunnerGameMode), 2088657757U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_EndlessRunnerGameMode_h_1147009389(TEXT("/Script/EndlessRunner"),
		Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_EndlessRunnerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_EndlessRunnerGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
