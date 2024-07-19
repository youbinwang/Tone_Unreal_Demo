// Fill out your copyright notice in the Description page of Project Settings.


#include "ClickableObject.h"


// Sets default values
AClickableObject::AClickableObject()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ClickableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	ClickableMesh->SetupAttachment(GetParentComponent());
	// ClickableMesh->OnClicked.AddDynamic(this, &AClickableObject::OnCurrentObjectClicked);
	// ClickableMesh->OnBeginCursorOver.AddDynamic(this, &AClickableObject::OnCurrentObjectHover);

	// BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	// BoxCollider->
}

// Called when the game starts or when spawned
void AClickableObject::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AClickableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AClickableObject::NotifyActorOnClicked(FKey ButtonPressed)
{
	Super::NotifyActorOnClicked(ButtonPressed);
	UE_LOG(LogTemp, Warning, TEXT("Pawn Selected method 2"));

}

void AClickableObject::NotifyActorBeginCursorOver()
{
	Super::NotifyActorBeginCursorOver();
	UE_LOG(LogTemp, Warning, TEXT("Pawn Hovered now"));
}

void AClickableObject::NotifyActorEndCursorOver()
{
	Super::NotifyActorEndCursorOver();
	UE_LOG(LogTemp, Warning, TEXT("Pawn Hovered End"));

}

