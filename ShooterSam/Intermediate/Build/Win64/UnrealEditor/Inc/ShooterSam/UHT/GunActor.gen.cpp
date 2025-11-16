// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gun/GunActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGunActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
SHOOTERSAM_API UClass* Z_Construct_UClass_AGunActor();
SHOOTERSAM_API UClass* Z_Construct_UClass_AGunActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShooterSam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGunActor ****************************************************************
void AGunActor::StaticRegisterNativesAGunActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGunActor;
UClass* AGunActor::GetPrivateStaticClass()
{
	using TClass = AGunActor;
	if (!Z_Registration_Info_UClass_AGunActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GunActor"),
			Z_Registration_Info_UClass_AGunActor.InnerSingleton,
			StaticRegisterNativesAGunActor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AGunActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AGunActor_NoRegister()
{
	return AGunActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGunActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Gun/GunActor.h" },
		{ "ModuleRelativePath", "Gun/GunActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GunMesh_MetaData[] = {
		{ "Category", "GunActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun/GunActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "GunActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun/GunActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "GunActor" },
		{ "ModuleRelativePath", "Gun/GunActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactParticleSystem_MetaData[] = {
		{ "Category", "GunActor" },
		{ "ModuleRelativePath", "Gun/GunActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlashParticleSystem_MetaData[] = {
		{ "Category", "GunActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun/GunActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletDamage_MetaData[] = {
		{ "Category", "GunActor" },
		{ "ModuleRelativePath", "Gun/GunActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GunMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactParticleSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlashParticleSystem;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunActor_Statics::NewProp_GunMesh = { "GunMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGunActor, GunMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GunMesh_MetaData), NewProp_GunMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGunActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGunActor_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGunActor, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunActor_Statics::NewProp_ImpactParticleSystem = { "ImpactParticleSystem", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGunActor, ImpactParticleSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactParticleSystem_MetaData), NewProp_ImpactParticleSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunActor_Statics::NewProp_MuzzleFlashParticleSystem = { "MuzzleFlashParticleSystem", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGunActor, MuzzleFlashParticleSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleFlashParticleSystem_MetaData), NewProp_MuzzleFlashParticleSystem_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGunActor_Statics::NewProp_BulletDamage = { "BulletDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGunActor, BulletDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletDamage_MetaData), NewProp_BulletDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGunActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunActor_Statics::NewProp_GunMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunActor_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunActor_Statics::NewProp_ImpactParticleSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunActor_Statics::NewProp_MuzzleFlashParticleSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunActor_Statics::NewProp_BulletDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGunActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGunActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterSam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGunActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGunActor_Statics::ClassParams = {
	&AGunActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGunActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGunActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGunActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGunActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGunActor()
{
	if (!Z_Registration_Info_UClass_AGunActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGunActor.OuterSingleton, Z_Construct_UClass_AGunActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGunActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGunActor);
AGunActor::~AGunActor() {}
// ********** End Class AGunActor ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_Gun_GunActor_h__Script_ShooterSam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGunActor, AGunActor::StaticClass, TEXT("AGunActor"), &Z_Registration_Info_UClass_AGunActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGunActor), 3234132607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_Gun_GunActor_h__Script_ShooterSam_3933124152(TEXT("/Script/ShooterSam"),
	Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_Gun_GunActor_h__Script_ShooterSam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_Gun_GunActor_h__Script_ShooterSam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
