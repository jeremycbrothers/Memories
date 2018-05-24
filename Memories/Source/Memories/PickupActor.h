// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "PickupActor.generated.h"

/**
 * 
 */
UCLASS()
class MEMORIES_API APickupActor : public AInteractableActor
{
	GENERATED_BODY()
	
public:

	APickupActor();

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* PickupMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ItemId;
};
