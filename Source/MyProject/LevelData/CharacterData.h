#pragma once


#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterData.generated.h"

UCLASS(Blueprintable)
class MYPROJECT_API UCharacterData: public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Character")
	TSoftObjectPtr<USkeletalMesh> SkeletelMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Character")
	TSoftObjectPtr<USkeleton> Skeleton;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Character")
	TSoftObjectPtr<UPhysicsAsset> PhysicsAsset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Character")
	TSoftObjectPtr<UAnimationAsset> AnimationAsset;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("Character", GetFName());
	}
};
