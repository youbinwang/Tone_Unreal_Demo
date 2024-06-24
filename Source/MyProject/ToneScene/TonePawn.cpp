#include "TonePawn.h"



ATonePawn::ATonePawn()
{
	PrimaryActorTick.bCanEverTick = true;

	PlayerCameraController = CreateDefaultSubobject<USpringArmComponent>(TEXT("PlayerCameraController"));
	PlayerCameraController->SetupAttachment(RootComponent);
	// PlayerCameraController->SetRelativeRotation(FRotator3d(0.f, 0.f, -50.f));
	PlayerCameraController->TargetArmLength = 1200.f;
	PlayerCameraController->bEnableCameraLag = true;
	PlayerCameraController->bEnableCameraRotationLag = true;
	PlayerCameraController->bUsePawnControlRotation = true;
	PlayerCameraController->CameraLagSpeed = 5.0f;
	PlayerCameraController->CameraRotationLagSpeed = 5.0f;

	SetActorRelativeLocation(FVector(0.f, -1200.f, 500.f));
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	PlayerCamera->SetupAttachment(PlayerCameraController, USpringArmComponent::SocketName);
	PlayerCamera->bUsePawnControlRotation = false;

	
}

void ATonePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATonePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAxis(TEXT("MoveFB"), this, &ATonePawn::MoveFB);
	PlayerInputComponent->BindAxis(TEXT("MoveLR"), this, &ATonePawn::MoveLR);
	PlayerInputComponent->BindAxis(TEXT("Rotate"), this, &ATonePawn::Rotate);
}

void ATonePawn::BeginPlay()
{
	Super::BeginPlay();
}

void ATonePawn::MoveFB(float X)
{
	AddMovementInput(GetActorForwardVector(), X);
	// auto Location = GetActorLocation();
	// Location += GetActorForwardVector() * X * MoveSpeed;
	// SetActorLocation(Location);
}

void ATonePawn::MoveLR(float Y)
{
	AddMovementInput(-GetActorRightVector(), Y);
	//
	// auto Location = GetActorLocation();
	// Location -= GetActorRightVector() * Y *MoveSpeed;
	// SetActorLocation(Location);
}

void ATonePawn::Rotate(float R)
{
	AddControllerYawInput(R);
	// auto Rotation = GetActorRotation();
	// Rotation.Yaw += R * RotationSpeed;
	// SetActorRotation(Rotation);
}
