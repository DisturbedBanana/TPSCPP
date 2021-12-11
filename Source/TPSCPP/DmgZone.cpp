// Fill out your copyright notice in the Description page of Project Settings.


#include "DmgZone.h"

// Sets default values
ADmgZone::ADmgZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void ADmgZone::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADmgZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

