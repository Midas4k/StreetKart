// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "streetKart/Player/CarPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarPlayerController() {}
// Cross Module References
	STREETKART_API UClass* Z_Construct_UClass_ACarPlayerController_NoRegister();
	STREETKART_API UClass* Z_Construct_UClass_ACarPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_streetKart();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void ACarPlayerController::StaticRegisterNativesACarPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACarPlayerController);
	UClass* Z_Construct_UClass_ACarPlayerController_NoRegister()
	{
		return ACarPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACarPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActualLap_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ActualLap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLaps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxLaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActualRaceTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActualRaceTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActualLapTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActualLapTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GoldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SilverTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SilverTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BronzeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BronzeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BestLapTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BestLapTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BestRaceTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BestRaceTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBestLapTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultBestLapTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBestRaceTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultBestRaceTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RaceTimeText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_RaceTimeText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLapText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CurrentLapText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLapText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_MaxLapText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoldTimeText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_GoldTimeText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SilverTimeText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SilverTimeText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BronzeTimeText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_BronzeTimeText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BestTimeText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_BestTimeText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BestLapText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_BestLapText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameOfMap_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NameOfMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReadyText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReadyText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RaceComplete_MetaData[];
#endif
		static void NewProp_RaceComplete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RaceComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RaceStart_MetaData[];
#endif
		static void NewProp_RaceStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RaceStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RespawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RespawnLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACarPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_streetKart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/CarPlayerController.h" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ActualLap_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ActualLap = { "ActualLap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, ActualLap), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ActualLap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ActualLap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_MaxLaps_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_MaxLaps = { "MaxLaps", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, MaxLaps), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_MaxLaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_MaxLaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ActualRaceTime_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ActualRaceTime = { "ActualRaceTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, ActualRaceTime), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ActualRaceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ActualRaceTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ActualLapTime_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ActualLapTime = { "ActualLapTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, ActualLapTime), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ActualLapTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ActualLapTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_GoldTime_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_GoldTime = { "GoldTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, GoldTime), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_GoldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_GoldTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_SilverTime_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_SilverTime = { "SilverTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, SilverTime), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_SilverTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_SilverTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BronzeTime_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BronzeTime = { "BronzeTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, BronzeTime), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BronzeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BronzeTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestLapTime_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestLapTime = { "BestLapTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, BestLapTime), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestLapTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestLapTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestRaceTime_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestRaceTime = { "BestRaceTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, BestRaceTime), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestRaceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestRaceTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_DefaultBestLapTime_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_DefaultBestLapTime = { "DefaultBestLapTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, DefaultBestLapTime), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_DefaultBestLapTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_DefaultBestLapTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_DefaultBestRaceTime_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_DefaultBestRaceTime = { "DefaultBestRaceTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, DefaultBestRaceTime), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_DefaultBestRaceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_DefaultBestRaceTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceTimeText_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceTimeText = { "RaceTimeText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, RaceTimeText), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceTimeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceTimeText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_CurrentLapText_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_CurrentLapText = { "CurrentLapText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, CurrentLapText), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_CurrentLapText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_CurrentLapText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_MaxLapText_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_MaxLapText = { "MaxLapText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, MaxLapText), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_MaxLapText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_MaxLapText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_GoldTimeText_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_GoldTimeText = { "GoldTimeText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, GoldTimeText), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_GoldTimeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_GoldTimeText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_SilverTimeText_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_SilverTimeText = { "SilverTimeText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, SilverTimeText), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_SilverTimeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_SilverTimeText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BronzeTimeText_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BronzeTimeText = { "BronzeTimeText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, BronzeTimeText), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BronzeTimeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BronzeTimeText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestTimeText_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestTimeText = { "BestTimeText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, BestTimeText), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestTimeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestTimeText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestLapText_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestLapText = { "BestLapText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, BestLapText), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestLapText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestLapText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_NameOfMap_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_NameOfMap = { "NameOfMap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, NameOfMap), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_NameOfMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_NameOfMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ReadyText_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ReadyText = { "ReadyText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, ReadyText), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ReadyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ReadyText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceComplete_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceComplete_SetBit(void* Obj)
	{
		((ACarPlayerController*)Obj)->RaceComplete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceComplete = { "RaceComplete", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACarPlayerController), &Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceComplete_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceStart_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceStart_SetBit(void* Obj)
	{
		((ACarPlayerController*)Obj)->RaceStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceStart = { "RaceStart", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACarPlayerController), &Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RespawnLocation_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RespawnLocation = { "RespawnLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, RespawnLocation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RespawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RespawnLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarPlayerController_Statics::NewProp_SaveSlot_MetaData[] = {
		{ "Category", "CarPlayerController" },
		{ "ModuleRelativePath", "Player/CarPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACarPlayerController_Statics::NewProp_SaveSlot = { "SaveSlot", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarPlayerController, SaveSlot), METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_SaveSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::NewProp_SaveSlot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACarPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ActualLap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_MaxLaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ActualRaceTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ActualLapTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_GoldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_SilverTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BronzeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestLapTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestRaceTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_DefaultBestLapTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_DefaultBestRaceTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceTimeText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_CurrentLapText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_MaxLapText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_GoldTimeText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_SilverTimeText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BronzeTimeText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestTimeText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_BestLapText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_NameOfMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_ReadyText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RaceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_RespawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPlayerController_Statics::NewProp_SaveSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACarPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACarPlayerController_Statics::ClassParams = {
		&ACarPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACarPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACarPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACarPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACarPlayerController()
	{
		if (!Z_Registration_Info_UClass_ACarPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACarPlayerController.OuterSingleton, Z_Construct_UClass_ACarPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACarPlayerController.OuterSingleton;
	}
	template<> STREETKART_API UClass* StaticClass<ACarPlayerController>()
	{
		return ACarPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarPlayerController);
	struct Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Player_CarPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Player_CarPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACarPlayerController, ACarPlayerController::StaticClass, TEXT("ACarPlayerController"), &Z_Registration_Info_UClass_ACarPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACarPlayerController), 3536864431U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Player_CarPlayerController_h_1964443383(TEXT("/Script/streetKart"),
		Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Player_CarPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_streetKart_Source_streetKart_Player_CarPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
