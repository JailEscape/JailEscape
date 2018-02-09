// Fill out your copyright notice in the Description page of Project Settings.

#include "ShowerHead.h"


// Sets default values
AShowerHead::AShowerHead()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShowerHead::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShowerHead::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

