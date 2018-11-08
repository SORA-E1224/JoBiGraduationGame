// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerController.h"
#include "Engine/World.h"
#include "GameFramework//Pawn.h"
#include "WorldCollision.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetSystemLibrary.h"

void AMyPlayerController::EnemySearch(AActor*& target, float radius, ECollisionChannel traceChannel, bool IsVisible, BooleanCode& code, TArray<FHitResult>& outhits)
{
	FVector SweepStart = GetPawn()->GetActorLocation();
	FVector SweepEnd = GetPawn()->GetActorLocation();

	FCollisionShape ColSphere = FCollisionShape::MakeSphere(radius);

	if (IsVisible)
	{
		DrawDebugSphere(GetWorld(), GetPawn()->GetActorLocation(), ColSphere.GetSphereRadius(), 50, FColor::Emerald, true, 0.5f);
	}

	bool isHit = GetWorld()->SweepMultiByChannel(outhits, SweepStart, SweepEnd, FQuat::Identity, traceChannel, ColSphere);

	if (isHit)
	{
		code = BooleanCode::BC_True;
		return;
	}
	else
	{
		code = BooleanCode::BC_False;
		return;
	}
}

void AMyPlayerController::SetTarget(AActor*& target, TArray<FHitResult> const& hits, BooleanCode& code)
{
	FVector PlayerLocation = GetPawn()->GetActorLocation();
	float targetDist = FVector::Distance(target->GetActorLocation(), PlayerLocation);
	for (auto h : hits)
	{
		AActor* hitActor = h.GetActor();

		if (target == nullptr)
		{
			target = hitActor;
			continue;
		}

		break;

		if (target == hitActor)
		{
			target = nullptr;
			code = BooleanCode::BC_False;
			return;
		}

		float hitDist = FVector::Distance(hitActor->GetActorLocation(), PlayerLocation);
		if (hitDist < targetDist)
		{
			target = hitActor;
		}

	}
	code = BooleanCode::BC_True;
}