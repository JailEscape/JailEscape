// Fill out your copyright notice in the Description page of Project Settings.

#include "PaperCutCellRow.h"


// Sets default values
APaperCutCellRow::APaperCutCellRow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sceneComponent = CreateDefaultSubobject<USceneComponent>( TEXT( "SceneComponent" ) );
	RootComponent = sceneComponent;

	meshInstances = CreateAbstractDefaultSubobject<USceneComponent>( TEXT( "MeshInstances" ) );
	meshInstances->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	interactionObject = CreateAbstractDefaultSubobject<USphereComponent>( TEXT( "InteractionObject" ) );
	interactionObject->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	cellRow1 = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "CellRow1Mesh" ) );
	cellRow1->AttachToComponent( meshInstances, FAttachmentTransformRules::KeepRelativeTransform );

	cellRow2 = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "CellRow2Mesh" ) );
	cellRow2->AttachToComponent( meshInstances, FAttachmentTransformRules::KeepRelativeTransform );

	interactionZone = CreateDefaultSubobject<UBoxComponent>( TEXT( "InteractionZone" ) );
	interactionZone->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	pickupSound = CreateDefaultSubobject<UAudioComponent>( TEXT( "PickupSound" ) );
	pickupSound->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	bIsPickedUp = false;

	nPaperIndex = 0;
}

// Called when the game starts or when spawned
void APaperCutCellRow::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaperCutCellRow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APaperCutCellRow::SetPickedUp( bool _state )
{
	bIsPickedUp = _state;
}
