// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MemoriesCharacter.h"
#include "GamePlayController.generated.h"

/**
 * 
 */
UCLASS()
class MEMORIES_API AGamePlayController : public APlayerController
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintREadWrite, VisibleAnywhere)
	class AInteractableActor* CurrentInteractable;
	
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	TArray<FInventoryItem> Inventory;

	UFUNCTION(BlueprintCallable, Category = "Utils")
	void AddItemToInventoryById(FName Id);	

	UFUNCTION(BlueprintCallable, Category = "Utils")
	void Interact();

protected:
	virtual void SetupInputComponent() override;
};
