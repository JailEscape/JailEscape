// Fill out your copyright notice in the Description page of Project Settings.

#include "CEnemyAI.h"


// Sets default values
ACEnemyAI::ACEnemyAI()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACEnemyAI::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACEnemyAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACEnemyAI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

