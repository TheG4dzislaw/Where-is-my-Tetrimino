// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tetrimino.generated.h"

UCLASS()
class WHEREISMYTETRIMINO_API ATetrimino : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATetrimino();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		int ObjectID;
	UPROPERTY(EditAnywhere)
		float MovementSpeed;

	void ConstantMovement(float MovementSpeed)
};
