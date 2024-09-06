// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/ToneBase/TonePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTonePlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ATonePlayerController();
	MYPROJECT_API UClass* Z_Construct_UClass_ATonePlayerController_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void ATonePlayerController::StaticRegisterNativesATonePlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATonePlayerController);
	UClass* Z_Construct_UClass_ATonePlayerController_NoRegister()
	{
		return ATonePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATonePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationClickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationClickAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveCameraVerticalAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveCameraVerticalAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveCameraHorizontalAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveCameraHorizontalAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveCameraDepthAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveCameraDepthAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateCameraAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotateCameraAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATonePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATonePlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATonePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ToneBase/TonePlayerController.h" },
		{ "ModuleRelativePath", "ToneBase/TonePlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATonePlayerController_Statics::NewProp_CameraSpeed_MetaData[] = {
		{ "Category", "TonePlayerController" },
		{ "ModuleRelativePath", "ToneBase/TonePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATonePlayerController_Statics::NewProp_CameraSpeed = { "CameraSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATonePlayerController, CameraSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATonePlayerController_Statics::NewProp_CameraSpeed_MetaData), Z_Construct_UClass_ATonePlayerController_Statics::NewProp_CameraSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATonePlayerController_Statics::NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ToneBase/TonePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATonePlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATonePlayerController, ShortPressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATonePlayerController_Statics::NewProp_ShortPressThreshold_MetaData), Z_Construct_UClass_ATonePlayerController_Statics::NewProp_ShortPressThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATonePlayerController_Statics::NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ToneBase/TonePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATonePlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATonePlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATonePlayerController_Statics::NewProp_FXCursor_MetaData), Z_Construct_UClass_ATonePlayerController_Statics::NewProp_FXCursor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATonePlayerController_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ToneBase/TonePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATonePlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATonePlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATonePlayerController_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_ATonePlayerController_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATonePlayerController_Statics::NewProp_SetDestinationClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ToneBase/TonePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATonePlayerController_Statics::NewProp_SetDestinationClickAction = { "SetDestinationClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATonePlayerController, SetDestinationClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATonePlayerController_Statics::NewProp_SetDestinationClickAction_MetaData), Z_Construct_UClass_ATonePlayerController_Statics::NewProp_SetDestinationClickAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATonePlayerController_Statics::NewProp_MoveCameraVerticalAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowPrivateAccess = \"true\"))\n// class UInputAction* SetDestinationTouchAction;\n" },
#endif
		{ "ModuleRelativePath", "ToneBase/TonePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowPrivateAccess = \"true\"))\nclass UInputAction* SetDestinationTouchAction;" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATonePlayerController_Statics::NewProp_MoveCameraVerticalAction = { "MoveCameraVerticalAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATonePlayerController, MoveCameraVerticalAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATonePlayerController_Statics::NewProp_MoveCameraVerticalAction_MetaData), Z_Construct_UClass_ATonePlayerController_Statics::NewProp_MoveCameraVerticalAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATonePlayerController_Statics::NewProp_MoveCameraHorizontalAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ToneBase/TonePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATonePlayerController_Statics::NewProp_MoveCameraHorizontalAction = { "MoveCameraHorizontalAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATonePlayerController, MoveCameraHorizontalAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATonePlayerController_Statics::NewProp_MoveCameraHorizontalAction_MetaData), Z_Construct_UClass_ATonePlayerController_Statics::NewProp_MoveCameraHorizontalAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATonePlayerController_Statics::NewProp_MoveCameraDepthAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ToneBase/TonePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATonePlayerController_Statics::NewProp_MoveCameraDepthAction = { "MoveCameraDepthAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATonePlayerController, MoveCameraDepthAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATonePlayerController_Statics::NewProp_MoveCameraDepthAction_MetaData), Z_Construct_UClass_ATonePlayerController_Statics::NewProp_MoveCameraDepthAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATonePlayerController_Statics::NewProp_RotateCameraAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ToneBase/TonePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATonePlayerController_Statics::NewProp_RotateCameraAction = { "RotateCameraAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATonePlayerController, RotateCameraAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATonePlayerController_Statics::NewProp_RotateCameraAction_MetaData), Z_Construct_UClass_ATonePlayerController_Statics::NewProp_RotateCameraAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATonePlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATonePlayerController_Statics::NewProp_CameraSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATonePlayerController_Statics::NewProp_ShortPressThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATonePlayerController_Statics::NewProp_FXCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATonePlayerController_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATonePlayerController_Statics::NewProp_SetDestinationClickAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATonePlayerController_Statics::NewProp_MoveCameraVerticalAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATonePlayerController_Statics::NewProp_MoveCameraHorizontalAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATonePlayerController_Statics::NewProp_MoveCameraDepthAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATonePlayerController_Statics::NewProp_RotateCameraAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATonePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATonePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATonePlayerController_Statics::ClassParams = {
		&ATonePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATonePlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATonePlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATonePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATonePlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATonePlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATonePlayerController()
	{
		if (!Z_Registration_Info_UClass_ATonePlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATonePlayerController.OuterSingleton, Z_Construct_UClass_ATonePlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATonePlayerController.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<ATonePlayerController>()
	{
		return ATonePlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATonePlayerController);
	ATonePlayerController::~ATonePlayerController() {}
	struct Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_TonePlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_TonePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATonePlayerController, ATonePlayerController::StaticClass, TEXT("ATonePlayerController"), &Z_Registration_Info_UClass_ATonePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATonePlayerController), 3511532922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_TonePlayerController_h_3610683704(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_TonePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_TonePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
