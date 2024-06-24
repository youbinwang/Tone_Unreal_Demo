#pragma once

#include "CoreMinimal.h"
#include "Animation/BlendSpace1D.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "GameFramework/SpringArmComponent.h"
#include "MyProject/ToneBase/TonePlayerController.h"
#include "ToneCharacter.generated.h"

UCLASS()
class AToneCharacter: public ACharacter
{
	GENERATED_BODY()
public:	
	AToneCharacter();

	virtual void Tick(float DeltaSeconds) override;

	void MoveTo(FVector newLocation);

	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const {return TopDownCameraComponent; }

	// FORCEINLINE class USpringArmComponent* GetCameraBoom() const {return CameraBoom; }
	
	UPROPERTY(EditAnywhere, NoClear)
	UBlendSpace1D* BlendSpace;

	UPROPERTY(EditAnywhere, NoClear)
	float Speed = 184.f;
protected:
	void MoveRight(float Value);
	void EnhancedInputMove(const FInputActionValue& Value);
	void TriggerJump(const FInputActionValue& Value);

	
private:
	// UPROPERTY(EditDefaultsOnly)
	// UCameraComponent* PlayerCamera;

	// UPROPERTY(EditDefaultsOnly)
	// UAnimSequence* IdleAnim;
	//
	// UPROPERTY(EditDefaultsOnly)
	// UAnimSequence* RunAnim;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = CAMERA_ZOOM_DAMPEN, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	float CharacterHeightOffset;

	bool IsMoving = false;

	FVector DestinationLocation;

	// UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = CAMERA_ZOOM_DAMPEN, meta = (AllowPrivateAccess = "true"))
	// class USpringArmComponent* CameraBoom;
};
