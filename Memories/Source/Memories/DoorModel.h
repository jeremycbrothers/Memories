// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DoorModel.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FDoor : public FTableRowBase
{
	GENERATED_BODY()

		// Default Door
		FDoor()
	{
		Name = FText::FromString("Door");
		Action = FText::FromString("Open");
		bCanBeOpened = false;
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName DoorId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText Action;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bCanBeOpened;

	bool operator==(const FDoor& Door) const
	{
		if (DoorId == Door.DoorId) { return true; }
		else { return false; }
	}
};
