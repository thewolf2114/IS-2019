// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanningAgent.h"

// Sets default values
APlanningAgent::APlanningAgent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_frustration = 0;
	m_shootCount = 0;
	m_jumpCount = 0;

	m_maxEnemy = 10;
	m_currEnemy = 0;
	m_enemyHealth = 100;
	m_enemyAggression = 0;
	m_enemySpeed = 500;
}

// Called when the game starts or when spawned
void APlanningAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlanningAgent::SpawnEnemy()
{
}

// Called every frame
void APlanningAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlanningAgent::DetectFire()
{
	m_shootCount++;
}

void APlanningAgent::DetectJump()
{
	m_jumpCount++;
}

void APlanningAgent::MoveForward(float value)
{
}

void APlanningAgent::MoveRight(float value)
{
}

