// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Image.h"
#include "FadeUIWidget.generated.h"

UENUM(BlueprintType)
enum class FadeMode : uint8
{
	FM_None UMETA(DisplayName = "None"),
	FM_FadeIn UMETA(DisplayName = "FadeIn"),
	FM_FadeOut UMETA(DisplayName = "FadeOut"),
	FM_FadeEnd UMETA(Hidden),
	FM_Max UMETA(Hidden)
};

DECLARE_DYNAMIC_DELEGATE(FFadeDelegate);

USTRUCT(BlueprintType)
struct FFadeEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
		FFadeDelegate Delegate;

	FFadeEvent() :Delegate()
	{
	}
};

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

	// Get FadeBackImage Assigned by BP
	UFUNCTION(BlueprintImplementableEvent, Category = "FadeWidget")
		UImage* GetFadeBackImage() const;

	// Fade Start Func
	UFUNCTION(BlueprintCallable, Category = "FadeWidget")
		void StartFade(FadeMode mode, float time, FLinearColor color, FFadeEvent fadeEndEvent);

	UPROPERTY(BlueprintReadOnly, Category = "FadeWidget")
		FadeMode CurrentFadeMode;

private:
	UImage* FadeBackImage;		// Fade Image Assigned by BP

	float FadeTimer;
	float DiffAlphaPerSecond;
	FFadeEvent FadeEndEvent;

};
