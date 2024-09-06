// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/ToneScene/ToneCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToneCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace1D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AToneCharacter();
	MYPROJECT_API UClass* Z_Construct_UClass_AToneCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AToneCharacter::StaticRegisterNativesAToneCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AToneCharacter);
	UClass* Z_Construct_UClass_AToneCharacter_NoRegister()
	{
		return AToneCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AToneCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AToneCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToneCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToneCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ToneScene/ToneCharacter.h" },
		{ "ModuleRelativePath", "ToneScene/ToneCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToneCharacter_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "Category", "ToneCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FORCEINLINE class USpringArmComponent* GetCameraBoom() const {return CameraBoom; }\n" },
#endif
		{ "ModuleRelativePath", "ToneScene/ToneCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FORCEINLINE class USpringArmComponent* GetCameraBoom() const {return CameraBoom; }" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AToneCharacter_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0010000002000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AToneCharacter, BlendSpace), Z_Construct_UClass_UBlendSpace1D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToneCharacter_Statics::NewProp_BlendSpace_MetaData), Z_Construct_UClass_AToneCharacter_Statics::NewProp_BlendSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToneCharacter_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "ToneCharacter" },
		{ "ModuleRelativePath", "ToneScene/ToneCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AToneCharacter_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000002000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AToneCharacter, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToneCharacter_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_AToneCharacter_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToneCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CAMERA_ZOOM_DAMPEN" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY(EditDefaultsOnly)\n// UAnimSequence* IdleAnim;\n//\n// UPROPERTY(EditDefaultsOnly)\n// UAnimSequence* RunAnim;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ToneScene/ToneCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly)\nUAnimSequence* IdleAnim;\n\nUPROPERTY(EditDefaultsOnly)\nUAnimSequence* RunAnim;" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AToneCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AToneCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToneCharacter_Statics::NewProp_TopDownCameraComponent_MetaData), Z_Construct_UClass_AToneCharacter_Statics::NewProp_TopDownCameraComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AToneCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToneCharacter_Statics::NewProp_BlendSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToneCharacter_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToneCharacter_Statics::NewProp_TopDownCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AToneCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToneCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AToneCharacter_Statics::ClassParams = {
		&AToneCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AToneCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AToneCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToneCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AToneCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToneCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AToneCharacter()
	{
		if (!Z_Registration_Info_UClass_AToneCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AToneCharacter.OuterSingleton, Z_Construct_UClass_AToneCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AToneCharacter.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AToneCharacter>()
	{
		return AToneCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AToneCharacter);
	AToneCharacter::~AToneCharacter() {}
	struct Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneScene_ToneCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneScene_ToneCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AToneCharacter, AToneCharacter::StaticClass, TEXT("AToneCharacter"), &Z_Registration_Info_UClass_AToneCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AToneCharacter), 1253505892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneScene_ToneCharacter_h_94863479(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneScene_ToneCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneScene_ToneCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
