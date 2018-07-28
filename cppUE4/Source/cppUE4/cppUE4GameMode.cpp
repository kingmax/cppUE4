// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "cppUE4GameMode.h"
#include "cppUE4HUD.h"
#include "cppUE4Character.h"
#include "UObject/ConstructorHelpers.h"

AcppUE4GameMode::AcppUE4GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AcppUE4HUD::StaticClass();
}
