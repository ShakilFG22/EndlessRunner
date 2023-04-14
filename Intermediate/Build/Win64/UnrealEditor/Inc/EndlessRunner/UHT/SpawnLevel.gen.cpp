// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/SpawnLevel.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnLevel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_ABaseLevel_NoRegister();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_ASpawnLevel();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_ASpawnLevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
// End Cross Module References
	DEFINE_FUNCTION(ASpawnLevel::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpawnLevel::execSpawnLevel)
	{
		P_GET_UBOOL(Z_Param_isFirst);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnLevel(Z_Param_isFirst);
		P_NATIVE_END;
	}
	void ASpawnLevel::StaticRegisterNativesASpawnLevel()
	{
		UClass* Class = ASpawnLevel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ASpawnLevel::execOnOverlapBegin },
			{ "SpawnLevel", &ASpawnLevel::execSpawnLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics
	{
		struct SpawnLevel_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpawnLevel_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpawnLevel_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpawnLevel_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpawnLevel_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SpawnLevel_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SpawnLevel_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpawnLevel_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpawnLevel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnLevel, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::SpawnLevel_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics
	{
		struct SpawnLevel_eventSpawnLevel_Parms
		{
			bool isFirst;
		};
		static void NewProp_isFirst_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isFirst;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::NewProp_isFirst_SetBit(void* Obj)
	{
		((SpawnLevel_eventSpawnLevel_Parms*)Obj)->isFirst = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::NewProp_isFirst = { "isFirst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SpawnLevel_eventSpawnLevel_Parms), &Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::NewProp_isFirst_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::NewProp_isFirst,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpawnLevel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnLevel, nullptr, "SpawnLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::SpawnLevel_eventSpawnLevel_Parms), Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawnLevel_SpawnLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnLevel_SpawnLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnLevel);
	UClass* Z_Construct_UClass_ASpawnLevel_NoRegister()
	{
		return ASpawnLevel::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level1_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Level1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level2_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Level2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level3_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Level3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level4_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Level4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level5_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Level5;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpawnLevel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnLevel_OnOverlapBegin, "OnOverlapBegin" }, // 1184530277
		{ &Z_Construct_UFunction_ASpawnLevel_SpawnLevel, "SpawnLevel" }, // 150824552
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLevel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnLevel.h" },
		{ "ModuleRelativePath", "SpawnLevel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level1_MetaData[] = {
		{ "Category", "SpawnLevel" },
		{ "ModuleRelativePath", "SpawnLevel.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level1 = { "Level1", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpawnLevel, Level1), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseLevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level2_MetaData[] = {
		{ "Category", "SpawnLevel" },
		{ "ModuleRelativePath", "SpawnLevel.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level2 = { "Level2", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpawnLevel, Level2), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseLevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level3_MetaData[] = {
		{ "Category", "SpawnLevel" },
		{ "ModuleRelativePath", "SpawnLevel.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level3 = { "Level3", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpawnLevel, Level3), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseLevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level4_MetaData[] = {
		{ "Category", "SpawnLevel" },
		{ "ModuleRelativePath", "SpawnLevel.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level4 = { "Level4", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpawnLevel, Level4), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseLevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level5_MetaData[] = {
		{ "Category", "SpawnLevel" },
		{ "ModuleRelativePath", "SpawnLevel.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level5 = { "Level5", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpawnLevel, Level5), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseLevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level5_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLevel_Statics::NewProp_Level5,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnLevel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnLevel_Statics::ClassParams = {
		&ASpawnLevel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpawnLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnLevel()
	{
		if (!Z_Registration_Info_UClass_ASpawnLevel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnLevel.OuterSingleton, Z_Construct_UClass_ASpawnLevel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpawnLevel.OuterSingleton;
	}
	template<> ENDLESSRUNNER_API UClass* StaticClass<ASpawnLevel>()
	{
		return ASpawnLevel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnLevel);
	ASpawnLevel::~ASpawnLevel() {}
	struct Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_SpawnLevel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_SpawnLevel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnLevel, ASpawnLevel::StaticClass, TEXT("ASpawnLevel"), &Z_Registration_Info_UClass_ASpawnLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnLevel), 421515589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_SpawnLevel_h_2045235480(TEXT("/Script/EndlessRunner"),
		Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_SpawnLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shakil_islam_OneDrive___Change_Maker_Education_Documents_Unreal_Projects_EndlessRunner_Source_EndlessRunner_SpawnLevel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
