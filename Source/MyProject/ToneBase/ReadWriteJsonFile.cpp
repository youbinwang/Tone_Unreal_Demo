// Fill out your copyright notice in the Description page of Project Settings.


#include "ReadWriteJsonFile.h"
#include "ReadWriteFile.h"
#include "Serialization/JsonSerializer.h"
#include "JsonObjectConverter.h"



TSharedPtr<FJsonObject> UReadWriteJsonFile::ReadJson(FString JsonFilePath, bool& bOutSuccess, FString& OutInfoMessage)
{
	FString JsonString = UReadWriteFile::ReadStringFromFile(JsonFilePath, bOutSuccess, OutInfoMessage);
	if (!bOutSuccess)
	{
		return nullptr;
	}
	TSharedPtr<FJsonObject> RetJsonObj;
	if(!FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(JsonString), RetJsonObj))
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Read Json Failed - Was Not able to Deserialilze the json string. Is it the right format? - '%s'"), *JsonString);
		return nullptr;
	}
	bOutSuccess = true;
	OutInfoMessage = FString::Printf(TEXT("Read Json Succeed - '%s'"), *JsonFilePath);
	return RetJsonObj;
}

void UReadWriteJsonFile::WriteJson(FString JsonFilePath, TSharedPtr<FJsonObject> JsonObject, bool& bOutSuccess,
	FString& OutInfoMessage)
{
	FString JsonString;

	if(!FJsonSerializer::Serialize(JsonObject.ToSharedRef(), TJsonWriterFactory<>::Create(&JsonString, 0)))
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Write Json Failed - Was Not able to Serialize the json string. Is the JSonObject Valid? - '%s'"), *JsonString);
		return ;
	}
	UReadWriteFile::WriteStringFromFile(JsonFilePath, JsonString, bOutSuccess, OutInfoMessage);
	if (!bOutSuccess)
	{
		return;
	}

	bOutSuccess = true;
	OutInfoMessage = FString::Printf(TEXT("Write Json Succeed - '%s'"), *JsonFilePath);
}

FMyStruct UReadWriteJsonFile::ReadStructFromFile(FString JsonFilePath, bool& bOutSuccess, FString& OutInfoMessage)
{
	TSharedPtr<FJsonObject> JsonObject = ReadJson(JsonFilePath, bOutSuccess, OutInfoMessage);
	if(!bOutSuccess)
	{
		return FMyStruct();
	}
	FMyStruct RetMyStruct;

	if(!FJsonObjectConverter::JsonObjectToUStruct<FMyStruct>(JsonObject.ToSharedRef(), &RetMyStruct))
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Read Struct Json Failed - was not able to convert the json object to your desired structure. Is it the right format / struct - '%s'"), *JsonFilePath);
		return FMyStruct();
	}
	bOutSuccess = true;
	OutInfoMessage = FString::Printf(TEXT("Read struct Json Succeed - '%s'"), *JsonFilePath);
	return RetMyStruct;
}

void UReadWriteJsonFile::WriteStructJsonFile(FString JsonFilePath, FMyStruct curStruct, bool& bOutSuccess,
	FString& OutInfoMessage)
{
	TSharedPtr<FJsonObject> JsonObject = FJsonObjectConverter::UStructToJsonObject(curStruct);
	if(JsonObject == nullptr)
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Write Struct Json Failed - Was not able to convert struct to Json Object. This Should not really happen"));
		return;
	}
	WriteJson(JsonFilePath, JsonObject, bOutSuccess, OutInfoMessage);
}
