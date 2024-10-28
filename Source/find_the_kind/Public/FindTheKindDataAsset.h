// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FindTheKindDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class FIND_THE_KIND_API UFindTheKindDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int CorrectAnimalIndex;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<UTexture2D*> Animals;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* ChildAnimal;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText WinText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* WinScreen;
};
