// Lso


#include "Character/AuraCharacterBase.h"

AAuraCharacterBase::AAuraCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon"); //创建武器组件
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket")); //将武器组件插入到对应插座中
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision); //设置武器组件没有碰撞
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


