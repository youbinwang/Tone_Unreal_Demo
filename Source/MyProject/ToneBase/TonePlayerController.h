#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerController.h"
#include "TonePlayerController.generated.h"

class UNiagaraSystem;

UCLASS()
class MYPROJECT_API ATonePlayerController: public APlayerController
{
	GENERATED_BODY()
public:
	// void Move2D()
	ATonePlayerController();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float CameraSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	float ShortPressThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UNiagaraSystem* FXCursor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* SetDestinationClickAction;

	// UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowPrivateAccess = "true"))
	// class UInputAction* SetDestinationTouchAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* MoveCameraVerticalAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* MoveCameraHorizontalAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* MoveCameraDepthAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(AllowPrivateAccess = "true"))
	class UInputAction* RotateCameraAction;

protected:
	uint32 bMoveToMouseCursor : 1;

	virtual void SetupInputComponent() override;

	virtual void BeginPlay() override;

	void OnInputStarted();
	void OnSetDestinationTriggered();
	void OnSetDestinationReleased();
	void OnTouchTriggered();
	void OnTouchReleased();

	void MoveCameraVertical(const FInputActionValue& Value);
	void MoveCameraHorizontal(const FInputActionValue& Value);
	void MoveCameraDepth(const FInputActionValue& Value);
	void RotateCamera(const FInputActionValue& Value);

	void CancelCameraMove();

private:
	FVector CachedDestination;

	bool bIsTouch;
	float FollowTime;

	// bool IsMove = false;

	bool IsMovingFB = false;
	bool IsMovingLR = false;

};
