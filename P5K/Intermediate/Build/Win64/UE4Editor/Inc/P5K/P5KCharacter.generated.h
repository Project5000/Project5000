// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef P5K_P5KCharacter_generated_h
#error "P5KCharacter.generated.h already included, missing '#pragma once' in P5KCharacter.h"
#endif
#define P5K_P5KCharacter_generated_h

#define P5K_Source_P5K_P5KCharacter_h_14_SPARSE_DATA
#define P5K_Source_P5K_P5KCharacter_h_14_RPC_WRAPPERS
#define P5K_Source_P5K_P5KCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define P5K_Source_P5K_P5KCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAP5KCharacter(); \
	friend struct Z_Construct_UClass_AP5KCharacter_Statics; \
public: \
	DECLARE_CLASS(AP5KCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/P5K"), NO_API) \
	DECLARE_SERIALIZER(AP5KCharacter)


#define P5K_Source_P5K_P5KCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAP5KCharacter(); \
	friend struct Z_Construct_UClass_AP5KCharacter_Statics; \
public: \
	DECLARE_CLASS(AP5KCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/P5K"), NO_API) \
	DECLARE_SERIALIZER(AP5KCharacter)


#define P5K_Source_P5K_P5KCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AP5KCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AP5KCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AP5KCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AP5KCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AP5KCharacter(AP5KCharacter&&); \
	NO_API AP5KCharacter(const AP5KCharacter&); \
public:


#define P5K_Source_P5K_P5KCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AP5KCharacter(AP5KCharacter&&); \
	NO_API AP5KCharacter(const AP5KCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AP5KCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AP5KCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AP5KCharacter)


#define P5K_Source_P5K_P5KCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AP5KCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AP5KCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AP5KCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AP5KCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AP5KCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AP5KCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AP5KCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AP5KCharacter, L_MotionController); }


#define P5K_Source_P5K_P5KCharacter_h_11_PROLOG
#define P5K_Source_P5K_P5KCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	P5K_Source_P5K_P5KCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	P5K_Source_P5K_P5KCharacter_h_14_SPARSE_DATA \
	P5K_Source_P5K_P5KCharacter_h_14_RPC_WRAPPERS \
	P5K_Source_P5K_P5KCharacter_h_14_INCLASS \
	P5K_Source_P5K_P5KCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define P5K_Source_P5K_P5KCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	P5K_Source_P5K_P5KCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	P5K_Source_P5K_P5KCharacter_h_14_SPARSE_DATA \
	P5K_Source_P5K_P5KCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	P5K_Source_P5K_P5KCharacter_h_14_INCLASS_NO_PURE_DECLS \
	P5K_Source_P5K_P5KCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> P5K_API UClass* StaticClass<class AP5KCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID P5K_Source_P5K_P5KCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
