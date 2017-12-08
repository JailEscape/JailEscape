// Fill out your copyright notice in the Description page of Project Settings.

#include "ShowerRoomKey.h"


// Sets default values
AShowerRoomKey::AShowerRoomKey()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sceneComponent = CreateDefaultSubobject<USceneComponent>( TEXT( "SceneComponent" ) );
	RootComponent = sceneComponent;

	showerRoomKey = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "ShowerRoomKeyMesh" ) );
	showerRoomKey->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	interactionZone = CreateDefaultSubobject<UBoxComponent>( TEXT( "InteractionZone" ) );
	interactionZone->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	pickupSound = CreateDefaultSubobject<UAudioComponent>( TEXT( "PickupSound" ) );
	pickupSound->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	bIsPickedUp = false;
}

// Called when the game starts or when spawned
void AShowerRoomKey::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShowerRoomKey::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AShowerRoomKey::SetPickedUp( bool _state )
{
	bIsPickedUp = _state;
}
