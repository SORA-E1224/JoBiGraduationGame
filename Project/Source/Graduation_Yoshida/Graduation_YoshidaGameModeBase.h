// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Graduation_YoshidaGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class GRADUATION_YOSHIDA_API AGraduation_YoshidaGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGraduation_YoshidaGameModeBase();

	UPROPERTY(EditAnywhere, Category = "Default")
		TSubclassOf<APawn> PlayerPawn;

};
