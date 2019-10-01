// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SteamVRInputTestGameMode.h"
#include "SteamVRInputTestPlayerController.h"
#include "SteamVRInputTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASteamVRInputTestGameMode::ASteamVRInputTestGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASteamVRInputTestPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}