// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef P5K_P5KProjectile_generated_h
#error "P5KProjectile.generated.h already included, missing '#pragma once' in P5KProjectile.h"
#endif
#define P5K_P5KProjectile_generated_h

#define P5K_Source_P5K_P5KProjectile_h_12_SPARSE_DATA
#define P5K_Source_P5K_P5KProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define P5K_Source_P5K_P5KProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define P5K_Source_P5K_P5KProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAP5KProjectile(); \
	friend struct Z_Construct_UClass_AP5KProjectile_Statics; \
public: \
	DECLARE_CLASS(AP5KProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/P5K"), NO_API) \
	DECLARE_SERIALIZER(AP5KProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define P5K_Source_P5K_P5KProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAP5KProjectile(); \
	friend struct Z_Construct_UClass_AP5KProjectile_Statics; \
public: \
	DECLARE_CLASS(AP5KProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/P5K"), NO_API) \
	DECLARE_SERIALIZER(AP5KProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define P5K_Source_P5K_P5KProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AP5KProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AP5KProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AP5KProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AP5KProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AP5KProjectile(AP5KProjectile&&); \
	NO_API AP5KProjectile(const AP5KProjectile&); \
public:


#define P5K_Source_P5K_P5KProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AP5KProjectile(AP5KProjectile&&); \
	NO_API AP5KProjectile(const AP5KProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AP5KProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AP5KProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AP5KProjectile)


#define P5K_Source_P5K_P5KProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AP5KProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AP5KProjectile, ProjectileMovement); }


#define P5K_Source_P5K_P5KProjectile_h_9_PROLOG
#define P5K_Source_P5K_P5KProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	P5K_Source_P5K_P5KProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	P5K_Source_P5K_P5KProjectile_h_12_SPARSE_DATA \
	P5K_Source_P5K_P5KProjectile_h_12_RPC_WRAPPERS \
	P5K_Source_P5K_P5KProjectile_h_12_INCLASS \
	P5K_Source_P5K_P5KProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define P5K_Source_P5K_P5KProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	P5K_Source_P5K_P5KProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	P5K_Source_P5K_P5KProjectile_h_12_SPARSE_DATA \
	P5K_Source_P5K_P5KProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	P5K_Source_P5K_P5KProjectile_h_12_INCLASS_NO_PURE_DECLS \
	P5K_Source_P5K_P5KProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> P5K_API UClass* StaticClass<class AP5KProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID P5K_Source_P5K_P5KProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
