// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ToneAnimation.generated.h"

class UAnimSequence;
/**
 * 
 */
UCLASS()
class MYPROJECT_API UToneAnimation : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Tone|Animation")
	static UAnimSequence* ImportAnimation(FString SourcePath, FString DestinationPath, FString SkeletonPath, bool& bOutSuccess, FString& OutInfoMessage);
};
