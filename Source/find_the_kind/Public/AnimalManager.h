// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AnimalManager.generated.h"

UENUM(BlueprintType)
enum EAnimalType {
	Penguino,
	Sealo,
	PenguinoSimple,
	Chioniso
};

USTRUCT(BlueprintType)
struct FAnimalPair : public FTableRowBase {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* KidPicture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* MomPicture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAnimalType> Kind;
};

UCLASS(BlueprintType, Blueprintable)
class FIND_THE_KIND_API AAnimalManager : public AActor
{
	GENERATED_BODY()

	TArray<FAnimalPair> AnimalPairs;
	void InitAnimalPairs();

public:
	// Sets default values for this actor's properties
	AAnimalManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
