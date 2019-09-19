// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyAgent1.generated.h"

UCLASS()
class IS2019_API AEnemyAgent1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyAgent1();
	AEnemyAgent1(int health, float speed, float aggression);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Components")
	UStaticMeshComponent* m_staticMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
