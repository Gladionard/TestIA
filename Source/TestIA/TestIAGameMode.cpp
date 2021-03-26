// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestIAGameMode.h"
#include "TestIAHUD.h"
#include "TestIACharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestIAGameMode::ATestIAGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestIAHUD::StaticClass();
}
