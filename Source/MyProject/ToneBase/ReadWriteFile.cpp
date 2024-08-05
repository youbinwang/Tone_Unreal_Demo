// Fill out your copyright notice in the Description page of Project Settings.


#include "ReadWriteFile.h"
#include "HAL/PlatformFileManager.h" // Core
#include "Misc/FileHelper.h" // Core


FString UReadWriteFile::ReadStringFromFile(FString FilePath, bool& bOutSuccess, FString& OutInfoMessage)
{
	if(!FPlatformFileManager::Get().GetPlatformFile().FileExists(*FilePath))
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Read String From File Failed - File Doesn't exist - '%s' "), *FilePath);
		return "";
	}
	FString RetString = "";
	if(!FFileHelper::LoadFileToString(RetString, *FilePath))
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Read String From File Failed - Is This A Text File? - '%s' "), *FilePath);

		return "";
	}
	bOutSuccess = true;
	OutInfoMessage = FString::Printf(TEXT("Read String From File Succeed - '%s' "), *FilePath);
	return RetString;
}

void UReadWriteFile::WriteStringFromFile(FString FilePath, FString string, bool& bOutSuccess,
	FString& OutInfoMessage)
{
	if(!FFileHelper::SaveStringToFile(string, *FilePath))
	{
		bOutSuccess = false;
        OutInfoMessage = FString::Printf(TEXT("Write String To File Failed - Is This File ReadOnly? Is the Path Valid? - '%s' "), *FilePath);
		return;
	}
	bOutSuccess = true;
	OutInfoMessage = FString::Printf(TEXT("Write String To File Succeed - '%s' "), *FilePath);
}
