// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAgent1.h"
#include "IS2019Character.h"
#include "IS2019GameMode.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine.h"
#include "Engine/World.h"
#include "EngineUtils.h"

// Sets default values
AEnemyAgent1::AEnemyAgent1()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_characterMovement = GetCharacterMovement();
	m_collider = GetCapsuleComponent();

	OnActorHit.AddDynamic(this, &AEnemyAgent1::OnAttackingPlayer);

	m_health = 100;
	m_speed = 500;
	m_aggression = 0;
	m_isAttacking = false;
	m_playerReached = false;
}

// Sets health, speed, and aggression levels to specified values
AEnemyAgent1::AEnemyAgent1(float health, float speed, float aggression)
{
	PrimaryActorTick.bCanEverTick = true;

	m_characterMovement = GetCharacterMovement();
	m_collider = GetCapsuleComponent();

	OnActorHit.AddDynamic(this, &AEnemyAgent1::OnAttackingPlayer);

	m_health = health;
	m_speed = speed;
	m_aggression = aggression;
	m_isAttacking = false;
	m_playerReached = false;
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
		bool anotherAttacker = false;

		// iterates over all the Enemy Agent 1's in the map to see if they are attacking right now
		for (TActorIterator<AEnemyAgent1> ActorITR(GetWorld()); ActorITR; ++ActorITR)
		{
			AEnemyAgent1* otherEnemy = *ActorITR;
			if (otherEnemy == this)
			{
				continue;
			}

			if (otherEnemy->IsAttacking())
			{
				anotherAttacker = true;
				GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Yellow, "Enemy Attacking");
			}
		}

		if (!anotherAttacker)
		{
			m_isAttacking = true;
		}
	}
	else
	{
		// attack aggressively
		m_isAttacking = true;
	}
}

void AEnemyAgent1::OnAttackStateExit()
{
	// set the animation back to walking
}

//******************************************************
//			   INTENTIONALLY LEFT BLANK				   *
// Further development of other enemy types needs to   *
// be added before further developement of Dead State  *
//******************************************************
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

void AEnemyAgent1::OnAttackingPlayer(AActor * SelfActor, AActor * OtherActor, FVector NormalImpulse, const FHitResult & Hit)
{
	if (AIS2019Character* player = Cast<AIS2019Character>(OtherActor))
	{
		if (m_isAttacking)
		{
			player->TakeDamage(m_damage);
		}
	}
}

// Called every frame
void AEnemyAgent1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Yellow, m_playerReached ? "Player found" : "Player not found");

	if (m_playerReached)
	{
		OnAttackStateUpdate();
	}
}

void AEnemyAgent1::TakeDamage(float damage)
{
	m_health -= damage;

	if (m_health <= 0)
	{

		Destroy();
	}
}
