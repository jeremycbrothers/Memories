// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorActor.h"

ADoorActor::ADoorActor()
{
	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>("DoorMesh");
	DoorId = FName("Please enter an id");
	DoorName = "Enter a name";
}