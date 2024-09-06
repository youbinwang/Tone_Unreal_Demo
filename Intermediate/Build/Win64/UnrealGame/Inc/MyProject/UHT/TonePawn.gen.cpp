// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/ToneScene/TonePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTonePawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ATonePawn();
	MYPROJECT_API UClass* Z_Construct_UClass_ATonePawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void ATonePawn::StaticRegisterNativesATonePawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATonePawn);
	UClass* Z_Construct_UClass_ATonePawn_NoRegister()
	{
		return ATonePawn::StaticClass();
	}
	struct Z_Construct_UClass_ATonePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATonePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATonePawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATonePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ToneScene/TonePawn.h" },
		{ "ModuleRelativePath", "ToneScene/TonePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATonePawn_Statics::NewProp_PlayerCameraController_MetaData[] = {
		{ "Category", "TonePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ToneScene/TonePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATonePawn_Statics::NewProp_PlayerCameraController = { "PlayerCameraController", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATonePawn, PlayerCameraController), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATonePawn_Statics::NewProp_PlayerCameraController_MetaData), Z_Construct_UClass_ATonePawn_Statics::NewProp_PlayerCameraController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATonePawn_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "Category", "TonePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ToneScene/TonePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATonePawn_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATonePawn, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATonePawn_Statics::NewProp_PlayerCamera_MetaData), Z_Construct_UClass_ATonePawn_Statics::NewProp_PlayerCamera_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATonePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATonePawn_Statics::NewProp_PlayerCameraController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATonePawn_Statics::NewProp_PlayerCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATonePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATonePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATonePawn_Statics::ClassParams = {
		&ATonePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATonePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATonePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATonePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ATonePawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATonePawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATonePawn()
	{
		if (!Z_Registration_Info_UClass_ATonePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATonePawn.OuterSingleton, Z_Construct_UClass_ATonePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATonePawn.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<ATonePawn>()
	{
		return ATonePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATonePawn);
	ATonePawn::~ATonePawn() {}
	struct Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneScene_TonePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneScene_TonePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATonePawn, ATonePawn::StaticClass, TEXT("ATonePawn"), &Z_Registration_Info_UClass_ATonePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATonePawn), 3599501006U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneScene_TonePawn_h_538336750(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneScene_TonePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneScene_TonePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
