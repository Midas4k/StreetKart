// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STREETKART_MasterVehicle_generated_h
#error "MasterVehicle.generated.h already included, missing '#pragma once' in MasterVehicle.h"
#endif
#define STREETKART_MasterVehicle_generated_h

#define FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSuspensionStruct_Statics; \
	STREETKART_API static class UScriptStruct* StaticStruct();


template<> STREETKART_API UScriptStruct* StaticStruct<struct FSuspensionStruct>();

#define FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWheelStruct_Statics; \
	STREETKART_API static class UScriptStruct* StaticStruct();


template<> STREETKART_API UScriptStruct* StaticStruct<struct FWheelStruct>();

#define FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEngineStruct_Statics; \
	STREETKART_API static class UScriptStruct* StaticStruct();


template<> STREETKART_API UScriptStruct* StaticStruct<struct FEngineStruct>();

#define FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_53_SPARSE_DATA
#define FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_53_RPC_WRAPPERS
#define FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_53_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMasterVehicle(); \
	friend struct Z_Construct_UClass_AMasterVehicle_Statics; \
public: \
	DECLARE_CLASS(AMasterVehicle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/streetKart"), NO_API) \
	DECLARE_SERIALIZER(AMasterVehicle)


#define FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_53_INCLASS \
private: \
	static void StaticRegisterNativesAMasterVehicle(); \
	friend struct Z_Construct_UClass_AMasterVehicle_Statics; \
public: \
	DECLARE_CLASS(AMasterVehicle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/streetKart"), NO_API) \
	DECLARE_SERIALIZER(AMasterVehicle)


#define FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMasterVehicle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMasterVehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasterVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasterVehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasterVehicle(AMasterVehicle&&); \
	NO_API AMasterVehicle(const AMasterVehicle&); \
public:


#define FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMasterVehicle(AMasterVehicle&&); \
	NO_API AMasterVehicle(const AMasterVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMasterVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMasterVehicle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMasterVehicle)


#define FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_50_PROLOG
#define FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_53_SPARSE_DATA \
	FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_53_RPC_WRAPPERS \
	FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_53_INCLASS \
	FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_53_SPARSE_DATA \
	FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_53_INCLASS_NO_PURE_DECLS \
	FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STREETKART_API UClass* StaticClass<class AMasterVehicle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_streetKart_Source_streetKart_Vehicles_MasterVehicle_h


#define FOREACH_ENUM_EDRIVETYPE_ENUM(op) \
	op(FWD) \
	op(RWD) \
	op(AWD) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
