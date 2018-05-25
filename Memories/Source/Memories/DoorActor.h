// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "DoorModel.h"
#include "DoorActor.generated.h"

UENUM(BlueprintType)
enum class FDoorType : uint8
{
	FUnknown,
	FLocked,
	FOpend,
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
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* DoorMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DoorId;

	UFUNCTION(BlueprintCallable)
		FString PrintDoorMessage() const { return FString::Printf(TEXT("Door")); }

private:
	TArray<FString>DoorMessages;

};
