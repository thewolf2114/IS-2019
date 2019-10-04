// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Containers/Array.h"
#include "Classes/Engine/World.h"
#include "EnemyAgent1.h"
#include "SpawnPoint.h"
#include "CoreMinimal.h"
#include "Engine.h"
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

	UPROPERTY(Editanywhere, Category = "Enemy Spawn")
	TSubclassOf<class AEnemyAgent1> m_basicEnemyClass;

	TArray<ASpawnPoint*>* m_spawnPoints;
	int m_timesPressed;
	float m_spawnTimer;
	float m_inputTimer;
	int m_enemiesSpawned;

	UPROPERTY(Editanywhere, Category = "Enemy Spawn")
	int m_maxEnemies;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void PressedButton();
	void EnemyDied();
};
