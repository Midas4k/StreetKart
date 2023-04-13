// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "streetKart/CheckpointSystem/Checkpoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckpoint() {}
// Cross Module References
	STREETKART_API UClass* Z_Construct_UClass_ACheckpoint_NoRegister();
	STREETKART_API UClass* Z_Construct_UClass_ACheckpoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_streetKart();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACheckpoint::execCheckCollision)
	{
		P_GET_OBJECT(UObject,Z_Param_Actor);
		P_GET_OBJECT(UArrowComponent,Z_Param_ArrowComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ACheckpoint::CheckCollision(Z_Param_Actor,Z_Param_ArrowComp);
		P_NATIVE_END;
	}
	void ACheckpoint::StaticRegisterNativesACheckpoint()
	{
		UClass* Class = ACheckpoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckCollision", &ACheckpoint::execCheckCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics
	{
		struct Checkpoint_eventCheckCollision_Parms
		{
			const UObject* Actor;
			const UArrowComponent* ArrowComp;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComp;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Checkpoint_eventCheckCollision_Parms, Actor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::NewProp_ArrowComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::NewProp_ArrowComp = { "ArrowComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Checkpoint_eventCheckCollision_Parms, ArrowComp), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::NewProp_ArrowComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::NewProp_ArrowComp_MetaData)) };
	void Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Checkpoint_eventCheckCollision_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Checkpoint_eventCheckCollision_Parms), &Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::NewProp_ArrowComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CheckpointSystem/Checkpoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACheckpoint, nullptr, "CheckCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::Checkpoint_eventCheckCollision_Parms), Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACheckpoint_CheckCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACheckpoint_CheckCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACheckpoint);
	UClass* Z_Construct_UClass_ACheckpoint_NoRegister()
	{
		return ACheckpoint::StaticClass();
	}
	struct Z_Construct_UClass_ACheckpoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CheckpointNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPRootComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CPRootComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACheckpoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_streetKart,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACheckpoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACheckpoint_CheckCollision, "CheckCollision" }, // 4105941251
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckpoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CheckpointSystem/Checkpoint.h" },
		{ "ModuleRelativePath", "CheckpointSystem/Checkpoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckpoint_Statics::NewProp_CheckpointNumber_MetaData[] = {
		{ "Category", "Checkpoint" },
		{ "ModuleRelativePath", "CheckpointSystem/Checkpoint.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_CheckpointNumber = { "CheckpointNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckpoint, CheckpointNumber), METADATA_PARAMS(Z_Construct_UClass_ACheckpoint_Statics::NewProp_CheckpointNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::NewProp_CheckpointNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckpoint_Statics::NewProp_CPRootComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CheckpointSystem/Checkpoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_CPRootComponent = { "CPRootComponent", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckpoint, CPRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACheckpoint_Statics::NewProp_CPRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::NewProp_CPRootComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckpoint_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CheckpointSystem/Checkpoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckpoint, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACheckpoint_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::NewProp_ArrowComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckpoint_Statics::NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CheckpointSystem/Checkpoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckpoint, ParticleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACheckpoint_Statics::NewProp_ParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::NewProp_ParticleSystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACheckpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_CheckpointNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_CPRootComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_ArrowComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_ParticleSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACheckpoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACheckpoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACheckpoint_Statics::ClassParams = {
		&ACheckpoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACheckpoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACheckpoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACheckpoint()
	{
		if (!Z_Registration_Info_UClass_ACheckpoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACheckpoint.OuterSingleton, Z_Construct_UClass_ACheckpoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACheckpoint.OuterSingleton;
	}
	template<> STREETKART_API UClass* StaticClass<ACheckpoint>()
	{
		return ACheckpoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACheckpoint);
	struct Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_CheckpointSystem_Checkpoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_CheckpointSystem_Checkpoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACheckpoint, ACheckpoint::StaticClass, TEXT("ACheckpoint"), &Z_Registration_Info_UClass_ACheckpoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACheckpoint), 1983071821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_CheckpointSystem_Checkpoint_h_3896298460(TEXT("/Script/streetKart"),
		Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_CheckpointSystem_Checkpoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_CheckpointSystem_Checkpoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
