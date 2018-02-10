// Fill out your copyright notice in the Description page of Project Settings.

#include "Lock.h"


// Sets default values
ALock::ALock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sceneComponent = CreateDefaultSubobject<USceneComponent>( TEXT( "SceneComponent" ) );
	RootComponent = sceneComponent;

	lockMesh = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "Lock" ) );
	lockMesh->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	firstNumWheel = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "FirstWheel" ) );
	firstNumWheel->AttachToComponent( lockMesh, FAttachmentTransformRules::KeepRelativeTransform );
	firstNumWheel->RelativeLocation = FVector( -5.0f, 0.0f, 0.0f );

	secondNumWheel = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "SecondWheel" ) );
	secondNumWheel->AttachToComponent( lockMesh, FAttachmentTransformRules::KeepRelativeTransform );
	secondNumWheel->RelativeLocation = FVector( 0.0f, 0.0f, 0.0f );

	thirdNumWheel = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "ThirdWheel" ) );
	thirdNumWheel->AttachToComponent( lockMesh, FAttachmentTransformRules::KeepRelativeTransform );
	thirdNumWheel->RelativeLocation = FVector( 5.0f, 0.0f, 0.0f );

	interactionZone = CreateDefaultSubobject<UBoxComponent>( TEXT( "InteractionZone" ) );
	interactionZone->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	unlockSound = CreateDefaultSubobject<UAudioComponent>( TEXT( "UnlockSound" ) );
	unlockSound->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	spinSound = CreateDefaultSubobject<UAudioComponent>( TEXT( "SpinSound" ) );
	spinSound->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );
}

// Called when the game starts or when spawned
void ALock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALock::SetLocked( bool _state )
{
	bIsLocked = _state;
}

