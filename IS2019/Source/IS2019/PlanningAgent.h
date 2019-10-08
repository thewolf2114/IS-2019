// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SpawnPoint.h"
#include "EnemyAgent1.h"
#include "Containers/Array.h"
#include "GameFramework/Actor.h"
#include "PlanningAgent.generated.h"

UCLASS()
class IS2019_API APlanningAgent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlanningAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void SpawnEnemy();

	// Frustration variables
	float m_frustration;
	int m_shootCount;
	int m_jumpCount;

	// Enemy variables
	int m_maxEnemy;
	int m_currEnemy;
	float m_enemyHealth;
	float m_enemyAggression;
	float m_enemySpeed;

	UPROPERTY(EditAnywhere, Category = "Spawn Enemy")
	TSubclassOf<AEnemyAgent1> m_enemyClass;
	TArray<ASpawnPoint> m_spawnPoints;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void DetectFire();
	void DetectJump();
	void MoveForward(float value);
	void MoveRight(float value);
};
