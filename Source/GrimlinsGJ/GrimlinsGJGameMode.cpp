// Copyright Epic Games, Inc. All Rights Reserved.

#include "GrimlinsGJGameMode.h"
#include "GrimlinsGJHUD.h"
#include "GrimlinsGJCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGrimlinsGJGameMode::AGrimlinsGJGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGrimlinsGJHUD::StaticClass();
}
