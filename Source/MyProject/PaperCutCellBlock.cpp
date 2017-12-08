// Fill out your copyright notice in the Description page of Project Settings.

#include "PaperCutCellBlock.h"


// Sets default values
APaperCutCellBlock::APaperCutCellBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sceneComponent = CreateDefaultSubobject<USceneComponent>( TEXT( "SceneComponent" ) );
	RootComponent = sceneComponent;

	meshInstances = CreateAbstractDefaultSubobject<USceneComponent>( TEXT( "MeshInstances" ) );
	meshInstances->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	cellBlockA = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "CellBlockAMesh" ) );
	cellBlockA->AttachToComponent( meshInstances, FAttachmentTransformRules::KeepRelativeTransform );

	cellBlockB = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "CellBlockBMesh" ) );
	cellBlockB->AttachToComponent( meshInstances, FAttachmentTransformRules::KeepRelativeTransform );

	interactionZone = CreateDefaultSubobject<UBoxComponent>( TEXT( "InteractionZone" ) );
	interactionZone->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	pickupSound = CreateDefaultSubobject<UAudioComponent>( TEXT( "PickupSound" ) );
	pickupSound->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

}

// Called when the game starts or when spawned
void APaperCutCellBlock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaperCutCellBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

