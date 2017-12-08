// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/Actor.h"
#include "PaperCutCellBlock.generated.h"

UCLASS()
class MYPROJECT_API APaperCutCellBlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APaperCutCellBlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellBlock", meta = ( AllowPrivateAccess = "true" ) )
		class USceneComponent* sceneComponent;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellBlock", meta = ( AllowPrivateAccess = "true" ) )
		class USceneComponent* meshInstances;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellBlock", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* cellBlockA;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellBlock", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* cellBlockB;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellBlock", meta = ( AllowPrivateAccess = "true" ) )
		class UBoxComponent* interactionZone;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellBlock", meta = ( AllowPrivateAccess = "true" ) )
		class UAudioComponent* pickupSound;
	
};
