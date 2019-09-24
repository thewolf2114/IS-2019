// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanningAgent.h"
#include "EngineUtils.h"

// Sets default values
APlanningAgent::APlanningAgent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

APlanningAgent::~APlanningAgent()
{
	
}

// Called when the game starts or when spawned
void APlanningAgent::BeginPlay()
{
	Super::BeginPlay();
	
	for (TActorIterator<ASpawnPoint> ActorITR(GetWorld()); ActorITR; ++ActorITR)
	{
		ASpawnPoint* spawnPoint = *ActorITR;
		m_spawnPoints->Add(spawnPoint);
	}
}

void APlanningAgent::SpawnEnemy()
{
	
}

void APlanningAgent::PressedButton()
{
	m_timesPressed++;
}

// Called every frame
void APlanningAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

