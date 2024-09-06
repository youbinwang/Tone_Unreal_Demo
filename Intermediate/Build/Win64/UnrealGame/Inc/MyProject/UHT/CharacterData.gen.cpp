// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/LevelData/CharacterData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UCharacterData();
	MYPROJECT_API UClass* Z_Construct_UClass_UCharacterData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UCharacterData::StaticRegisterNativesUCharacterData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterData);
	UClass* Z_Construct_UClass_UCharacterData_NoRegister()
	{
		return UCharacterData::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletelMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletelMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AnimationAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelData/CharacterData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "LevelData/CharacterData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterData_Statics::NewProp_SkeletelMesh_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "LevelData/CharacterData.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCharacterData_Statics::NewProp_SkeletelMesh = { "SkeletelMesh", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterData, SkeletelMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterData_Statics::NewProp_SkeletelMesh_MetaData), Z_Construct_UClass_UCharacterData_Statics::NewProp_SkeletelMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterData_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "LevelData/CharacterData.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCharacterData_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterData, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterData_Statics::NewProp_Skeleton_MetaData), Z_Construct_UClass_UCharacterData_Statics::NewProp_Skeleton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterData_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "LevelData/CharacterData.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCharacterData_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterData, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterData_Statics::NewProp_PhysicsAsset_MetaData), Z_Construct_UClass_UCharacterData_Statics::NewProp_PhysicsAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterData_Statics::NewProp_AnimationAsset_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "LevelData/CharacterData.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCharacterData_Statics::NewProp_AnimationAsset = { "AnimationAsset", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterData, AnimationAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterData_Statics::NewProp_AnimationAsset_MetaData), Z_Construct_UClass_UCharacterData_Statics::NewProp_AnimationAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterData_Statics::NewProp_SkeletelMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterData_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterData_Statics::NewProp_PhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterData_Statics::NewProp_AnimationAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterData_Statics::ClassParams = {
		&UCharacterData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCharacterData()
	{
		if (!Z_Registration_Info_UClass_UCharacterData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterData.OuterSingleton, Z_Construct_UClass_UCharacterData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterData.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UCharacterData>()
	{
		return UCharacterData::StaticClass();
	}
	UCharacterData::UCharacterData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterData);
	UCharacterData::~UCharacterData() {}
	struct Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_LevelData_CharacterData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_LevelData_CharacterData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterData, UCharacterData::StaticClass, TEXT("UCharacterData"), &Z_Registration_Info_UClass_UCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterData), 244671880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_LevelData_CharacterData_h_1551047870(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_LevelData_CharacterData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_LevelData_CharacterData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
