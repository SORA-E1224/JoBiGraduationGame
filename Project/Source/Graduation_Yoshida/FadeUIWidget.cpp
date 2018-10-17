// Fill out your copyright notice in the Description page of Project Settings.

#include "FadeUIWidget.h"

// Called when Widget Create
void UFadeUIWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Sets Default value
	FadeBackImage = GetFadeBackImage();
	if (!FadeBackImage)
	{
		return;
	}
	FadeBackImage->SetVisibility(ESlateVisibility::Hidden);
	CurrentFadeMode = FadeMode::FM_None;
	FadeTimer = 0.0f;
	DiffAlphaPerSecond = 0.0f;
	if (FadeEndEvent.Delegate.IsBound())
	{
		FadeEndEvent.Delegate.Unbind();
	}


}

// Called every tick
void UFadeUIWidget::NativeTick(const FGeometry & MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (!FadeBackImage)
	{
		return;
	}

	// Return if Not Fade
	if (CurrentFadeMode == FadeMode::FM_None)
	{
		return;
	}

	// Call FadeEndEvent
	if (CurrentFadeMode == FadeMode::FM_FadeEnd)
	{
		if (FadeEndEvent.Delegate.IsBound())
		{
			FadeEndEvent.Delegate.Execute();
			FadeEndEvent.Delegate.Unbind();
		}
		CurrentFadeMode = FadeMode::FM_None;
		return;
	}

	// Change FadeImage Alpha according to Current FadeMode
	FadeTimer -= InDeltaTime;
	FLinearColor setColor = FadeBackImage->ColorAndOpacity;
	setColor.A += (DiffAlphaPerSecond * InDeltaTime);

	if (FadeTimer <= 0.0f)
	{
		FadeTimer = 0.0f;
		if (CurrentFadeMode == FadeMode::FM_FadeIn)
		{
			setColor.A = 0.0f;
			FadeBackImage->SetVisibility(ESlateVisibility::Hidden);
		}
		else
		{
			setColor.A = 1.0f;
		}
		CurrentFadeMode = FadeMode::FM_FadeEnd;
	}
	FadeBackImage->SetColorAndOpacity(setColor);

}

// Fade Start Function
void UFadeUIWidget::StartFade(FadeMode mode, float time, FLinearColor color, FFadeEvent fadeEndEvent)
{
	if (!FadeBackImage)
	{
		return;
	}

	// Return if Fading
	if (CurrentFadeMode != FadeMode::FM_None)
	{
		return;
	}

	// Check FadeMode is Correct
	if (mode != FadeMode::FM_FadeIn && mode != FadeMode::FM_FadeOut)
	{
		return;
	}

	// Assign FadeMode CurrentFadeMode
	CurrentFadeMode = mode;

	// Modify FadeTImer to Positive Number
	FadeTimer = FMath::Max(time, FLT_EPSILON);
	
	// Bind Fade End Event
	if (fadeEndEvent.Delegate.IsBound())
	{
		FadeEndEvent = fadeEndEvent;
	}

	// Calc Different ColorAlpha Per Second
	DiffAlphaPerSecond = 1.0f / FadeTimer;

	// Assign FadeColor and Set Alpha according to FadeMode
	FLinearColor setColor = color;
	FadeBackImage->SetVisibility(ESlateVisibility::Visible);
	if (mode == FadeMode::FM_FadeIn)
	{
		setColor.A = 1.0f;
		DiffAlphaPerSecond *= -1.0f;
	}
	else
	{
		setColor.A = 0.0f;
	}
	FadeBackImage->SetColorAndOpacity(setColor);

}

