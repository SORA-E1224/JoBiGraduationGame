// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Image.h"
#include "FadeUIWidget.generated.h"

UENUM(BlueprintType)
enum class FadeMode : uint8
{
	FM_None UMETA(Hidden),
	FM_FadeIn UMETA(DisplayName = "FadeIn"),
	FM_FadeOut UMETA(DisplayName = "FadeOut"),
	FM_FadeEnd UMETA(Hidden),
	FM_Max UMETA(Hidden)
};

DECLARE_DYNAMIC_DELEGATE(FFadeDelegate);

/**
 *
 */
UCLASS()
class GRADUATION_YOSHIDA_API UFadeUIWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent, Category = "FadeWidget")
		UImage* GetFadeBackImage() const;


private:
	UImage* FadeBackImage;
	FadeMode CurrentFadeMode;
	float FadeTimer;
};
