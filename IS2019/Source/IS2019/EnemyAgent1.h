// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyAgent1.generated.h"

UCLASS()
class IS2019_API AEnemyAgent1 : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyAgent1();
	AEnemyAgent1(float health, float speed, float aggression);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool IsAttacking();

	virtual void OnAttackStateEnter();
	virtual void OnAttackStateUpdate();
	virtual void OnAttackStateExit();

	virtual void OnDeadStateEnter();
	virtual void OnDeadStateUpdate();
	virtual void OnDeadStateExit();

	virtual void ChangeState();

	float m_health;
	float m_speed;
	float m_aggression;
	bool m_isAttacking;

	UCharacterMovementComponent* m_characterMovement;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
