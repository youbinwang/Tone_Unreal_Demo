// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "ClickableObject.generated.h"

UCLASS()
class MYPROJECT_API AClickableObject : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AClickableObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	void NotifyActorOnClicked(FKey ButtonPressed) override;

	virtual void NotifyActorBeginCursorOver() override;

	virtual void NotifyActorEndCursorOver() override;


	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* ClickableMesh;
	
	UPROPERTY(EditAnywhere)
    UBoxComponent* BoxCollider;

};
