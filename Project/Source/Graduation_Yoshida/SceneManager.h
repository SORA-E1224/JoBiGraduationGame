// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SceneManager.generated.h"

UENUM(BlueprintType)
enum class SceneTags : uint8
{
	ST_None UMETA(Hidden),
	ST_Logo UMETA(DisplayName = "Logo"),
	ST_Title UMETA(DisplayName = "Title"),
	ST_GameMain UMETA(DisplayName = "GameMain"),
	ST_Result UMETA(DisplayName = "Result"),
	ST_MAX UMETA(Hidden)
};

UCLASS()
class GRADUATION_YOSHIDA_API ASceneManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASceneManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, Category = "Default")
	SceneTags BeginScene;

	UFUNCTION(BlueprintCallable, Category = "SceneManager")
	void SetScene(SceneTags NextScene);

private:
	SceneTags CurrentScene;
};
