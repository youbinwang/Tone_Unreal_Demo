// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ReadWriteJsonFile.generated.h"

class FJsonObject;
/**
 * 
 */
USTRUCT(BlueprintType, Category = "Tutorial| JSON data template")
struct FMyStruct
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Tutorial| JSON data template")
	FString MyString = "Llama";
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Tutorial| JSON data template")
	bool MyBool = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Tutorial| JSON data template")
	float MyFloat = 123.456f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Tutorial| JSON data template")
	int MyInt = 123;

	UPROPERTY()
	FVector MyVector = {1.0f, 2.0f, 3.0f};

	UPROPERTY()
	FRotator MyRotator = {90.f, 180.f, 270.f};

	UPROPERTY()
	FTransform MyTransform;

	FString MyOtherString = "This is Not in JSon because if does not have flag UPROPERTY()";
};


UCLASS()
class MYPROJECT_API UReadWriteJsonFile: public UBlueprintFunctionLibrary
{
  GENERATED_BODY()
public:
	static TSharedPtr<FJsonObject> ReadJson(FString JsonFilePath, bool& bOutSuccess, FString& OutInfoMessage);

	static void WriteJson(FString JsonFilePath, TSharedPtr<FJsonObject> JsonObject, bool& bOutSuccess, FString& OutInfoMessage);

	UFUNCTION(BlueprintCallable, Category="Tutorial| JSON data template")
	static FMyStruct ReadStructFromFile(FString JsonFilePath, bool& bOutSuccess, FString& OutInfoMessage);

	UFUNCTION(BlueprintCallable, Category="Tutorial| JSON data template")
	static void WriteStructJsonFile(FString JsonFilePath, FMyStruct curStruct, bool& bOutSuccess, FString& OutInfoMessage);
};
