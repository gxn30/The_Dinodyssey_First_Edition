// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class DINO_PROJECT_V1_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

		// foto test begin

		UFUNCTION(Exec, BlueprintCallable)
		static void TakeScreenShot(bool bCaptureUI, bool bAddSuffix);

	// foto test eind
	
};


