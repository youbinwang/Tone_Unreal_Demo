#include "TonePlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "../ToneScene/ToneCharacter.h"
// #inlcude "Engine/World.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "MyProject/ToneScene/ClickableObject.h"


ATonePlayerController::ATonePlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
	DefaultMouseCursor = EMouseCursor::Default;
	CachedDestination = FVector::ZeroVector;
	FollowTime = 0.f;
}

void ATonePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Started, this, &ATonePlayerController::OnInputStarted);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Triggered, this, &ATonePlayerController::OnSetDestinationTriggered);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Completed, this, &ATonePlayerController::OnSetDestinationReleased);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Canceled, this, &ATonePlayerController::OnSetDestinationReleased);

		EnhancedInputComponent->BindAction(MoveCameraVerticalAction, ETriggerEvent::Triggered, this, &ATonePlayerController::MoveCameraVertical);
		EnhancedInputComponent->BindAction(MoveCameraVerticalAction, ETriggerEvent::Completed, this, &ATonePlayerController::MoveCameraVertical);

		EnhancedInputComponent->BindAction(MoveCameraHorizontalAction, ETriggerEvent::Triggered, this, &ATonePlayerController::MoveCameraHorizontal);
		EnhancedInputComponent->BindAction(MoveCameraHorizontalAction, ETriggerEvent::Completed, this, &ATonePlayerController::MoveCameraHorizontal);

		EnhancedInputComponent->BindAction(MoveCameraDepthAction, ETriggerEvent::Triggered, this, &ATonePlayerController::MoveCameraDepth);
		EnhancedInputComponent->BindAction(MoveCameraDepthAction, ETriggerEvent::Completed, this, &ATonePlayerController::MoveCameraDepth);

		EnhancedInputComponent->BindAction(RotateCameraAction, ETriggerEvent::Triggered, this, &ATonePlayerController::RotateCamera);
		EnhancedInputComponent->BindAction(RotateCameraAction, ETriggerEvent::Completed, this, &ATonePlayerController::RotateCamera);
		// EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Started, this, &ATonePlayerController::OnInputStarted);
		// EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Triggered, this, &ATonePlayerController::OnTouchTriggered);
		// EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Completed, this, &ATonePlayerController::OnTouchReleased);
		// EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Canceled, this, &ATonePlayerController::OnTouchReleased);

	}
}

void ATonePlayerController::BeginPlay()
{
	Super::BeginPlay();

	if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem -> AddMappingContext(DefaultMappingContext, 0);
	}
}

void ATonePlayerController::OnInputStarted()
{
	StopMovement();
}

void ATonePlayerController::OnSetDestinationTriggered()
{
	FollowTime += GetWorld()->GetDeltaSeconds();

	FHitResult Hit;
	bool bHitSuccessful = false;
	if(bIsTouch)
	{
		bHitSuccessful = GetHitResultUnderFinger(ETouchIndex::Touch1, ECC_Visibility, true, Hit);
	} else
	{
		bHitSuccessful = GetHitResultUnderCursor(ECC_Visibility, true, Hit);
	}
	if (bHitSuccessful)
	{
		AClickableObject* hitAct = Cast<AClickableObject>(Hit.GetActor());
		if (hitAct != nullptr)
		{
			// UE_LOG(LogTemp, Warning, TEXT("Pawn selected"));
		}
		else
		{
			CachedDestination = Hit.Location;
			UE_LOG(LogTemp, Warning, TEXT("Destination position is %s"), *CachedDestination.ToString());
			APawn* ControlledPawn = GetPawn();
			AToneCharacter* curCharacter = Cast<AToneCharacter>(ControlledPawn);
			if(curCharacter != nullptr)
			{
				// FVector WorldDirection = (CachedDestination - curCharacter->GetActorLocation()).GetSafeNormal();
				curCharacter->MoveTo(CachedDestination);
			}
		}
		
	}
	
}

