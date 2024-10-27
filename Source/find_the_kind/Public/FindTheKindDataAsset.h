// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FindTheKindDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class FIND_THE_KIND_API UFindTheKindDataAsset : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	UTexture2D* CorrectParentAnimal;

	UPROPERTY(EditAnywhere)
	TArray<UTexture2D*> OtherAnimals;

	UPROPERTY(EditAnywhere)
	UTexture2D* ChildAnimal;

	UPROPERTY(EditAnywhere)
	UTexture2D* WinScreen;
};
