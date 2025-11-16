// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gun/GunActor.h"

#ifdef SHOOTERSAM_GunActor_generated_h
#error "GunActor.generated.h already included, missing '#pragma once' in GunActor.h"
#endif
#define SHOOTERSAM_GunActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGunActor ****************************************************************
SHOOTERSAM_API UClass* Z_Construct_UClass_AGunActor_NoRegister();

#define FID_ShooterSam_Source_ShooterSam_Gun_GunActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGunActor(); \
	friend struct Z_Construct_UClass_AGunActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHOOTERSAM_API UClass* Z_Construct_UClass_AGunActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AGunActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterSam"), Z_Construct_UClass_AGunActor_NoRegister) \
	DECLARE_SERIALIZER(AGunActor)


#define FID_ShooterSam_Source_ShooterSam_Gun_GunActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGunActor(AGunActor&&) = delete; \
	AGunActor(const AGunActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGunActor) \
	NO_API virtual ~AGunActor();


#define FID_ShooterSam_Source_ShooterSam_Gun_GunActor_h_13_PROLOG
#define FID_ShooterSam_Source_ShooterSam_Gun_GunActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShooterSam_Source_ShooterSam_Gun_GunActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_ShooterSam_Source_ShooterSam_Gun_GunActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGunActor;

// ********** End Class AGunActor ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShooterSam_Source_ShooterSam_Gun_GunActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
