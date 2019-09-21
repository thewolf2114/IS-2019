// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAgent1.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AEnemyAgent1::AEnemyAgent1()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_characterMovement = GetCharacterMovement();

	m_health = 100;
	m_speed = 500;
	m_aggression = 0;
	m_isAttacking = false;
}

// Sets health, speed, and aggression levels to specified values
AEnemyAgent1::AEnemyAgent1(float health, float speed, float aggression)
{
	m_characterMovement = GetCharacterMovement();

	m_health = health;
	m_speed = speed;
	m_aggression = aggression;
	m_isAttacking = false;
}

// Called when the game starts or when spawned
void AEnemyAgent1::BeginPlay()
{
	Super::BeginPlay();
	
	// imidiately update the walking speed to the member speed variable
	m_characterMovement->MaxWalkSpeed = m_speed;
}

bool AEnemyAgent1::IsAttacking()
{
	return m_isAttacking;
}

void AEnemyAgent1::OnAttackStateEnter()
{
	// initialize the attacking animation
}

void AEnemyAgent1::OnAttackStateUpdate()
{
	if (m_aggression < 0.5f)
	{
		// attack passively
	}
	else
	{
		// attack aggressively
	}
}

void AEnemyAgent1::OnAttackStateExit()
{
	// set the animation back to walking
}

void AEnemyAgent1::OnDeadStateEnter()
{
	// set the dead animation
}

void AEnemyAgent1::OnDeadStateUpdate()
{
	// check if being revived
}

void AEnemyAgent1::OnDeadStateExit()
{
	// set the animation back to walking
}

void AEnemyAgent1::ChangeState()
{
}

// Called every frame
void AEnemyAgent1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
