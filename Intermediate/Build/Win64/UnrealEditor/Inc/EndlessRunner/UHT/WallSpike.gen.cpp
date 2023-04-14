// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/WallSpike.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWallSpike() {}
// Cross Module References
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_ASpikes();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AWallSpike();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AWallSpike_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
// End Cross Module References
	void AWallSpike::StaticRegisterNativesAWallSpike()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWallSpike);
	UClass* Z_Construct_UClass_AWallSpike_NoRegister()
	{
		return AWallSpike::StaticClass();
	}
	struct Z_Construct_UClass_AWallSpike_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWallSpike_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpikes,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWallSpike_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WallSpike.h" },
		{ "ModuleRelativePath", "WallSpike.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWallSpike_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWallSpike>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWallSpike_Statics::ClassParams = {
		&AWallSpike::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWallSpike_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWallSpike_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWallSpike()
	{
		if (!Z_Registration_Info_UClass_AWallSpike.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWallSpike.OuterSingleton, Z_Construct_UClass_AWallSpike_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWallSpike.OuterSingleton;
	}
	template<> ENDLESSRUNNER_API UClass* StaticClass<AWallSpike>()
	{
		return AWallSpike::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWallSpike);
	AWallSpike::~AWallSpike() {}
	struct Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_WallSpike_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_WallSpike_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWallSpike, AWallSpike::StaticClass, TEXT("AWallSpike"), &Z_Registration_Info_UClass_AWallSpike, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWallSpike), 1560336120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_WallSpike_h_2836563645(TEXT("/Script/EndlessRunner"),
		Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_WallSpike_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_WallSpike_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
