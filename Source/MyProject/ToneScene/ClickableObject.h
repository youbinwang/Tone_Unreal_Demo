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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HoverVelocity = .3f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HoverInterval = 1.f;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	void NotifyActorOnClicked(FKey ButtonPressed) override;

	virtual void NotifyActorBeginCursorOver() override;

	virtual void NotifyActorEndCursorOver() override;

	void SetHoverStatus();

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* ClickableMesh;

	UFUNCTION(BlueprintImplementableEvent)
	void OnMouseHovered();

	UFUNCTION(BlueprintImplementableEvent)
	void OnMouseClicked();

	UFUNCTION(BlueprintCallable)
	void OnHoverJump();

	UFUNCTION(BlueprintCallable)
	void OnClickPrint();

private:
	bool isHovered = false;
	float HoverIntervalTime;
};
