// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/Actor.h"
#include "ShowerSolutionTrigger.generated.h"

UCLASS()
class MYPROJECT_API AShowerSolutionTrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShowerSolutionTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY( VisibleAnywhere, Category = "ShowerSolutionTrigger", meta = ( AllowPrivateAccess = "true" ) )
		class USceneComponent* sceneComponent;

	UPROPERTY( VisibleAnywhere, Category = "ShowerSolutionTrigger", meta = ( AllowPrivateAccess = "true" ) )
		class UBoxComponent* interactionZone;

	UPROPERTY( VisibleAnywhere, Category = "ShowerSolutionTrigger", meta = ( AllowPrivateAccess = "true" ) )
		class USceneComponent* audioInstances;

	UPROPERTY( VisibleAnywhere, Category = "ShowerSolutionTrigger", meta = ( AllowPrivateAccess = "true" ) )
		class UAudioComponent* showerSound1;

	UPROPERTY( VisibleAnywhere, Category = "ShowerSolutionTrigger", meta = ( AllowPrivateAccess = "true" ) )
		class UAudioComponent* showerSound2;

	UPROPERTY( VisibleAnywhere, Category = "ShowerSolutionTrigger", meta = ( AllowPrivateAccess = "true" ) )
		class UAudioComponent* showerSound3;

	UPROPERTY( VisibleAnywhere, Category = "ShowerSolutionTrigger", meta = ( AllowPrivateAccess = "true" ) )
		class UAudioComponent* showerSound4;

	UPROPERTY( VisibleAnywhere, Category = "ShowerSolutionTrigger", meta = ( AllowPrivateAccess = "true" ) )
		class UAudioComponent* showerSound5;

	UPROPERTY( VisibleAnywhere, Category = "ShowerSolutionTrigger", meta = ( AllowPrivateAccess = "true" ) )
		class UAudioComponent* showerSound6;

	UPROPERTY( VisibleAnywhere, Category = "ShowerSolutionTrigger", meta = ( AllowPrivateAccess = "true" ) )
		class UAudioComponent* showerSound7;

	UPROPERTY( VisibleAnywhere, Category = "ShowerSolutionTrigger", meta = ( AllowPrivateAccess = "true" ) )
		class UAudioComponent* showerSound8;
	
};
