// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SceneManager.h"
#include "FadeUIWidget.h"
#include "InheritedInterface.h"
#include "Engine/GameInstance.h"
#include "GloabalInstance.generated.h"

/**
 * 
 */
UCLASS()
class GRADUATION_YOSHIDA_API UGloabalInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadOnly, Category = "SceneManager")
		ASceneManager* manager;
	
	UPROPERTY(BlueprintReadOnly, Category = "FadeWidget")
		UFadeUIWidget* widget;

	UFUNCTION(BlueprintCallable, Category = "MyGame|Damage")
		int ApplyDamage(AActor* DamagedActor, int BaseDamage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass);
	
};
