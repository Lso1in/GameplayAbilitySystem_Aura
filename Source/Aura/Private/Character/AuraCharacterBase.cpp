// Lso


#include "Character/AuraCharacterBase.h"

AAuraCharacterBase::AAuraCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon"); //�����������
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket")); //������������뵽��Ӧ������
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision); //�����������û����ײ
}

UAbilitySystemComponent* AAuraCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UAttributeSet* AAuraCharacterBase::GetAttributeSet() const
{
	return AttributeSet;
}

void AAuraCharacterBase::InitAbilityActorInfo()
{
}


