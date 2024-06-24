// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyProject/ToneScene/ToneCharacter.h"
#include "GameFramework/DefaultPawn.h"
#include "ToneScene/TonePawn.h"
#include "ToneGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AToneGameModeBase : public AGameModeBase
{
public:
	virtual void InitGameState() override;

private:
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<AToneCharacter> CustomCharacterClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<ATonePawn> CustomPawnClass;
	
	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<ATonePlayerController> CustomController;
};
