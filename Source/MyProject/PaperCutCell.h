// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/Actor.h"
#include "PaperCutCell.generated.h"

UCLASS()
class MYPROJECT_API APaperCutCell : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APaperCutCell();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION( BlueprintCallable, Category = "PaperCutCell" )
		FORCEINLINE bool IsPickedUp() const { return bIsPickedUp; }

	UFUNCTION( BlueprintCallable, Category = "PaperCutCell" )
		void SetPickedUp( bool _state );

	UFUNCTION( BlueprintCallable, Category = "PaperCutCell" )
		int GetPaperIndex() const { return nPaperIndex; }

private:

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCell", meta = ( AllowPrivateAccess = "true" ) )
		class USceneComponent* sceneComponent;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCell", meta = ( AllowPrivateAccess = "true" ) )
		class USceneComponent* meshInstances;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCell", meta = ( AllowPrivateAccess = "true" ) )
		class USphereComponent* interactionObject;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCell", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* cell1;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCell", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* cell2;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCell", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* cell3;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCell", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* cell4;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCell", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* cell5;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCell", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* cell6;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCell", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* cell7;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCell", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* cell8;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCell", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* cell9;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCell", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* cell10;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCell", meta = ( AllowPrivateAccess = "true" ) )
		class UBoxComponent* interactionZone;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCell", meta = ( AllowPrivateAccess = "true" ) )
		class UAudioComponent* pickupSound;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PaperCutCell", meta = ( AllowPrivateAccess = "true" ) )
		bool bIsPickedUp;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PaperCutCell", meta = ( AllowPrivateAccess = "true" ) )
		int nPaperIndex;
	
};
