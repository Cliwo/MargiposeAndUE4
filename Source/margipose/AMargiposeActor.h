// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "Components/PoseableMeshComponent.h"
#include "GameFramework/Actor.h"
#include "AMargiposeActor.generated.h"

UCLASS()
class MARGIPOSE_API AAMargiposeActor : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	UPoseableMeshComponent* PoseableMesh;
public:	
	// Sets default values for this actor's properties
	AAMargiposeActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
