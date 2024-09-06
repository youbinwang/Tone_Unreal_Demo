// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/ToneGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToneGameModeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MYPROJECT_API UClass* Z_Construct_UClass_AToneCharacter_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AToneGameModeBase();
	MYPROJECT_API UClass* Z_Construct_UClass_AToneGameModeBase_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ATonePawn_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ATonePlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AToneGameModeBase::StaticRegisterNativesAToneGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AToneGameModeBase);
	UClass* Z_Construct_UClass_AToneGameModeBase_NoRegister()
	{
		return AToneGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AToneGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCharacterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CustomCharacterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CustomPawnClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomController_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CustomController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AToneGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToneGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToneGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ToneGameModeBase.h" },
		{ "ModuleRelativePath", "ToneGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToneGameModeBase_Statics::NewProp_CustomCharacterClass_MetaData[] = {
		{ "Category", "ToneGameModeBase" },
		{ "ModuleRelativePath", "ToneGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AToneGameModeBase_Statics::NewProp_CustomCharacterClass = { "CustomCharacterClass", nullptr, (EPropertyFlags)0x0044000002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AToneGameModeBase, CustomCharacterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AToneCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToneGameModeBase_Statics::NewProp_CustomCharacterClass_MetaData), Z_Construct_UClass_AToneGameModeBase_Statics::NewProp_CustomCharacterClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToneGameModeBase_Statics::NewProp_CustomPawnClass_MetaData[] = {
		{ "Category", "ToneGameModeBase" },
		{ "ModuleRelativePath", "ToneGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AToneGameModeBase_Statics::NewProp_CustomPawnClass = { "CustomPawnClass", nullptr, (EPropertyFlags)0x0044000002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AToneGameModeBase, CustomPawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATonePawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToneGameModeBase_Statics::NewProp_CustomPawnClass_MetaData), Z_Construct_UClass_AToneGameModeBase_Statics::NewProp_CustomPawnClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToneGameModeBase_Statics::NewProp_CustomController_MetaData[] = {
		{ "Category", "ToneGameModeBase" },
		{ "ModuleRelativePath", "ToneGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AToneGameModeBase_Statics::NewProp_CustomController = { "CustomController", nullptr, (EPropertyFlags)0x0044000002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AToneGameModeBase, CustomController), Z_Construct_UClass_UClass, Z_Construct_UClass_ATonePlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToneGameModeBase_Statics::NewProp_CustomController_MetaData), Z_Construct_UClass_AToneGameModeBase_Statics::NewProp_CustomController_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AToneGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToneGameModeBase_Statics::NewProp_CustomCharacterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToneGameModeBase_Statics::NewProp_CustomPawnClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToneGameModeBase_Statics::NewProp_CustomController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AToneGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToneGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AToneGameModeBase_Statics::ClassParams = {
		&AToneGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AToneGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AToneGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToneGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AToneGameModeBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToneGameModeBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AToneGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AToneGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AToneGameModeBase.OuterSingleton, Z_Construct_UClass_AToneGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AToneGameModeBase.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AToneGameModeBase>()
	{
		return AToneGameModeBase::StaticClass();
	}
	AToneGameModeBase::AToneGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AToneGameModeBase);
	AToneGameModeBase::~AToneGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AToneGameModeBase, AToneGameModeBase::StaticClass, TEXT("AToneGameModeBase"), &Z_Registration_Info_UClass_AToneGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AToneGameModeBase), 2616564745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneGameModeBase_h_3503547187(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
