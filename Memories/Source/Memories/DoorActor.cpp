// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorActor.h"

ADoorActor::ADoorActor()
{
	DoorMessages =
	{
		"It's locked.",
		"I can't get it open.",
		"I unlocked it."
	};
	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>("DoorMesh");
	DoorId = FName("Please enter an id");
}
