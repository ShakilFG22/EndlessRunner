// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndlessRunner_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EndlessRunner;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EndlessRunner()
	{
		if (!Z_Registration_Info_UPackage__Script_EndlessRunner.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EndlessRunner",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x6360DC55,
				0x748182E6,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EndlessRunner.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EndlessRunner.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EndlessRunner(Z_Construct_UPackage__Script_EndlessRunner, TEXT("/Script/EndlessRunner"), Z_Registration_Info_UPackage__Script_EndlessRunner, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6360DC55, 0x748182E6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
