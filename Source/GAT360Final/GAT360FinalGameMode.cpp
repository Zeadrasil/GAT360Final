// Copyright Epic Games, Inc. All Rights Reserved.

#include "GAT360FinalGameMode.h"
#include "GAT360FinalCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGAT360FinalGameMode::AGAT360FinalGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
