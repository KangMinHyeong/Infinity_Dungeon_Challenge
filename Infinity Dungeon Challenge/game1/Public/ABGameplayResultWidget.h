// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "game1.h"
#include "ABGamePlayWidget.h"
#include "ABGameplayResultWidget.generated.h"

/**
 * 
 */
UCLASS()
class GAME1_API UABGameplayResultWidget : public UABGamePlayWidget
{
	GENERATED_BODY()
	
public:
	void BindGameState(class AABGameState* GameState);

protected:
	virtual void NativeConstruct() override;
	
private:
	TWeakObjectPtr<class AABGameState> CurrentGameState;

};
