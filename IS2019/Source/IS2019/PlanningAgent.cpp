// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanningAgent.h"
#include "EngineUtils.h"


// Sets default values
APlanningAgent::APlanningAgent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_spawnTimer = 1;
	m_spawnPoints = new TArray<ASpawnPoint*>();
}

APlanningAgent::~APlanningAgent()
{
	delete m_spawnPoints;
	m_spawnPoints = nullptr;
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
	if (m_basicEnemyClass != nullptr)
	{
		FActorSpawnParameters spawnParams;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
		spawnParams.bNoFail = true;
		spawnParams.Owner = this;

		FTransform enemySpawnTransform;
		int32 randPoint = FMath::RandRange(0, m_spawnPoints->Num() - 1);

		enemySpawnTransform.SetLocation((*m_spawnPoints)[randPoint]->GetActorLocation());
		enemySpawnTransform.SetRotation((*m_spawnPoints)[randPoint]->GetActorRotation().Quaternion());
		enemySpawnTransform.SetScale3D(FVector(1.f));

		GetWorld()->SpawnActor<AEnemyAgent1>(m_basicEnemyClass, enemySpawnTransform, spawnParams);
	}
}

void APlanningAgent::PressedButton()
{
	m_timesPressed++;
}

// Called every frame
void APlanningAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_spawnTimer <= 0)
	{
		m_spawnTimer = 1;
		SpawnEnemy();
	}
	else
		m_spawnTimer -= DeltaTime;
}

