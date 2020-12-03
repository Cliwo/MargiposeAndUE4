// Fill out your copyright notice in the Description page of Project Settings.


#include "AMargiposeActor.h"

// Sets default values
AAMargiposeActor::AAMargiposeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PoseableMesh = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("POSEABLE"));
}

// Called when the game starts or when spawned
void AAMargiposeActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAMargiposeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

