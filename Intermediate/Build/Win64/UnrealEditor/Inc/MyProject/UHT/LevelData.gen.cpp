// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/LevelData/LevelData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UCharacterData_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ULevelData();
	MYPROJECT_API UClass* Z_Construct_UClass_ULevelData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void ULevelData::StaticRegisterNativesULevelData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelData);
	UClass* Z_Construct_UClass_ULevelData_NoRegister()
	{
		return ULevelData::StaticClass();
	}
	struct Z_Construct_UClass_ULevelData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelToLoad_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LevelToLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PrimaryCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A zone that can be selected by the user from the map screen */" },
#endif
		{ "IncludePath", "LevelData/LevelData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "LevelData/LevelData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A zone that can be selected by the user from the map screen" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the Level */" },
#endif
		{ "ModuleRelativePath", "LevelData/LevelData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the Level" },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULevelData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelData_Statics::NewProp_Name_MetaData), Z_Construct_UClass_ULevelData_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelData_Statics::NewProp_LevelToLoad_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Level that will be loaded when entering this zone */" },
#endif
		{ "ModuleRelativePath", "LevelData/LevelData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Level that will be loaded when entering this zone" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULevelData_Statics::NewProp_LevelToLoad = { "LevelToLoad", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelData, LevelToLoad), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelData_Statics::NewProp_LevelToLoad_MetaData), Z_Construct_UClass_ULevelData_Statics::NewProp_LevelToLoad_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelData_Statics::NewProp_PrimaryCharacter_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "LevelData/LevelData.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULevelData_Statics::NewProp_PrimaryCharacter = { "PrimaryCharacter", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelData, PrimaryCharacter), Z_Construct_UClass_UClass, Z_Construct_UClass_UCharacterData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelData_Statics::NewProp_PrimaryCharacter_MetaData), Z_Construct_UClass_ULevelData_Statics::NewProp_PrimaryCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelData_Statics::NewProp_SpawnPos_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "LevelData/LevelData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelData_Statics::NewProp_SpawnPos = { "SpawnPos", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelData, SpawnPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelData_Statics::NewProp_SpawnPos_MetaData), Z_Construct_UClass_ULevelData_Statics::NewProp_SpawnPos_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelData_Statics::NewProp_LevelToLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelData_Statics::NewProp_PrimaryCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelData_Statics::NewProp_SpawnPos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelData_Statics::ClassParams = {
		&ULevelData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelData_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULevelData()
	{
		if (!Z_Registration_Info_UClass_ULevelData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelData.OuterSingleton, Z_Construct_UClass_ULevelData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelData.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<ULevelData>()
	{
		return ULevelData::StaticClass();
	}
	ULevelData::ULevelData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelData);
	ULevelData::~ULevelData() {}
	struct Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_LevelData_LevelData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_LevelData_LevelData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelData, ULevelData::StaticClass, TEXT("ULevelData"), &Z_Registration_Info_UClass_ULevelData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelData), 1741858241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_LevelData_LevelData_h_3601023168(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_LevelData_LevelData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_LevelData_LevelData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
