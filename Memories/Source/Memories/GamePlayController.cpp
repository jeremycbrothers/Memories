// Fill out your copyright notice in the Description page of Project Settings.

#include "GamePlayController.h"
#include "InteractableActor.h"
#include "GamePlayGameMode.h"
#include "MemoriesCharacter.h"
#include "GamePlayController.h"

void AGamePlayController::AddItemToInventoryById(FName Id)
{
	AGamePlayGameMode* GameMode = Cast <AGamePlayGameMode>(GetWorld()->GetAuthGameMode());
	UDataTable* ItemTable = GameMode->GetItemDb();

	FInventoryItem* ItemToAdd = ItemTable->FindRow<FInventoryItem>(Id, "");

	if (ItemToAdd)
	{
		Inventory.Add(*ItemToAdd);
	}
}

void AGamePlayController::Interact()
{
	if (CurrentInteractable)
	{
		CurrentInteractable->Interact(this);
	}
}

void AGamePlayController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Interact", IE_Pressed, this, &AGamePlayController::Interact);
}
