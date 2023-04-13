// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STREETKART_CarPlayerController_generated_h
#error "CarPlayerController.generated.h already included, missing '#pragma once' in CarPlayerController.h"
#endif
#define STREETKART_CarPlayerController_generated_h

#define FID_streetKart_Source_streetKart_Player_CarPlayerController_h_15_SPARSE_DATA
#define FID_streetKart_Source_streetKart_Player_CarPlayerController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateGoals); \
	DECLARE_FUNCTION(execRaceTimeCheck); \
	DECLARE_FUNCTION(execLapTimeCheck); \
	DECLARE_FUNCTION(execLoadTheGame); \
	DECLARE_FUNCTION(execSaveTheGame); \
	DECLARE_FUNCTION(execSaveGameCheck); \
	DECLARE_FUNCTION(execInitText);


#define FID_streetKart_Source_streetKart_Player_CarPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateGoals); \
	DECLARE_FUNCTION(execRaceTimeCheck); \
	DECLARE_FUNCTION(execLapTimeCheck); \
	DECLARE_FUNCTION(execLoadTheGame); \
	DECLARE_FUNCTION(execSaveTheGame); \
	DECLARE_FUNCTION(execSaveGameCheck); \
	DECLARE_FUNCTION(execInitText);


#define FID_streetKart_Source_streetKart_Player_CarPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACarPlayerController(); \
	friend struct Z_Construct_UClass_ACarPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACarPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/streetKart"), NO_API) \
	DECLARE_SERIALIZER(ACarPlayerController)


#define FID_streetKart_Source_streetKart_Player_CarPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACarPlayerController(); \
	friend struct Z_Construct_UClass_ACarPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACarPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/streetKart"), NO_API) \
	DECLARE_SERIALIZER(ACarPlayerController)


#define FID_streetKart_Source_streetKart_Player_CarPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACarPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACarPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarPlayerController(ACarPlayerController&&); \
	NO_API ACarPlayerController(const ACarPlayerController&); \
public:


#define FID_streetKart_Source_streetKart_Player_CarPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarPlayerController(ACarPlayerController&&); \
	NO_API ACarPlayerController(const ACarPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACarPlayerController)


#define FID_streetKart_Source_streetKart_Player_CarPlayerController_h_12_PROLOG
#define FID_streetKart_Source_streetKart_Player_CarPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_streetKart_Source_streetKart_Player_CarPlayerController_h_15_SPARSE_DATA \
	FID_streetKart_Source_streetKart_Player_CarPlayerController_h_15_RPC_WRAPPERS \
	FID_streetKart_Source_streetKart_Player_CarPlayerController_h_15_INCLASS \
	FID_streetKart_Source_streetKart_Player_CarPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_streetKart_Source_streetKart_Player_CarPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_streetKart_Source_streetKart_Player_CarPlayerController_h_15_SPARSE_DATA \
	FID_streetKart_Source_streetKart_Player_CarPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_streetKart_Source_streetKart_Player_CarPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_streetKart_Source_streetKart_Player_CarPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STREETKART_API UClass* StaticClass<class ACarPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_streetKart_Source_streetKart_Player_CarPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
