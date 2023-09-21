// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "game1.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GAME1_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UABHUDWidget> HUDWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UABGamePlayWidget> MenuWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UABGameplayResultWidget> ResultWidgetClass;

public:
	AABPlayerController();

	virtual void PostInitializeComponents() override;
	virtual void Possess(APawn *aPawn) override;
	
	class UABHUDWidget* GetHUDWidget() const;
	void NPCKill(class AABCharacter* KilledNPC) const;
	void AddGameScore() const;

	void ChangeInputMode(bool bGameMode = true);
	void ShowResultUI();

private:
	UPROPERTY()
		class UABHUDWidget* HUDWidget;
	UPROPERTY()
		class AABPlayerState* ABPlayerState;
	
	void OnGamePause();

	UPROPERTY()
		class UABGamePlayWidget* MenuWidget;
	UPROPERTY()
		class UABGameplayResultWidget* ResultWidget;

	FInputModeGameOnly GameInputMode;
	FInputModeUIOnly UIInputMode;
	
};
