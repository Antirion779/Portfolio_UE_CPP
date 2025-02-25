// Copyright Epic Games, Inc. All Rights Reserved.

#include "Portfolio_UE_CPPGameMode.h"
#include "Portfolio_UE_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

APortfolio_UE_CPPGameMode::APortfolio_UE_CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
