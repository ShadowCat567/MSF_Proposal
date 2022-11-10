// Copyright Epic Games, Inc. All Rights Reserved.

#include "MSF_ProposalGameMode.h"
#include "MSF_ProposalHUD.h"
#include "MSF_ProposalCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMSF_ProposalGameMode::AMSF_ProposalGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMSF_ProposalHUD::StaticClass();
}
