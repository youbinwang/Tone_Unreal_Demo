// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/ToneBase/ToneAnimation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToneAnimation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MYPROJECT_API UClass* Z_Construct_UClass_UToneAnimation();
	MYPROJECT_API UClass* Z_Construct_UClass_UToneAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(UToneAnimation::execImportAnimation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SourcePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_SkeletonPath);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutInfoMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=UToneAnimation::ImportAnimation(Z_Param_SourcePath,Z_Param_DestinationPath,Z_Param_SkeletonPath,Z_Param_Out_bOutSuccess,Z_Param_Out_OutInfoMessage);
		P_NATIVE_END;
	}
	void UToneAnimation::StaticRegisterNativesUToneAnimation()
	{
		UClass* Class = UToneAnimation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ImportAnimation", &UToneAnimation::execImportAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics
	{
		struct ToneAnimation_eventImportAnimation_Parms
		{
			FString SourcePath;
			FString DestinationPath;
			FString SkeletonPath;
			bool bOutSuccess;
			FString OutInfoMessage;
			UAnimSequence* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SkeletonPath;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutInfoMessage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToneAnimation_eventImportAnimation_Parms, SourcePath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::NewProp_DestinationPath = { "DestinationPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToneAnimation_eventImportAnimation_Parms, DestinationPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::NewProp_SkeletonPath = { "SkeletonPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToneAnimation_eventImportAnimation_Parms, SkeletonPath), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((ToneAnimation_eventImportAnimation_Parms*)Obj)->bOutSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ToneAnimation_eventImportAnimation_Parms), &Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::NewProp_OutInfoMessage = { "OutInfoMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToneAnimation_eventImportAnimation_Parms, OutInfoMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToneAnimation_eventImportAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::NewProp_SourcePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::NewProp_DestinationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::NewProp_SkeletonPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::NewProp_bOutSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::NewProp_OutInfoMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tone|Animation" },
		{ "ModuleRelativePath", "ToneBase/ToneAnimation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToneAnimation, nullptr, "ImportAnimation", nullptr, nullptr, Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::ToneAnimation_eventImportAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::ToneAnimation_eventImportAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UToneAnimation_ImportAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToneAnimation_ImportAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToneAnimation);
	UClass* Z_Construct_UClass_UToneAnimation_NoRegister()
	{
		return UToneAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UToneAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToneAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToneAnimation_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UToneAnimation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToneAnimation_ImportAnimation, "ImportAnimation" }, // 2609890293
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToneAnimation_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToneAnimation_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ToneBase/ToneAnimation.h" },
		{ "ModuleRelativePath", "ToneBase/ToneAnimation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToneAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToneAnimation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToneAnimation_Statics::ClassParams = {
		&UToneAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToneAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_UToneAnimation_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UToneAnimation()
	{
		if (!Z_Registration_Info_UClass_UToneAnimation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToneAnimation.OuterSingleton, Z_Construct_UClass_UToneAnimation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToneAnimation.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UToneAnimation>()
	{
		return UToneAnimation::StaticClass();
	}
	UToneAnimation::UToneAnimation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToneAnimation);
	UToneAnimation::~UToneAnimation() {}
	struct Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ToneAnimation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ToneAnimation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UToneAnimation, UToneAnimation::StaticClass, TEXT("UToneAnimation"), &Z_Registration_Info_UClass_UToneAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToneAnimation), 4125997490U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ToneAnimation_h_1681754482(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ToneAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ToneAnimation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
