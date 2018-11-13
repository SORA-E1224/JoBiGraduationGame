// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleFunctionLibrary.h"
#include "InheritedInterface.h"


int UBattleFunctionLibrary::ApplyDamage(AActor* DamagedActor, int BaseDamage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass)
{

	TArray<FImplementedInterface> inters = DamagedActor->GetClass()->Interfaces;

	if (inters.Num() == 0)
	{
		return -1;
	}

	IInheritedInterface* obj = (IInheritedInterface*)inters[0].Class;

	if (!obj)
	{
		return -1;
	}

	if (!DamagedActor->bCanBeDamaged)
	{
		return -1;
	}

	IInheritedInterface::Execute_ReceiveDamage(DamagedActor, BaseDamage, DamageTypeClass.GetDefaultObject(), EventInstigator, DamageCauser);

	return BaseDamage;
}

