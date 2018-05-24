// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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
	
	
};
