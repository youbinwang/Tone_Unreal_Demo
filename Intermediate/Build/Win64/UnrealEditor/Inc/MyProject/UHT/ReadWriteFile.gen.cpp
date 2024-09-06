// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/ToneBase/ReadWriteFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadWriteFile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MYPROJECT_API UClass* Z_Construct_UClass_UReadWriteFile();
	MYPROJECT_API UClass* Z_Construct_UClass_UReadWriteFile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(UReadWriteFile::execWriteStringFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_string);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutInfoMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UReadWriteFile::WriteStringFromFile(Z_Param_FilePath,Z_Param_string,Z_Param_Out_bOutSuccess,Z_Param_Out_OutInfoMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadWriteFile::execReadStringFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutInfoMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UReadWriteFile::ReadStringFromFile(Z_Param_FilePath,Z_Param_Out_bOutSuccess,Z_Param_Out_OutInfoMessage);
		P_NATIVE_END;
	}
	void UReadWriteFile::StaticRegisterNativesUReadWriteFile()
	{
		UClass* Class = UReadWriteFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadStringFromFile", &UReadWriteFile::execReadStringFromFile },
			{ "WriteStringFromFile", &UReadWriteFile::execWriteStringFromFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics
	{
		struct ReadWriteFile_eventReadStringFromFile_Parms
		{
			FString FilePath;
			bool bOutSuccess;
			FString OutInfoMessage;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutInfoMessage;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteFile_eventReadStringFromFile_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((ReadWriteFile_eventReadStringFromFile_Parms*)Obj)->bOutSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReadWriteFile_eventReadStringFromFile_Parms), &Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_OutInfoMessage = { "OutInfoMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteFile_eventReadStringFromFile_Parms, OutInfoMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteFile_eventReadStringFromFile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_bOutSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_OutInfoMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Read/Write File" },
		{ "ModuleRelativePath", "ToneBase/ReadWriteFile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadWriteFile, nullptr, "ReadStringFromFile", nullptr, nullptr, Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::ReadWriteFile_eventReadStringFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::ReadWriteFile_eventReadStringFromFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics
	{
		struct ReadWriteFile_eventWriteStringFromFile_Parms
		{
			FString FilePath;
			FString string;
			bool bOutSuccess;
			FString OutInfoMessage;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_string;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutInfoMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteFile_eventWriteStringFromFile_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteFile_eventWriteStringFromFile_Parms, string), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((ReadWriteFile_eventWriteStringFromFile_Parms*)Obj)->bOutSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReadWriteFile_eventWriteStringFromFile_Parms), &Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::NewProp_OutInfoMessage = { "OutInfoMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteFile_eventWriteStringFromFile_Parms, OutInfoMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::NewProp_string,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::NewProp_bOutSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::NewProp_OutInfoMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Read/Write File" },
		{ "ModuleRelativePath", "ToneBase/ReadWriteFile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadWriteFile, nullptr, "WriteStringFromFile", nullptr, nullptr, Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::ReadWriteFile_eventWriteStringFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::ReadWriteFile_eventWriteStringFromFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadWriteFile);
	UClass* Z_Construct_UClass_UReadWriteFile_NoRegister()
	{
		return UReadWriteFile::StaticClass();
	}
	struct Z_Construct_UClass_UReadWriteFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadWriteFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadWriteFile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadWriteFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadWriteFile_ReadStringFromFile, "ReadStringFromFile" }, // 2253612288
		{ &Z_Construct_UFunction_UReadWriteFile_WriteStringFromFile, "WriteStringFromFile" }, // 596912152
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadWriteFile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadWriteFile_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ToneBase/ReadWriteFile.h" },
		{ "ModuleRelativePath", "ToneBase/ReadWriteFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadWriteFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadWriteFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadWriteFile_Statics::ClassParams = {
		&UReadWriteFile::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadWriteFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadWriteFile_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UReadWriteFile()
	{
		if (!Z_Registration_Info_UClass_UReadWriteFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadWriteFile.OuterSingleton, Z_Construct_UClass_UReadWriteFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadWriteFile.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UReadWriteFile>()
	{
		return UReadWriteFile::StaticClass();
	}
	UReadWriteFile::UReadWriteFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadWriteFile);
	UReadWriteFile::~UReadWriteFile() {}
	struct Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteFile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteFile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadWriteFile, UReadWriteFile::StaticClass, TEXT("UReadWriteFile"), &Z_Registration_Info_UClass_UReadWriteFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadWriteFile), 1323781287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteFile_h_2352710724(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteFile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
