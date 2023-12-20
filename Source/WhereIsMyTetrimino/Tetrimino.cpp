// Fill out your copyright notice in the Description page of Project Settings.


#include "Tetrimino.h"

// Sets default values
ATetrimino::ATetrimino()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATetrimino::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATetrimino::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATetrimino::ConstantMovement(float MovementSpeed)
{
	
}