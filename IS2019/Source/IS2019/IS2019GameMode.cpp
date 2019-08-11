// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "IS2019GameMode.h"
#include "IS2019HUD.h"
#include "IS2019Character.h"
#include "UObject/ConstructorHelpers.h"

AIS2019GameMode::AIS2019GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AIS2019HUD::StaticClass();
}
