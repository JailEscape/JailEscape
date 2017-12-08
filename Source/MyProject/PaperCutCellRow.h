// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/Actor.h"
#include "PaperCutCellRow.generated.h"

UCLASS()
class MYPROJECT_API APaperCutCellRow : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APaperCutCellRow();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION( BlueprintCallable, Category = "PaperCutCellRow" )
		FORCEINLINE bool IsPickedUp() const { return bIsPickedUp; }

	UFUNCTION( BlueprintCallable, Category = "PaperCutCellRow" )
		void SetPickedUp( bool _state );

	UFUNCTION( BlueprintCallable, Category = "PaperCutCellRow" )
		int GetPaperIndex() const { return nPaperIndex; }

private:

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellRow", meta = ( AllowPrivateAccess = "true" ) )
		class USceneComponent* sceneComponent;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellRow", meta = ( AllowPrivateAccess = "true" ) )
		class USceneComponent* meshInstances;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellRow", meta = ( AllowPrivateAccess = "true" ) )
		class USphereComponent* interactionObject;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellRow", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* cellRow1;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellRow", meta = ( AllowPrivateAccess = "true" ) )
		class UStaticMeshComponent* cellRow2;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellRow", meta = ( AllowPrivateAccess = "true" ) )
		class UBoxComponent* interactionZone;

	UPROPERTY( VisibleAnywhere, Category = "PaperCutCellRow", meta = ( AllowPrivateAccess = "true" ) )
		class UAudioComponent* pickupSound;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PaperCutCellRow", meta = ( AllowPrivateAccess = "true" ) )
		bool bIsPickedUp;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PaperCutCellRow", meta = ( AllowPrivateAccess = "true" ) )
		int nPaperIndex;
	
};
