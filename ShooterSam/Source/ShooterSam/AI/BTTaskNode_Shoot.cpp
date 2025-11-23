// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTaskNode_Shoot.h"

#include "ShooterAI.h"

UBTTaskNode_Shoot::UBTTaskNode_Shoot()
{
	NodeName = TEXT("Shoot At Player");
}

EBTNodeResult::Type UBTTaskNode_Shoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (AShooterAI* OwnerController = Cast<AShooterAI>(OwnerComp.GetAIOwner()))
	{
		AShooterSamCharacter* OwnerCharacter = OwnerController->MyCharacter;
		AShooterSamCharacter* PlayerCharacter = OwnerController->PlayerCharacter;
		if (OwnerCharacter && PlayerCharacter && PlayerCharacter->IsAlive)
		{
			OwnerCharacter->DoShoot();
			return EBTNodeResult::Succeeded;
		} 
	}
	return EBTNodeResult::Failed;
}
