// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "DoorActor.generated.h"

UENUM(BlueprintType)
enum class FDoorType : uint8
{
	FDefault,
	FLocked,
	FOpened,
	FInaccessable
};

/**
 * 
 */
UCLASS()
class MEMORIES_API ADoorActor : public AInteractableActor
{
	GENERATED_BODY()
	
public:
	ADoorActor();

protected:
	UPROPERTY(EditAnywhere)
		FDoorType DoorType;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* DoorMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName DoorId;
};
