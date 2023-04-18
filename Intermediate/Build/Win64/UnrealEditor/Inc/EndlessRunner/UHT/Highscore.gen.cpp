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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
// End Cross Module References
	DEFINE_FUNCTION(UHighscore::execUpdateHighscoreFromLifespan)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHighscore::UpdateHighscoreFromLifespan(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UHighscore::StaticRegisterNativesUHighscore()
	{
		UClass* Class = UHighscore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateHighscoreFromLifespan", &UHighscore::execUpdateHighscoreFromLifespan },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHighscore_UpdateHighscoreFromLifespan_Statics
	{
		struct Highscore_eventUpdateHighscoreFromLifespan_Parms
		{
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHighscore_UpdateHighscoreFromLifespan_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Highscore_eventUpdateHighscoreFromLifespan_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHighscore_UpdateHighscoreFromLifespan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHighscore_UpdateHighscoreFromLifespan_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHighscore_UpdateHighscoreFromLifespan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Highscore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHighscore_UpdateHighscoreFromLifespan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHighscore, nullptr, "UpdateHighscoreFromLifespan", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHighscore_UpdateHighscoreFromLifespan_Statics::Highscore_eventUpdateHighscoreFromLifespan_Parms), Z_Construct_UFunction_UHighscore_UpdateHighscoreFromLifespan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighscore_UpdateHighscoreFromLifespan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHighscore_UpdateHighscoreFromLifespan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHighscore_UpdateHighscoreFromLifespan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHighscore_UpdateHighscoreFromLifespan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHighscore_UpdateHighscoreFromLifespan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHighscore);
	UClass* Z_Construct_UClass_UHighscore_NoRegister()
	{
		return UHighscore::StaticClass();
	}
	struct Z_Construct_UClass_UHighscore_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UHighscore_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHighscore_UpdateHighscoreFromLifespan, "UpdateHighscoreFromLifespan" }, // 3795820089
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UHighscore, UHighscore::StaticClass, TEXT("UHighscore"), &Z_Registration_Info_UClass_UHighscore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHighscore), 923604580U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_Highscore_h_1908530060(TEXT("/Script/EndlessRunner"),
		Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_Highscore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_Highscore_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
