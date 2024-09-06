// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/ToneScene/ClickableObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClickableObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AClickableObject();
	MYPROJECT_API UClass* Z_Construct_UClass_AClickableObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(AClickableObject::execOnClickPrint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickPrint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AClickableObject::execOnHoverJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHoverJump();
		P_NATIVE_END;
	}
	static FName NAME_AClickableObject_OnMouseClicked = FName(TEXT("OnMouseClicked"));
	void AClickableObject::OnMouseClicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_AClickableObject_OnMouseClicked),NULL);
	}
	static FName NAME_AClickableObject_OnMouseHovered = FName(TEXT("OnMouseHovered"));
	void AClickableObject::OnMouseHovered()
	{
		ProcessEvent(FindFunctionChecked(NAME_AClickableObject_OnMouseHovered),NULL);
	}
	void AClickableObject::StaticRegisterNativesAClickableObject()
	{
		UClass* Class = AClickableObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClickPrint", &AClickableObject::execOnClickPrint },
			{ "OnHoverJump", &AClickableObject::execOnHoverJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AClickableObject_OnClickPrint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClickableObject_OnClickPrint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ToneScene/ClickableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClickableObject_OnClickPrint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClickableObject, nullptr, "OnClickPrint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClickableObject_OnClickPrint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClickableObject_OnClickPrint_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AClickableObject_OnClickPrint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClickableObject_OnClickPrint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AClickableObject_OnHoverJump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClickableObject_OnHoverJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ToneScene/ClickableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClickableObject_OnHoverJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClickableObject, nullptr, "OnHoverJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClickableObject_OnHoverJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClickableObject_OnHoverJump_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AClickableObject_OnHoverJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClickableObject_OnHoverJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AClickableObject_OnMouseClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClickableObject_OnMouseClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ToneScene/ClickableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClickableObject_OnMouseClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClickableObject, nullptr, "OnMouseClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClickableObject_OnMouseClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClickableObject_OnMouseClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AClickableObject_OnMouseClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClickableObject_OnMouseClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AClickableObject_OnMouseHovered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClickableObject_OnMouseHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ToneScene/ClickableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClickableObject_OnMouseHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClickableObject, nullptr, "OnMouseHovered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClickableObject_OnMouseHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClickableObject_OnMouseHovered_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AClickableObject_OnMouseHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClickableObject_OnMouseHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClickableObject);
	UClass* Z_Construct_UClass_AClickableObject_NoRegister()
	{
		return AClickableObject::StaticClass();
	}
	struct Z_Construct_UClass_AClickableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoverVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoverInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickableMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickableMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClickableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClickableObject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AClickableObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AClickableObject_OnClickPrint, "OnClickPrint" }, // 2807925015
		{ &Z_Construct_UFunction_AClickableObject_OnHoverJump, "OnHoverJump" }, // 2584224666
		{ &Z_Construct_UFunction_AClickableObject_OnMouseClicked, "OnMouseClicked" }, // 4250657886
		{ &Z_Construct_UFunction_AClickableObject_OnMouseHovered, "OnMouseHovered" }, // 2502499049
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClickableObject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClickableObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToneScene/ClickableObject.h" },
		{ "ModuleRelativePath", "ToneScene/ClickableObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClickableObject_Statics::NewProp_HoverVelocity_MetaData[] = {
		{ "Category", "ClickableObject" },
		{ "ModuleRelativePath", "ToneScene/ClickableObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClickableObject_Statics::NewProp_HoverVelocity = { "HoverVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClickableObject, HoverVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClickableObject_Statics::NewProp_HoverVelocity_MetaData), Z_Construct_UClass_AClickableObject_Statics::NewProp_HoverVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClickableObject_Statics::NewProp_HoverInterval_MetaData[] = {
		{ "Category", "ClickableObject" },
		{ "ModuleRelativePath", "ToneScene/ClickableObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AClickableObject_Statics::NewProp_HoverInterval = { "HoverInterval", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClickableObject, HoverInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClickableObject_Statics::NewProp_HoverInterval_MetaData), Z_Construct_UClass_AClickableObject_Statics::NewProp_HoverInterval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClickableObject_Statics::NewProp_ClickableMesh_MetaData[] = {
		{ "Category", "ClickableObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ToneScene/ClickableObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClickableObject_Statics::NewProp_ClickableMesh = { "ClickableMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClickableObject, ClickableMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClickableObject_Statics::NewProp_ClickableMesh_MetaData), Z_Construct_UClass_AClickableObject_Statics::NewProp_ClickableMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClickableObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClickableObject_Statics::NewProp_HoverVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClickableObject_Statics::NewProp_HoverInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClickableObject_Statics::NewProp_ClickableMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClickableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClickableObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AClickableObject_Statics::ClassParams = {
		&AClickableObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AClickableObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AClickableObject_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClickableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_AClickableObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClickableObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AClickableObject()
	{
		if (!Z_Registration_Info_UClass_AClickableObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClickableObject.OuterSingleton, Z_Construct_UClass_AClickableObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AClickableObject.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AClickableObject>()
	{
		return AClickableObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClickableObject);
	AClickableObject::~AClickableObject() {}
	struct Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneScene_ClickableObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneScene_ClickableObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AClickableObject, AClickableObject::StaticClass, TEXT("AClickableObject"), &Z_Registration_Info_UClass_AClickableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClickableObject), 1832066645U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneScene_ClickableObject_h_1321818524(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneScene_ClickableObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneScene_ClickableObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
