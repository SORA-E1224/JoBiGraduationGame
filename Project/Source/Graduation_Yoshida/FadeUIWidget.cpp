// Fill out your copyright notice in the Description page of Project Settings.

#include "FadeUIWidget.h"

void UFadeUIWidget::NativeConstruct()
{
	Super::NativeConstruct();

	FadeBackImage = GetFadeBackImage();
	CurrentFadeMode = FadeMode::FM_FadeIn;
}

void UFadeUIWidget::NativeTick(const FGeometry & MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (CurrentFadeMode == FadeMode::FM_None)
	{
		return;
	}


}

