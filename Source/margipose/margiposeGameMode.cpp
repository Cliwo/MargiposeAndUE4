// Copyright Epic Games, Inc. All Rights Reserved.

#include "margiposeGameMode.h"
#include "margiposeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmargiposeGameMode::AmargiposeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
