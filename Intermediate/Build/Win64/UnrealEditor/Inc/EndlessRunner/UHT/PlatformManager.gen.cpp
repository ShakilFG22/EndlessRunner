// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/PlatformManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_UPlatformManager();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_UPlatformManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
// End Cross Module References
	DEFINE_FUNCTION(UPlatformManager::execRemovePlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformManager::execSpawnPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnPlatform();
		P_NATIVE_END;
	}
	void UPlatformManager::StaticRegisterNativesUPlatformManager()
	{
		UClass* Class = UPlatformManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemovePlatform", &UPlatformManager::execRemovePlatform },
			{ "SpawnPlatform", &UPlatformManager::execSpawnPlatform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlatformManager_RemovePlatform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformManager_RemovePlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "PlatformManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformManager_RemovePlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformManager, nullptr, "RemovePlatform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformManager_RemovePlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformManager_RemovePlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformManager_RemovePlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformManager_RemovePlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformManager_SpawnPlatform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformManager_SpawnPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "PlatformManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformManager_SpawnPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformManager, nullptr, "SpawnPlatform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformManager_SpawnPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformManager_SpawnPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformManager_SpawnPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformManager_SpawnPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformManager);
	UClass* Z_Construct_UClass_UPlatformManager_NoRegister()
	{
		return UPlatformManager::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlatformClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlatformManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlatformManager_RemovePlatform, "RemovePlatform" }, // 3583216929
		{ &Z_Construct_UFunction_UPlatformManager_SpawnPlatform, "SpawnPlatform" }, // 3425098695
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "PlatformManager.h" },
		{ "ModuleRelativePath", "PlatformManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformManager_Statics::NewProp_PlatformClass_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "PlatformManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlatformManager_Statics::NewProp_PlatformClass = { "PlatformClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformManager, PlatformClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlatformManager_Statics::NewProp_PlatformClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformManager_Statics::NewProp_PlatformClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformManager_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "PlatformManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlatformManager_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformManager, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPlatformManager_Statics::NewProp_SpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformManager_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformManager_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "PlatformManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlatformManager_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformManager, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UPlatformManager_Statics::NewProp_SpawnRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformManager_Statics::NewProp_SpawnRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformManager_Statics::NewProp_PlatformClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformManager_Statics::NewProp_SpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformManager_Statics::NewProp_SpawnRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformManager_Statics::ClassParams = {
		&UPlatformManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlatformManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformManager_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlatformManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformManager()
	{
		if (!Z_Registration_Info_UClass_UPlatformManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformManager.OuterSingleton, Z_Construct_UClass_UPlatformManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlatformManager.OuterSingleton;
	}
	template<> ENDLESSRUNNER_API UClass* StaticClass<UPlatformManager>()
	{
		return UPlatformManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformManager);
	UPlatformManager::~UPlatformManager() {}
	struct Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_PlatformManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_PlatformManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformManager, UPlatformManager::StaticClass, TEXT("UPlatformManager"), &Z_Registration_Info_UClass_UPlatformManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformManager), 96402121U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_PlatformManager_h_1606327014(TEXT("/Script/EndlessRunner"),
		Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_PlatformManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_PlatformManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
