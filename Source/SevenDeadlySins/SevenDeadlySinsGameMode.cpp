// Copyright Epic Games, Inc. All Rights Reserved.

#include "SevenDeadlySinsGameMode.h"
#include "SevenDeadlySinsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASevenDeadlySinsGameMode::ASevenDeadlySinsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
