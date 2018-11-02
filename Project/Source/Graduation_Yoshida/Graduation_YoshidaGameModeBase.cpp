// Fill out your copyright notice in the Description page of Project Settings.

#include "Graduation_YoshidaGameModeBase.h"
#include "UIPlayerController.h"

AGraduation_YoshidaGameModeBase::AGraduation_YoshidaGameModeBase()
{
	DefaultPawnClass = PlayerPawn;
	PlayerControllerClass = AUIPlayerController::StaticClass();
	//PlayerStateClass = nullptr;
	//GameStateClass = nullptr;

	GameSessionClass = nullptr;
	SpectatorClass = nullptr;
	ReplaySpectatorPlayerControllerClass = nullptr;
	ServerStatReplicatorClass = nullptr;
}
