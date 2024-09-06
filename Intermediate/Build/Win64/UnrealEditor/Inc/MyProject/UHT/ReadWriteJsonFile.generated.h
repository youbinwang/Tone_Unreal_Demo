// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToneBase/ReadWriteJsonFile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMyStruct;
#ifdef MYPROJECT_ReadWriteJsonFile_generated_h
#error "ReadWriteJsonFile.generated.h already included, missing '#pragma once' in ReadWriteJsonFile.h"
#endif
#define MYPROJECT_ReadWriteJsonFile_generated_h

#define FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyStruct_Statics; \
	MYPROJECT_API static class UScriptStruct* StaticStruct();


template<> MYPROJECT_API UScriptStruct* StaticStruct<struct FMyStruct>();

#define FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_45_SPARSE_DATA
#define FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_45_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_45_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWriteStructJsonFile); \
	DECLARE_FUNCTION(execReadStructFromFile);


#define FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_45_ACCESSORS
#define FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReadWriteJsonFile(); \
	friend struct Z_Construct_UClass_UReadWriteJsonFile_Statics; \
public: \
	DECLARE_CLASS(UReadWriteJsonFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UReadWriteJsonFile)


#define FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadWriteJsonFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadWriteJsonFile(UReadWriteJsonFile&&); \
	NO_API UReadWriteJsonFile(const UReadWriteJsonFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadWriteJsonFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadWriteJsonFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadWriteJsonFile) \
	NO_API virtual ~UReadWriteJsonFile();


#define FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_42_PROLOG
#define FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_45_SPARSE_DATA \
	FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_45_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_45_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_45_ACCESSORS \
	FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_45_INCLASS_NO_PURE_DECLS \
	FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UReadWriteJsonFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Class_Material_UEPractice_MyProject_Source_MyProject_ToneBase_ReadWriteJsonFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
