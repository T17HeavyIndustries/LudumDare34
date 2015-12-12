// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "LudumDare34.h"
#include "LudumDare34GameMode.h"
#include "LudumDare34HUD.h"
#include "LudumDare34Character.h"

ALudumDare34GameMode::ALudumDare34GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	//HUDClass = ALudumDare34HUD::StaticClass();
}
