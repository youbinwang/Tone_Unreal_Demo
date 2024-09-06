// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/ToneBase/HowToFindAnything.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHowToFindAnything() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MYPROJECT_API UClass* Z_Construct_UClass_UHowToFindAnything();
	MYPROJECT_API UClass* Z_Construct_UClass_UHowToFindAnything_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(UHowToFindAnything::execOpenLevelBlueprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UHowToFindAnything::OpenLevelBlueprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHowToFindAnything::execPlayInEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UHowToFindAnything::PlayInEditor();
		P_NATIVE_END;
	}
	void UHowToFindAnything::StaticRegisterNativesUHowToFindAnything()
	{
		UClass* Class = UHowToFindAnything::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenLevelBlueprint", &UHowToFindAnything::execOpenLevelBlueprint },
			{ "PlayInEditor", &UHowToFindAnything::execPlayInEditor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHowToFindAnything_OpenLevelBlueprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHowToFindAnything_OpenLevelBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial| Finding Everything" },
		{ "ModuleRelativePath", "ToneBase/HowToFindAnything.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHowToFindAnything_OpenLevelBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHowToFindAnything, nullptr, "OpenLevelBlueprint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHowToFindAnything_OpenLevelBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHowToFindAnything_OpenLevelBlueprint_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UHowToFindAnything_OpenLevelBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHowToFindAnything_OpenLevelBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHowToFindAnything_PlayInEditor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHowToFindAnything_PlayInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial| Finding Everything" },
		{ "ModuleRelativePath", "ToneBase/HowToFindAnything.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHowToFindAnything_PlayInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHowToFindAnything, nullptr, "PlayInEditor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHowToFindAnything_PlayInEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHowToFindAnything_PlayInEditor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UHowToFindAnything_PlayInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHowToFindAnything_PlayInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHowToFindAnything);
	UClass* Z_Construct_UClass_UHowToFindAnything_NoRegister()
	{
		return UHowToFindAnything::StaticClass();
	}
	struct Z_Construct_UClass_UHowToFindAnything_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHowToFindAnything_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHowToFindAnything_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UHowToFindAnything_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHowToFindAnything_OpenLevelBlueprint, "OpenLevelBlueprint" }, // 3720495254
		{ &Z_Construct_UFunction_UHowToFindAnything_PlayInEditor, "PlayInEditor" }, // 1947373880
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHowToFindAnything_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHowToFindAnything_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ToneBase/HowToFindAnything.h" },
		{ "ModuleRelativePath", "ToneBase/HowToFindAnything.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHowToFindAnything_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHowToFindAnything>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHowToFindAnything_Statics::ClassParams = {
		&UHowToFindAnything::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHowToFindAnything_Statics::Class_MetaDataParams), Z_Construct_UClass_UHowToFindAnything_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHowToFindAnything()
	{
		if (!Z_Registration_Info_UClass_UHowToFindAnything.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHowToFindAnything.OuterSingleton, Z_Construct_UClass_UHowToFindAnything_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHowToFindAnything.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UHowToFindAnything>()
	{
		return UHowToFindAnything::StaticClass();
	}
	UHowToFindAnything::UHowToFindAnything(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHowToFindAnything);
	UHowToFindAnything::~UHowToFindAnything() {}
	struct Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_HowToFindAnything_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_HowToFindAnything_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHowToFindAnything, UHowToFindAnything::StaticClass, TEXT("UHowToFindAnything"), &Z_Registration_Info_UClass_UHowToFindAnything, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHowToFindAnything), 2768756438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_HowToFindAnything_h_903314266(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_HowToFindAnything_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_HowToFindAnything_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
