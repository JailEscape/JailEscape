// Fill out your copyright notice in the Description page of Project Settings.

#include "PaperCutCell.h"


// Sets default values
APaperCutCell::APaperCutCell()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sceneComponent = CreateDefaultSubobject<USceneComponent>( TEXT( "SceneComponent" ) );
	RootComponent = sceneComponent;

	meshInstances = CreateAbstractDefaultSubobject<USceneComponent>( TEXT( "MeshInstances" ) );
	meshInstances->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	interactionObject = CreateAbstractDefaultSubobject<USphereComponent>( TEXT( "InteractionObject" ) );
	interactionObject->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	cell1 = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "CellRow1Mesh" ) );
	cell1->AttachToComponent( meshInstances, FAttachmentTransformRules::KeepRelativeTransform );

	cell2 = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "CellRow2Mesh" ) );
	cell2->AttachToComponent( meshInstances, FAttachmentTransformRules::KeepRelativeTransform );

	cell3 = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "CellRow3Mesh" ) );
	cell3->AttachToComponent( meshInstances, FAttachmentTransformRules::KeepRelativeTransform );

	cell4 = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "CellRow4Mesh" ) );
	cell4->AttachToComponent( meshInstances, FAttachmentTransformRules::KeepRelativeTransform );

	cell5 = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "CellRow5Mesh" ) );
	cell5->AttachToComponent( meshInstances, FAttachmentTransformRules::KeepRelativeTransform );

	interactionZone = CreateDefaultSubobject<UBoxComponent>( TEXT( "InteractionZone" ) );
	interactionZone->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	pickupSound = CreateDefaultSubobject<UAudioComponent>( TEXT( "PickupSound" ) );
	pickupSound->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	bIsPickedUp = false;

	nPaperIndex = 0;
}

// Called when the game starts or when spawned
void APaperCutCell::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaperCutCell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APaperCutCell::SetPickedUp( bool _state )
{
	bIsPickedUp = _state;
}

