#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "PhysicsEngine/PhysicsAsset.h"
#include "Engine/SkinnedAssetCommon.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/Material.h"

#include "TonePawn.generated.h"

UCLASS()
class MYPROJECT_API ATonePawn: public APawn
{
	GENERATED_BODY()

public:
	ATonePawn();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	void MoveFB(float X);
	void MoveLR(float Y);
	void Rotate(float R);

private:
	UPROPERTY(EditAnywhere)
	USpringArmComponent* PlayerCameraController;

	UPROPERTY(EditAnywhere)
	UCameraComponent* PlayerCamera;
};
