// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/Actor.h"
#include "Lock.generated.h"

UCLASS()
class MYPROJECT_API ALock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALock();

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

	UPROPERTY( VisibleAnywhere, Category = "Lock", meta = ( AllowPrivateAccess = "true" ) )
		class USceneComponent* sceneComponent;

	UPROPERTY( VisibleAnywhere, Category = "Lock", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* lockMesh;

	UPROPERTY( VisibleAnywhere, Category = "Lock", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* firstNumWheel;

	UPROPERTY( VisibleAnywhere, Category = "Lock", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* secondNumWheel;

	UPROPERTY( VisibleAnywhere, Category = "Lock", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* thirdNumWheel;

	UPROPERTY( VisibleAnywhere, Category = "Lock", meta = ( AllowPrivateAccess = "true" ) )
		class UBoxComponent* interactionZone;

	UPROPERTY( VisibleAnywhere, Category = "Lock", meta = ( AllowPrivateAccess = "true" ) )
		class UAudioComponent* unlockSound;

	UPROPERTY( VisibleAnywhere, Category = "Lock", meta = ( AllowPrivateAccess = "true" ) )
		class UAudioComponent* spinSound;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "CellDoor", meta = ( AllowPrivateAccess = "true" ) )
		bool bIsLocked;

	int firstWheelValue;
	int secondWheelValue;
	int thirdWheelValue;
	
};
