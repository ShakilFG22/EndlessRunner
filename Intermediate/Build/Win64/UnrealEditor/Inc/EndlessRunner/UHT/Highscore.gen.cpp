// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/Highscore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHighscore() {}
// Cross Module References
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_UHighscore();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_UHighscore_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
// End Cross Module References
	void UHighscore::StaticRegisterNativesUHighscore()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHighscore);
	UClass* Z_Construct_UClass_UHighscore_NoRegister()
	{
		return UHighscore::StaticClass();
	}
	struct Z_Construct_UClass_UHighscore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHighscore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHighscore_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Highscore.h" },
		{ "ModuleRelativePath", "Highscore.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHighscore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHighscore>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHighscore_Statics::ClassParams = {
		&UHighscore::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHighscore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHighscore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHighscore()
	{
		if (!Z_Registration_Info_UClass_UHighscore.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHighscore.OuterSingleton, Z_Construct_UClass_UHighscore_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHighscore.OuterSingleton;
	}
	template<> ENDLESSRUNNER_API UClass* StaticClass<UHighscore>()
	{
		return UHighscore::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHighscore);
	UHighscore::~UHighscore() {}
	struct Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_Highscore_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_Highscore_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHighscore, UHighscore::StaticClass, TEXT("UHighscore"), &Z_Registration_Info_UClass_UHighscore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHighscore), 2548868812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_Highscore_h_759570087(TEXT("/Script/EndlessRunner"),
		Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_Highscore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_Highscore_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
