// Fill out your copyright notice in the Description page of Project Settings.


#include "ToneGameModeBase.h"


void AToneGameModeBase::InitGameState()
{
	Super::InitGameState();

	PlayerControllerClass = ATonePlayerController::StaticClass();
	if(CustomPawnClass != nullptr)
	{
		DefaultPawnClass = CustomCharacterClass;

		// FString a = CustomPawnClass->GetClass();
		// static ConstructorHelpers::FClassFinder<ATonePawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_MainTonePawn"));

		// UE_LOG(LogTemp, Warning, TEXT("a"), *FString(a));
		// LOgger->lo
	}
	
	if(CustomController != nullptr)
	{
		PlayerControllerClass = CustomController;
	}

	// static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_MainTonePawn"));
	// // /Script/Engine.Blueprint'/Game/Blueprints/MainTonePawn.MainTonePawn'

	//
	// if(PlayerPawnBPClass.Class != nullptr)
	// {
	// 	DefaultPawnClass = PlayerPawnBPClass.Class;
	// }
	//
	// static ConstructorHelpers::FClassFinder<ATonePlayerController> PlayerControllerBPClass(TEXT("/Game/ToneAssets/BluePrints/MyToneController"));
	// if(PlayerControllerBPClass.Class != nullptr)
	// {
	// 	PlayerControllerClass = PlayerControllerBPClass.Class;
	// }
	
}
