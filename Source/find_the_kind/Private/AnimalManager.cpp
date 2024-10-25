// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimalManager.h"

void AAnimalManager::InitAnimalPairs()
{
    // Reference to the DataTable asset
    UDataTable* MyDataTable = LoadObject<UDataTable>(nullptr, TEXT("/Game/find_the_kind/blueprints/AnimalsTable.AnimalsTable"));

    if (MyDataTable)
    {
        TMap<FName, uint8*> RowMap = MyDataTable->GetRowMap();

        // Iterate over each row in the DataTable
        for (const TPair<FName, uint8*>& RowPair : RowMap)
        {
            // Cast the row data to your specific struct type
            FAnimalPair* Row = (FAnimalPair*)RowPair.Value;

            if (Row)
            {
                AnimalPairs.Add(*Row);
            }
        }
    }
    else {
        UE_LOG(LogTemp, Error, TEXT("table not found"));
    }
}

// Sets default values
AAnimalManager::AAnimalManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAnimalManager::BeginPlay()
{
	Super::BeginPlay();
	
	InitAnimalPairs();

}

// Called every frame
void AAnimalManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

