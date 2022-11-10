// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MSF_ProposalHUD.generated.h"

UCLASS()
class AMSF_ProposalHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMSF_ProposalHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

