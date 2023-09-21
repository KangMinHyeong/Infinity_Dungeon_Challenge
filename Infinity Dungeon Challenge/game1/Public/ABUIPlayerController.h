// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "game1.h"
#include "GameFramework/PlayerController.h"
#include "ABUIPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GAME1_API AABUIPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	
protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UUserWidget> UIWidgetClass;

	UPROPERTY()
		class UUserWidget* UIWidgetInstance;
	
};
