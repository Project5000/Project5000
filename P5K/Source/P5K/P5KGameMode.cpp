// Copyright Epic Games, Inc. All Rights Reserved.

#include "P5KGameMode.h"
#include "P5KHUD.h"
#include "P5KCharacter.h"
#include "UObject/ConstructorHelpers.h"

AP5KGameMode::AP5KGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AP5KHUD::StaticClass();
}
