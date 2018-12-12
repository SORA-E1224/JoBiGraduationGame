// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

UENUM(BlueprintType)
enum class BooleanCode : uint8
{
	BC_True,
	BC_False
};

/**
 *
 */
UCLASS()
class GRADUATION_YOSHIDA_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "MyGame|Player", meta = (ExpandEnumAsExecs = "code"))
		void EnemySearch(UPARAM(ref)AActor*& target, float radius, ECollisionChannel traceChannel, bool IsVisible, BooleanCode& code, TArray<FHitResult>& outhits);

private:
	void SetTarget(AActor*& target, TArray<FHitResult> const& hits, BooleanCode& code);

};
