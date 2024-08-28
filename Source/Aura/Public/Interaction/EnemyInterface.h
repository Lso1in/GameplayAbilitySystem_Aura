// Lso

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EnemyInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEnemyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AURA_API IEnemyInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//纯虚函数，基类不实现这个函数，由子类提供实现，作为接口使用，任何实现这个接口的类都需要override这个函数
	//对一个类添加纯虚函数，那么这个类就变成了抽象类
	virtual void HighlightActor() = 0;
	virtual void UnHighlightActor() = 0; 
};
