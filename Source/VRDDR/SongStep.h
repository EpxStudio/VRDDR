// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SongStep.generated.h"

UENUM(BlueprintType)
enum class ESongStepType : uint8 {
	ESST_Left		UMETA(DisplayName="Left"),
	ESST_Right		UMETA(DisplayName="Right"),
	ESST_Up			UMETA(DisplayName="Up"),
	ESST_Down		UMETA(DisplayName="Down")
};

/**
 * 
 */
USTRUCT(BlueprintType)
struct VRDDR_API FSongStep
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ESongStepType Type;
	
};
