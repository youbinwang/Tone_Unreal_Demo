// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/ToneBase/ReadWriteJsonFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadWriteJsonFile() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MYPROJECT_API UClass* Z_Construct_UClass_UReadWriteJsonFile();
	MYPROJECT_API UClass* Z_Construct_UClass_UReadWriteJsonFile_NoRegister();
	MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMyStruct();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyStruct;
class UScriptStruct* FMyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyStruct, (UObject*)Z_Construct_UPackage__Script_MyProject(), TEXT("MyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MyStruct.OuterSingleton;
}
template<> MYPROJECT_API UScriptStruct* StaticStruct<FMyStruct>()
{
	return FMyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MyString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyBool_MetaData[];
#endif
		static void NewProp_MyBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MyBool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MyFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MyInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Tutorial| JSON data template" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "ToneBase/ReadWriteJsonFile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyString_MetaData[] = {
		{ "Category", "Tutorial| JSON data template" },
		{ "ModuleRelativePath", "ToneBase/ReadWriteJsonFile.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyString = { "MyString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyStruct, MyString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyString_MetaData), Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyBool_MetaData[] = {
		{ "Category", "Tutorial| JSON data template" },
		{ "ModuleRelativePath", "ToneBase/ReadWriteJsonFile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyBool_SetBit(void* Obj)
	{
		((FMyStruct*)Obj)->MyBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyBool = { "MyBool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMyStruct), &Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyBool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyBool_MetaData), Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyBool_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyFloat_MetaData[] = {
		{ "Category", "Tutorial| JSON data template" },
		{ "ModuleRelativePath", "ToneBase/ReadWriteJsonFile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyFloat = { "MyFloat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyStruct, MyFloat), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyFloat_MetaData), Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyFloat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyInt_MetaData[] = {
		{ "Category", "Tutorial| JSON data template" },
		{ "ModuleRelativePath", "ToneBase/ReadWriteJsonFile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyInt = { "MyInt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyStruct, MyInt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyInt_MetaData), Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyInt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyVector_MetaData[] = {
		{ "ModuleRelativePath", "ToneBase/ReadWriteJsonFile.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyVector = { "MyVector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyStruct, MyVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyVector_MetaData), Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyRotator_MetaData[] = {
		{ "ModuleRelativePath", "ToneBase/ReadWriteJsonFile.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyRotator = { "MyRotator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyStruct, MyRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyRotator_MetaData), Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyRotator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyTransform_MetaData[] = {
		{ "ModuleRelativePath", "ToneBase/ReadWriteJsonFile.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyTransform = { "MyTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyStruct, MyTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyTransform_MetaData), Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyTransform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyBool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyStruct_Statics::NewProp_MyTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
		nullptr,
		&NewStructOps,
		"MyStruct",
		Z_Construct_UScriptStruct_FMyStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::PropPointers),
		sizeof(FMyStruct),
		alignof(FMyStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMyStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_MyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyStruct.InnerSingleton, Z_Construct_UScriptStruct_FMyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MyStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(UReadWriteJsonFile::execWriteStructJsonFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonFilePath);
		P_GET_STRUCT(FMyStruct,Z_Param_curStruct);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutInfoMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UReadWriteJsonFile::WriteStructJsonFile(Z_Param_JsonFilePath,Z_Param_curStruct,Z_Param_Out_bOutSuccess,Z_Param_Out_OutInfoMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadWriteJsonFile::execReadStructFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonFilePath);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSuccess);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutInfoMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMyStruct*)Z_Param__Result=UReadWriteJsonFile::ReadStructFromFile(Z_Param_JsonFilePath,Z_Param_Out_bOutSuccess,Z_Param_Out_OutInfoMessage);
		P_NATIVE_END;
	}
	void UReadWriteJsonFile::StaticRegisterNativesUReadWriteJsonFile()
	{
		UClass* Class = UReadWriteJsonFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadStructFromFile", &UReadWriteJsonFile::execReadStructFromFile },
			{ "WriteStructJsonFile", &UReadWriteJsonFile::execWriteStructJsonFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics
	{
		struct ReadWriteJsonFile_eventReadStructFromFile_Parms
		{
			FString JsonFilePath;
			bool bOutSuccess;
			FString OutInfoMessage;
			FMyStruct ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonFilePath;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutInfoMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::NewProp_JsonFilePath = { "JsonFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteJsonFile_eventReadStructFromFile_Parms, JsonFilePath), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((ReadWriteJsonFile_eventReadStructFromFile_Parms*)Obj)->bOutSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReadWriteJsonFile_eventReadStructFromFile_Parms), &Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::NewProp_OutInfoMessage = { "OutInfoMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteJsonFile_eventReadStructFromFile_Parms, OutInfoMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteJsonFile_eventReadStructFromFile_Parms, ReturnValue), Z_Construct_UScriptStruct_FMyStruct, METADATA_PARAMS(0, nullptr) }; // 2152448018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::NewProp_JsonFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::NewProp_bOutSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::NewProp_OutInfoMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial| JSON data template" },
		{ "ModuleRelativePath", "ToneBase/ReadWriteJsonFile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadWriteJsonFile, nullptr, "ReadStructFromFile", nullptr, nullptr, Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::ReadWriteJsonFile_eventReadStructFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::ReadWriteJsonFile_eventReadStructFromFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics
	{
		struct ReadWriteJsonFile_eventWriteStructJsonFile_Parms
		{
			FString JsonFilePath;
			FMyStruct curStruct;
			bool bOutSuccess;
			FString OutInfoMessage;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonFilePath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_curStruct;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutInfoMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::NewProp_JsonFilePath = { "JsonFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteJsonFile_eventWriteStructJsonFile_Parms, JsonFilePath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::NewProp_curStruct = { "curStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteJsonFile_eventWriteStructJsonFile_Parms, curStruct), Z_Construct_UScriptStruct_FMyStruct, METADATA_PARAMS(0, nullptr) }; // 2152448018
	void Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((ReadWriteJsonFile_eventWriteStructJsonFile_Parms*)Obj)->bOutSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::NewProp_bOutSuccess = { "bOutSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReadWriteJsonFile_eventWriteStructJsonFile_Parms), &Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::NewProp_OutInfoMessage = { "OutInfoMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadWriteJsonFile_eventWriteStructJsonFile_Parms, OutInfoMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::NewProp_JsonFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::NewProp_curStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::NewProp_bOutSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::NewProp_OutInfoMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial| JSON data template" },
		{ "ModuleRelativePath", "ToneBase/ReadWriteJsonFile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadWriteJsonFile, nullptr, "WriteStructJsonFile", nullptr, nullptr, Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::ReadWriteJsonFile_eventWriteStructJsonFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::ReadWriteJsonFile_eventWriteStructJsonFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadWriteJsonFile);
	UClass* Z_Construct_UClass_UReadWriteJsonFile_NoRegister()
	{
		return UReadWriteJsonFile::StaticClass();
	}
	struct Z_Construct_UClass_UReadWriteJsonFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadWriteJsonFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadWriteJsonFile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadWriteJsonFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadWriteJsonFile_ReadStructFromFile, "ReadStructFromFile" }, // 841069015
		{ &Z_Construct_UFunction_UReadWriteJsonFile_WriteStructJsonFile, "WriteStructJsonFile" }, // 3423483162
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadWriteJsonFile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadWriteJsonFile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToneBase/ReadWriteJsonFile.h" },
		{ "ModuleRelativePath", "ToneBase/ReadWriteJsonFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadWriteJsonFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadWriteJsonFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadWriteJsonFile_Statics::ClassParams = {
		&UReadWriteJsonFile::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadWriteJsonFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadWriteJsonFile_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UReadWriteJsonFile()
	{
		if (!Z_Registration_Info_UClass_UReadWriteJsonFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadWriteJsonFile.OuterSingleton, Z_Construct_UClass_UReadWriteJsonFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadWriteJsonFile.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<UReadWriteJsonFile>()
	{
		return UReadWriteJsonFile::StaticClass();
	}
	UReadWriteJsonFile::UReadWriteJsonFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadWriteJsonFile);
	UReadWriteJsonFile::~UReadWriteJsonFile() {}
	struct Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_Statics::ScriptStructInfo[] = {
		{ FMyStruct::StaticStruct, Z_Construct_UScriptStruct_FMyStruct_Statics::NewStructOps, TEXT("MyStruct"), &Z_Registration_Info_UScriptStruct_MyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyStruct), 2152448018U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadWriteJsonFile, UReadWriteJsonFile::StaticClass, TEXT("UReadWriteJsonFile"), &Z_Registration_Info_UClass_UReadWriteJsonFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadWriteJsonFile), 3561347416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_3801090433(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
