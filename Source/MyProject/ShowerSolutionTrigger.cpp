// Fill out your copyright notice in the Description page of Project Settings.

#include "ShowerSolutionTrigger.h"


// Sets default values
AShowerSolutionTrigger::AShowerSolutionTrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*sceneComponent = CreateDefaultSubobject<USceneComponent>( TEXT( "SceneComponent" ) );
	RootComponent = sceneComponent;

	audioInstances = CreateAbstractDefaultSubobject<USceneComponent>( TEXT( "AudioInstances" ) );
	audioInstances->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	interactionZone = CreateDefaultSubobject<UBoxComponent>( TEXT( "InteractionZone" ) );
	interactionZone->AttachToComponent( sceneComponent, FAttachmentTransformRules::KeepRelativeTransform );

	showerSound1 = CreateDefaultSubobject<UAudioComponent>( TEXT( "ShowerSound" ) );
	showerSound1->AttachToComponent( audioInstances, FAttachmentTransformRules::KeepRelativeTransform );

	showerSound2 = CreateDefaultSubobject<UAudioComponent>( TEXT( "ShowerSound" ) );
	showerSound2->AttachToComponent( audioInstances, FAttachmentTransformRules::KeepRelativeTransform );

	showerSound3 = CreateDefaultSubobject<UAudioComponent>( TEXT( "ShowerSound" ) );
	showerSound3->AttachToComponent( audioInstances, FAttachmentTransformRules::KeepRelativeTransform );

	showerSound4 = CreateDefaultSubobject<UAudioComponent>( TEXT( "ShowerSound" ) );
	showerSound4->AttachToComponent( audioInstances, FAttachmentTransformRules::KeepRelativeTransform );

	showerSound5 = CreateDefaultSubobject<UAudioComponent>( TEXT( "ShowerSound" ) );
	showerSound5->AttachToComponent( audioInstances, FAttachmentTransformRules::KeepRelativeTransform );

	showerSound6 = CreateDefaultSubobject<UAudioComponent>( TEXT( "ShowerSound" ) );
	showerSound6->AttachToComponent( audioInstances, FAttachmentTransformRules::KeepRelativeTransform );

	showerSound7 = CreateDefaultSubobject<UAudioComponent>( TEXT( "ShowerSound" ) );
	showerSound7->AttachToComponent( audioInstances, FAttachmentTransformRules::KeepRelativeTransform );

	showerSound8 = CreateDefaultSubobject<UAudioComponent>( TEXT( "ShowerSound" ) );
	showerSound8->AttachToComponent( audioInstances, FAttachmentTransformRules::KeepRelativeTransform );*/

}

// Called when the game starts or when spawned
void AShowerSolutionTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShowerSolutionTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

