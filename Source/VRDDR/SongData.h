// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Sound/SoundBase.h"
#include "SongStep.h"

#include "SongData.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class VRDDR_API USongData : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Metadata")
	FText SongName;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Audio")
	USoundBase* SoundCue;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Audio")
	TArray<FSongStep> Steps;

};
