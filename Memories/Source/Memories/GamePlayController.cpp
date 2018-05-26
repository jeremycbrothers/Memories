// Fill out your copyright notice in the Description page of Project Settings.

#include "GamePlayController.h"
#include "InteractableActor.h"
#include "DoorActor.h"
#include "GamePlayGameMode.h"
#include "MemoriesCharacter.h"
#include "GamePlayController.h"

/** This is how you can read data from a table and use it in code */
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

void AGamePlayController::CanInsertIntoController()
{
	FString Name = CurrentInteractable->GetName();
	UE_LOG(LogTemp, Warning, TEXT("This function is the result of interacting with a child class %s derived from InteractableActor.h"), *Name);

	if (CurrentInteractable->IsA<ADoorActor>())
	{
		UE_LOG(LogTemp, Warning, TEXT("It's A door!"));

	}
}

void AGamePlayController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Interact", IE_Pressed, this, &AGamePlayController::Interact);
}
