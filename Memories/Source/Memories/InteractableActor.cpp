// Fill out your copyright notice in the Description page of Project Settings.

#include "InteractableActor.h"


// Sets default values
AInteractableActor::AInteractableActor()
{
	Name = "Name not set";
	Action = "Interact";
}

// Called when the game starts or when spawned
void AInteractableActor::BeginPlay()
{
	Super::BeginPlay();
	
}
