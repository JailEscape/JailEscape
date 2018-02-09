// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/Actor.h"
#include "ShowerRoomDoor.generated.h"

UCLASS()
class MYPROJECT_API AShowerRoomDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShowerRoomDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION( BlueprintCallable, Category = "CellDoor" )
		FORCEINLINE bool IsLocked() const { return bIsLocked; }

	UFUNCTION( BlueprintCallable, Category = "CellDoor" )
		void SetLocked( bool _state );

private:
	UPROPERTY( VisibleAnywhere, Category = "CellDoor", meta = ( AllowPrivateAccess = "true" ) )
		class USceneComponent* sceneComponent;

	UPROPERTY( VisibleAnywhere, Category = "CellDoor", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* doorFrame;

	UPROPERTY( VisibleAnywhere, Category = "CellDoor", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* door;

	UPROPERTY( VisibleAnywhere, Category = "CellDoor", meta = ( AllowPrivateAccess = "true" ) )
		class UBoxComponent* interactionZone;

	UPROPERTY( VisibleAnywhere, Category = "CellDoor", meta = ( AllowPrivateAccess = "true" ) )
		class UAudioComponent* doorSound;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "CellDoor", meta = ( AllowPrivateAccess = "true" ) )
		bool bIsLocked;

	
};