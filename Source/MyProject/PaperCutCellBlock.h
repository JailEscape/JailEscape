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

	UFUNCTION( BlueprintCallable, Category = "PaperCutCellBlock" )
		FORCEINLINE bool IsPickedUp() const { return bIsPickedUp; }

	UFUNCTION( BlueprintCallable, Category = "PaperCutCellBlock" )
		void SetPickedUp( bool _state );

	UFUNCTION( BlueprintCallable, Category = "PaperCutCellBlock" )
		int GetPaperIndex() const { return nPaperIndex;  }

private:

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellBlock", meta = ( AllowPrivateAccess = "true" ) )
		class USceneComponent* sceneComponent;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellBlock", meta = ( AllowPrivateAccess = "true" ) )
		class USceneComponent* meshInstances;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellBlock", meta = ( AllowPrivateAccess = "true" ) )
		class USphereComponent* interactionObject;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellBlock", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* cellBlockA;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellBlock", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* cellBlockB;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellBlock", meta = ( AllowPrivateAccess = "true" ) )
		class UBoxComponent* interactionZone;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellBlock", meta = ( AllowPrivateAccess = "true" ) )
		class UAudioComponent* pickupSound;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PaperCutCellBlock", meta = ( AllowPrivateAccess = "true" ) )
		bool bIsPickedUp;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PaperCutCellBlock", meta = ( AllowPrivateAccess = "true" ) )
		int nPaperIndex;
	
};
