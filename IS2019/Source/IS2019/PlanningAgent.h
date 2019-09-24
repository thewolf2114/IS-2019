// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Containers/Array.h"
#include "EnemyAgent1.h"
#include "SpawnPoint.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlanningAgent.generated.h"

UCLASS()
class IS2019_API APlanningAgent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlanningAgent();
	~APlanningAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void SpawnEnemy();
	void PressedButton();

	TArray<ASpawnPoint*>* m_spawnPoints;
	AEnemyAgent1* m_basicEnemy;
	int m_timesPressed;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
