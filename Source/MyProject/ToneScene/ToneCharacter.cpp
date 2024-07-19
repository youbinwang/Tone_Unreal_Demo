#include "ToneCharacter.h"

#include "Animation/AnimSingleNodeInstance.h"
#include "Animation/SkeletalMeshActor.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"


AToneCharacter::AToneCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	// PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	// PlayerCamera->SetupAttachment(GetCapsuleComponent());
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);
	bUseControllerRotationPitch = true;
	bUseControllerRotationRoll = true;
	bUseControllerRotationYaw = true;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// USkeletalMeshComponent *SkelMesh = GetComponentByClass<USkeletalMeshComponent>();
	// if (SkelMesh)
	// {
	// }
	

	// CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	// CameraBoom->SetupAttachment(RootComponent);
	// CameraBoom->SetUsingAbsoluteRotation(true);
	// CameraBoom->TargetArmLength = 1400.f;
	// CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	// CameraBoom->bDoCollisionTest = false;

	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	// TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false;

	
}

// void AToneCharacter::MoveFB(float Y)
// {
// 	AddMovementInput(GetActorForwardVector(), Y);
// 	// USkeletalMeshComponent *SkelMesh = GetComponentByClass<USkeletalMeshComponent>();
// 	// if (SkelMesh)
// 	// {
// 	// 	SkelMesh->PlayAnimation(BlendSpace, true);
// 	// 	FVector BlendParams(187.0f, 0.0f, 0.0f);
// 	// 	SkelMesh->GetSingleNodeInstance()->SetBlendSpacePosition(BlendParams);
// 	// }
// }

// void AToneCharacter::MoveLR(float X)
// {
// 	AddMovementInput(-GetActorRightVector(), X);
// 	
// }

// void AToneCharacter::Rotate(float R)
// {
// 	AddControllerYawInput(R );
// }

// void AToneCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
// {
// 	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
// 	// PlayerInputComponent->BindAxis(TEXT("MoveFB"), this, &AToneCharacter::MoveFB);
// 	// PlayerInputComponent->BindAxis(TEXT("MoveLR"), this, &AToneCharacter::MoveLR);
// 	// PlayerInputComponent->BindAxis(TEXT("Rotate"), this, &AToneCharacter::Rotate);
// 	//
// 	// UEnhancedInputComponent* enhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
//
// 	// enhancedInputComponent->BindAction(inputToJump, ETriggerEvent::Triggered, this, &AToneCharacter::TriggerJump);
// 	// enhancedInputComponent->BindAction(inputToMove, ETriggerEvent::Triggered, this, &AToneCharacter::EnhancedInputMove);
//
// }

void AToneCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	// AddMovementInput(FVector(0.f, 1.f, 0.f), 1.0f);

	// if (GetController()->wasInputKeyJustPressed(EKeys::E))
	// {
	// 	
	// }
	USkeletalMeshComponent *SkelMesh = GetComponentByClass<USkeletalMeshComponent>();
	if (SkelMesh)
	{
		FVector currentMeshLocation = SkelMesh->GetRelativeLocation();
		if((DestinationLocation - currentMeshLocation).Length() < 50.f)
		{
			if (IsMoving)
			{
				IsMoving = false;
				SkelMesh->PlayAnimation(BlendSpace, true);
				FVector BlendParams(0.f, 0.0f, 0.0f);
				SkelMesh->GetSingleNodeInstance()->SetBlendSpacePosition(BlendParams);
			}
			return;
		} else
		{
			FVector WorldDirection = (DestinationLocation - currentMeshLocation).GetSafeNormal();
			if(!IsMoving)
			{
				IsMoving = true;
				SkelMesh->PlayAnimation(BlendSpace, true);
				FVector BlendParams(375.f, 0.0f, 0.0f);
				SkelMesh->GetSingleNodeInstance()->SetBlendSpacePosition(BlendParams);
			}
			SkelMesh->SetRelativeLocation(currentMeshLocation + WorldDirection * Speed * DeltaSeconds);

		}
		
	}
}

void AToneCharacter::MoveTo(FVector newLocation)
{
	// AddMovementInput(newLocation, 1.0f);
	// FVector worldDirection = newLocation - GetActorLocation();

	USkeletalMeshComponent *SkelMesh = GetComponentByClass<USkeletalMeshComponent>();
	if (SkelMesh)
	{
		FVector MeshLocation = SkelMesh->GetComponentLocation();
		FRotator curRotation = UKismetMathLibrary::FindLookAtRotation(MeshLocation, newLocation);
		curRotation.Roll = 0;
		curRotation.Pitch = 0;
		curRotation.Yaw -= 90.f;

		CharacterHeightOffset = SkelMesh->GetComponentLocation().Z;

		SkelMesh->SetRelativeRotation(curRotation );
		// newLocation.Z = CharacterHeightOffset;
		newLocation.Z -= 98.f;
		DestinationLocation = newLocation;
		// SkelMesh->SetRelativeLocation(newLocation);
	}

	// AddMovementInput(worldDirection, 1.0f);
	// SetActorRelativeRotation(curRotation);
	// SetActorRelativeLocation(newLocation);
	
	// float curDotProduct = worldDirection.GetSafeNormal().Dot(GetActorForwardVector());
	// float radian = acos(curDotProduct);
	// float euler = FMath::RadiansToDegrees(radian);
	// SetActorRelativeRotation(FRotator(0, 0, FMath::DegreesToRadians(euler)))

}