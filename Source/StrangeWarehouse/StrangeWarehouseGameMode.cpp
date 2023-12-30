// Copyright Epic Games, Inc. All Rights Reserved.

#include "StrangeWarehouseGameMode.h"
#include "StrangeWarehouseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStrangeWarehouseGameMode::AStrangeWarehouseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
