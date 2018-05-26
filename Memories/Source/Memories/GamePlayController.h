// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MemoriesCharacter.h"
#include "GameFramework/PlayerController.h"
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

	/** 
		This is a testing function used in to determine outputs recieved from
		whatever is the current interactable whether it's a door, and item, file, etc.
	*/
	UFUNCTION(BlueprintCallable, Category = "Utils")
		void CanInsertIntoController();

protected:
	virtual void SetupInputComponent() override;
};
