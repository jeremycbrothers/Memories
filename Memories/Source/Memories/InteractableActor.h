// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableActor.generated.h"

UCLASS()
class MEMORIES_API AInteractableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableActor();

	/** Implemented in blueprints */
	UFUNCTION(BlueprintImplementableEvent)
	void Interact(APlayerController* Controller);

	UFUNCTION(BlueprintCallable, Category = "Interact")
		virtual FString GetName() const { return Name; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	FString Name;
private:

	UPROPERTY(EditDefaultsOnly)
	FString Action;


};