void ATonePlayerController::OnSetDestinationReleased()
{
	if (FollowTime <= ShortPressThreshold)
	{
		// UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, CachedDestination);
		// UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FXCursor, CachedDestination, FRotator::ZeroRotator, FVector(1.f, 1.f, 1.f), true, true, ENCPoolMethod::None, true);
	}
	FollowTime = 0.f;
}

void ATonePlayerController::OnTouchTriggered()
{
	bIsTouch = true;
	OnSetDestinationTriggered();
}

void ATonePlayerController::OnTouchReleased()
{
	bIsTouch = false;
	OnSetDestinationReleased();
}

void ATonePlayerController::MoveCameraVertical(const FInputActionValue& Value)
{
	const FVector2D moveVector = Value.Get<FVector2D>();
	if(moveVector.X > 0)
	{
		UCameraComponent* currentCamera =  GetCharacter()->FindComponentByClass<UCameraComponent>();
		if (currentCamera != nullptr)
		{
			currentCamera->SetRelativeLocation(currentCamera->GetRelativeLocation() + CameraSpeed * currentCamera->GetForwardVector());
		}

	} else if (moveVector.X < 0)
	{
		UCameraComponent* currentCamera =  GetCharacter()->FindComponentByClass<UCameraComponent>();
		if (currentCamera != nullptr)
		{
			currentCamera->SetRelativeLocation(currentCamera->GetRelativeLocation() - CameraSpeed * currentCamera->GetForwardVector());
		}
	}
}

void ATonePlayerController::MoveCameraHorizontal(const FInputActionValue& Value)
{
	const FVector2D moveVector = Value.Get<FVector2D>();
	if(moveVector.X > 0)
	{
		UCameraComponent* currentCamera =  GetCharacter()->FindComponentByClass<UCameraComponent>();
		if (currentCamera != nullptr)
		{
			currentCamera->SetRelativeLocation(currentCamera->GetRelativeLocation() + CameraSpeed * currentCamera->GetRightVector());
		}

	} else if (moveVector.X < 0)
	{
		UCameraComponent* currentCamera =  GetCharacter()->FindComponentByClass<UCameraComponent>();
		if (currentCamera != nullptr)
		{
			currentCamera->SetRelativeLocation(currentCamera->GetRelativeLocation() - CameraSpeed * currentCamera->GetRightVector());
		}
	}
}

void ATonePlayerController::MoveCameraDepth(const FInputActionValue& Value)
{
	const FVector2D moveVector = Value.Get<FVector2D>();
	if(moveVector.X > 0)
	{
		UCameraComponent* currentCamera =  GetCharacter()->FindComponentByClass<UCameraComponent>();
		if (currentCamera != nullptr)
		{
			currentCamera->SetRelativeLocation(currentCamera->GetRelativeLocation() + CameraSpeed * currentCamera->GetForwardVector());
		}

	} else if (moveVector.X < 0)
	{
		UCameraComponent* currentCamera =  GetCharacter()->FindComponentByClass<UCameraComponent>();
		if (currentCamera != nullptr)
		{
			currentCamera->SetRelativeLocation(currentCamera->GetRelativeLocation() - CameraSpeed * currentCamera->GetForwardVector());
		}
	}
}

void ATonePlayerController::RotateCamera(const FInputActionValue& Value)
{
	if(!IsInputKeyDown(EKeys::RightMouseButton))
	{
		return;
	}
	const FVector2D moveVector = Value.Get<FVector2D>();

	UCameraComponent* currentCamera =  GetCharacter()->FindComponentByClass<UCameraComponent>();
	if (currentCamera != nullptr)
	{
		FRotator CameraCurrentRotation = currentCamera->GetRelativeRotation();
		CameraCurrentRotation.Yaw += moveVector.X;
		CameraCurrentRotation.Pitch += moveVector.Y;

		currentCamera->SetRelativeRotation(CameraCurrentRotation);

	}
	
}

void ATonePlayerController::CancelCameraMove()
{
	IsMovingFB = false;
}
