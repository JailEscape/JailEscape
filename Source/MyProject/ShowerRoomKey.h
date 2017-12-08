// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/Actor.h"
#include "ShowerRoomKey.generated.h"

UCLASS()
class MYPROJECT_API AShowerRoomKey : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShowerRoomKey();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION( BlueprintCallable, Category = "ShowerRoomKey" )
		FORCEINLINE bool IsPickedUp() const { return bIsPickedUp; }

	UFUNCTION( BlueprintCallable, Category = "ShowerRoomKey" )
		void SetPickedUp( bool _state );

private:

	UPROPERTY( VisibleAnywhere, Category = "ShowerRoomKey", meta = ( AllowPrivateAccess = "true" ) )
		class USceneComponent* sceneComponent;

	UPROPERTY( VisibleAnywhere, Category = "ShowerRoomKey", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* showerRoomKey;

	UPROPERTY( VisibleAnywhere, Category = "ShowerRoomKey", meta = ( AllowPrivateAccess = "true" ) )
		class UBoxComponent* interactionZone;

	UPROPERTY( VisibleAnywhere, Category = "ShowerRoomKey", meta = ( AllowPrivateAccess = "true" ) )
		class UAudioComponent* pickupSound;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "ShowerRoomKey", meta = ( AllowPrivateAccess = "true" ) )
		bool bIsPickedUp;
};
