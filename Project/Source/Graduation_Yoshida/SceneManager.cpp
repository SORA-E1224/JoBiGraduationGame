// Fill out your copyright notice in the Description page of Project Settings.

#include "SceneManager.h"
#include "Kismet//GameplayStatics.h"

// Sets default values
ASceneManager::ASceneManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	NextScene = SceneTags::ST_None;
	CurrentScene = SceneTags::ST_None;
}

// Called when the game starts or when spawned
void ASceneManager::BeginPlay()
{
	Super::BeginPlay();
	
	if (FadeWidget != nullptr)
	{
		ptrWidget = CreateWidget<UFadeUIWidget>(GetWorld(), FadeWidget);
		if (ptrWidget != nullptr)
		{
			ptrWidget->AddToViewport(7);
		}
	}

	NextScene = BeginScene;
	SetScene();
}

void ASceneManager::SetNextScene(SceneTags scene)
{
	NextScene = scene;
}

void ASceneManager::SetScene()
{
	if (CurrentScene != SceneTags::ST_None)
	{
		FName unloadSceneName = "";
		switch (CurrentScene)
		{
		case SceneTags::ST_Logo:
			unloadSceneName = "LogoMap";
			break;
		case SceneTags::ST_Title:
			unloadSceneName = "TitleMap";
			break;
		case SceneTags::ST_GameMain:
			unloadSceneName = "GameMainMap";
			break;
		case SceneTags::ST_Result:
			unloadSceneName = "ResultMap";
			break;
		default:
			break;
		}

		if (unloadSceneName != "")
		{
			FLatentActionInfo LatentInfo;
			UGameplayStatics::UnloadStreamLevel(this, unloadSceneName, LatentInfo, true);
		}
	}

	FName loadSceneName = "";
	switch (NextScene)
	{
	case SceneTags::ST_Logo:
		loadSceneName = "LogoMap";
		break;
	case SceneTags::ST_Title:
		loadSceneName = "TitleMap";
		break;
	case SceneTags::ST_GameMain:
		loadSceneName = "GameMainMap";
		break;
	case SceneTags::ST_Result:
		loadSceneName = "ResultMap";
		break;
	default:
		break;
	}

	if (loadSceneName != "")
	{
		FLatentActionInfo LatentInfo;
		UGameplayStatics::LoadStreamLevel(this, loadSceneName, true, true, LatentInfo);
		CurrentScene = NextScene;
		NextScene = SceneTags::ST_None;
	}
}