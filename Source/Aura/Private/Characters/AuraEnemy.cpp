// Copyright Dongxiba


#include "Characters/AuraEnemy.h"

AAuraEnemy::AAuraEnemy()
{
	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECR_Block);
}

void AAuraEnemy::HighlightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(250);

	Weapon->SetRenderCustomDepth(true);
	Weapon->SetCustomDepthStencilValue(250);
}

void AAuraEnemy::UnHightlightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
}
