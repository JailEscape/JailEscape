// Fill out your copyright notice in the Description page of Project Settings.

#include "CellDoor.h"


// Sets default values
ACellDoor::ACellDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sceneComponent = CreateDefaultSubobject<USceneComponent>( TEXT( "SceneComponent" ) );
	RootComponent = sceneComponent;

	doorFrame = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "DoorFrame" ) );
	doorFrame->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	door = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "Door" ) );
	door->AttachToComponent( doorFrame, FAttachmentTransformRules::KeepRelativeTransform );

	interactionZone = CreateDefaultSubobject<UBoxComponent>( TEXT( "InteractionZone" ) );
	interactionZone->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	doorSound = CreateDefaultSubobject<UAudioComponent>( TEXT( "DoorSound" ) );
	doorSound->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	bIsLocked = true;
}

// Called when the game starts or when spawned
void ACellDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACellDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACellDoor::SetLocked( bool _state )
{
	bIsLocked = _state;
}

