// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "game1.h"
#include "GameFramework/GameStateBase.h"
#include "ABGameState.generated.h"

/**
 * 
 */
UCLASS()
class GAME1_API AABGameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	AABGameState();

public:
	int32 GetTotalGameScore() const;
	void AddGameScore();

	void SetGameCleared();
	bool IsGameCleared() const;

private:
	UPROPERTY(Transient)
		int32 TotalGameScore;
	
	UPROPERTY(Transient)
		bool bGameCleared;
	
};
