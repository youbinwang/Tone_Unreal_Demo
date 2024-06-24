// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterData.h"
#include "Engine/DataAsset.h"
#include "LevelData.generated.h"

/** A zone that can be selected by the user from the map screen */
UCLASS(Blueprintable)
class MYPROJECT_API ULevelData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public: 
	/** Name of the Level */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Level")
	FText Name;

	/** The Level that will be loaded when entering this zone */
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category="Level")
	TSoftObjectPtr<UWorld> LevelToLoad;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category="Level")
	TSubclassOf<UCharacterData> PrimaryCharacter;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category="Level")
	FVector SpawnPos;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("Level", GetFName());
	}
};