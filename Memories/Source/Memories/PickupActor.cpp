// Fill out your copyright notice in the Description page of Project Settings.

#include "PickupActor.h"

APickupActor::APickupActor()
{
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>("PickupMesh");
	ItemId = FName("Please enter an id");
	PickupName = "Please enter a name";
}


