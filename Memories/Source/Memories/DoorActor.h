// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "DoorActor.generated.h"

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
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* DoorMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DoorId;
};
