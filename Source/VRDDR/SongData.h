// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SongData.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class VRDDR_API USongData : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Metadata")
	FText songName;
	
	
};
