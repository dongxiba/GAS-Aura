// Copyright Dongxiba


#include "Player/AuraPlayerState.h"
#include "GAS/AuraAbilitySystemComponent.h"
#include "GAS/AuraAttributeSet.h"

AAuraPlayerState::AAuraPlayerState()
{
	NetUpdateFrequency = 100.f;

	AbilitySystemComponent = CreateDefaultSubobject<UAuraAbilitySystemComponent>(FName(TEXT("AbilitySystemComponent")));
	AbilitySystemComponent->SetIsReplicated(true);

	AttributeSet = CreateDefaultSubobject<UAuraAttributeSet>(FName(TEXT("AttributeSet")));
}

UAbilitySystemComponent* AAuraPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
