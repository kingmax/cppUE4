// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef CPPUE4_cppUE4Projectile_generated_h
#error "cppUE4Projectile.generated.h already included, missing '#pragma once' in cppUE4Projectile.h"
#endif
#define CPPUE4_cppUE4Projectile_generated_h

#define cppUE4_Source_cppUE4_cppUE4Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define cppUE4_Source_cppUE4_cppUE4Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define cppUE4_Source_cppUE4_cppUE4Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAcppUE4Projectile(); \
	friend CPPUE4_API class UClass* Z_Construct_UClass_AcppUE4Projectile(); \
public: \
	DECLARE_CLASS(AcppUE4Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/cppUE4"), NO_API) \
	DECLARE_SERIALIZER(AcppUE4Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define cppUE4_Source_cppUE4_cppUE4Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAcppUE4Projectile(); \
	friend CPPUE4_API class UClass* Z_Construct_UClass_AcppUE4Projectile(); \
public: \
	DECLARE_CLASS(AcppUE4Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/cppUE4"), NO_API) \
	DECLARE_SERIALIZER(AcppUE4Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define cppUE4_Source_cppUE4_cppUE4Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AcppUE4Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AcppUE4Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AcppUE4Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AcppUE4Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AcppUE4Projectile(AcppUE4Projectile&&); \
	NO_API AcppUE4Projectile(const AcppUE4Projectile&); \
public:


#define cppUE4_Source_cppUE4_cppUE4Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AcppUE4Projectile(AcppUE4Projectile&&); \
	NO_API AcppUE4Projectile(const AcppUE4Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AcppUE4Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AcppUE4Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AcppUE4Projectile)


#define cppUE4_Source_cppUE4_cppUE4Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AcppUE4Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AcppUE4Projectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(AcppUE4Projectile, ExplosionEffect); }


#define cppUE4_Source_cppUE4_cppUE4Projectile_h_12_PROLOG
#define cppUE4_Source_cppUE4_cppUE4Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	cppUE4_Source_cppUE4_cppUE4Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	cppUE4_Source_cppUE4_cppUE4Projectile_h_15_RPC_WRAPPERS \
	cppUE4_Source_cppUE4_cppUE4Projectile_h_15_INCLASS \
	cppUE4_Source_cppUE4_cppUE4Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define cppUE4_Source_cppUE4_cppUE4Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	cppUE4_Source_cppUE4_cppUE4Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	cppUE4_Source_cppUE4_cppUE4Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	cppUE4_Source_cppUE4_cppUE4Projectile_h_15_INCLASS_NO_PURE_DECLS \
	cppUE4_Source_cppUE4_cppUE4Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID cppUE4_Source_cppUE4_cppUE4Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
