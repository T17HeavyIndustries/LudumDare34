// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "LudumDare34HUD.generated.h"

UCLASS()
class ALudumDare34HUD : public AHUD
{
	GENERATED_BODY()

public:
	ALudumDare34HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

