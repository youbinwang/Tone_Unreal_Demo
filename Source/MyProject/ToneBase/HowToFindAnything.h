// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HowToFindAnything.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UHowToFindAnything : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Tutorial| Finding Everything")
	static void PlayInEditor();

	UFUNCTION(BlueprintCallable, Category = "Tutorial| Finding Everything")
	static void OpenLevelBlueprint();
};
