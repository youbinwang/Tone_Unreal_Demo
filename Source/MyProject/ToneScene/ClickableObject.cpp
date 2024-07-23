// Fill out your copyright notice in the Description page of Project Settings.


#include "ClickableObject.h"


// Sets default values
AClickableObject::AClickableObject()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// SetActorTickEnabled(false);
	ClickableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = ClickableMesh;
	// ClickableMesh->SetupAttachment(GetParentComponent());
	
	// ClickableMesh->SetSimulatePhysics(true);
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
	if(isHovered)
	{
		if(HoverIntervalTime <=0)
		{
			SetHoverStatus();
			HoverIntervalTime = HoverInterval;
		}
		HoverIntervalTime -= DeltaTime;
	}
	
}

void AClickableObject::NotifyActorOnClicked(FKey ButtonPressed)
{
	Super::NotifyActorOnClicked(ButtonPressed);
	UE_LOG(LogTemp, Display, TEXT("Pawn Selected method 2"));
	// FVector curLocation = ClickableMesh->GetRelativeLocation();
	// ClickableMesh->SetRelativeLocation(curLocation + FVector(0.f, 0.f, 100.f));
	// ClickableMesh->AddForce({ .0f, .0f,  Velocity* 500.f }, NAME_None, true);

}

void AClickableObject::NotifyActorBeginCursorOver()
{
	if(!isHovered) {
		Super::NotifyActorBeginCursorOver();
		UE_LOG(LogTemp, Display, TEXT("Pawn Hovered now"));
		isHovered = true;
	}
}

void AClickableObject::NotifyActorEndCursorOver()
{
	Super::NotifyActorEndCursorOver();
	UE_LOG(LogTemp, Display, TEXT("Pawn Hovered End"));
	isHovered = false;
}

void AClickableObject::SetHoverStatus()
{
	ClickableMesh->AddImpulse({ .0f, .0f,  HoverVelocity* 500.f }, NAME_None, true);

}



