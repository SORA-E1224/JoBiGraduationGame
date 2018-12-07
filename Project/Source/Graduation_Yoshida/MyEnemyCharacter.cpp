// Fill out your copyright notice in the Description page of Project Settings.

#include "MyEnemyCharacter.h"
#include "Classes/Components/SkeletalMeshComponent.h"


// Sets default values
AMyEnemyCharacter::AMyEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyEnemyCharacter::GetActorEyesViewPoint(FVector& Location, FRotator& Rotation) const
{
	if (!GetMesh()->DoesSocketExist(SightSocketName))
	{
		return;
	}

	Location = GetMesh()->GetSocketLocation(SightSocketName);
	FRotator rotBuff = GetMesh()->GetSocketRotation(SightSocketName);
	rotBuff.Pitch = 0;
	rotBuff.Roll = 0;
	Rotation = rotBuff;
}