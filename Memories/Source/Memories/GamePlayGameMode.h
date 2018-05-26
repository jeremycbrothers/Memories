// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GamePlayGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MEMORIES_API AGamePlayGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	class UDataTable* GetItemDb() const { return ItemDb; }
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Data Table")
		class UDataTable* ItemDb;
};
