// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerController.h"
#include "Engine/World.h"
#include "GameFramework//Pawn.h"
#include "WorldCollision.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetSystemLibrary.h"

void AMyPlayerController::EnemySearch(float radius, ECollisionChannel traceChannel, bool IsVisible, BooleanCode& code, TArray<FHitResult>& outhits)
{
	FVector SweepStart = GetPawn()->GetActorLocation();
	FVector SweepEnd = GetPawn()->GetActorLocation();

	FCollisionShape ColSphere = FCollisionShape::MakeSphere(radius);

	if (IsVisible)
	{
		DrawDebugSphere(GetWorld(), GetPawn()->GetActorLocation(), ColSphere.GetSphereRadius(), 50, FColor::Emerald, false);
	}

	bool isHit = GetWorld()->SweepMultiByChannel(outhits, SweepStart, SweepEnd, FQuat::Identity, traceChannel, ColSphere);

	if (isHit)
	{
		code = BooleanCode::BC_True;
	}
	else
	{
		code = BooleanCode::BC_False;
	}
}

