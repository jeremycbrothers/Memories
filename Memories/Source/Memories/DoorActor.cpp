// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorActor.h"

ADoorActor::ADoorActor()
{
	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>("DoorMesh");
	DoorId = FName("Please enter an id");
	DoorName = "Enter a name";
}

FString ADoorActor::GetResultText() const
{
	FDoorType Door = GetDoorType();
	FString ResultText;
	switch (Door)
	{
	case FDoorType::FDefault:
		ResultText = FString::Printf(TEXT("Default"));
		break;
	case FDoorType::FLocked:
		ResultText = FString::Printf(TEXT("Locked"));
		break;
	case FDoorType::FOpened:
		ResultText = FString::Printf(TEXT("Opened"));
		break;
	case FDoorType::FInaccessable:
		ResultText = FString::Printf(TEXT("Inaccessable"));
		break;
	}
	return ResultText;
}
