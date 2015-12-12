// Fill out your copyright notice in the Description page of Project Settings.

#include "LudumDare34.h"
#include <LudumDare34Character.h>
#include "PushCube.h"


// Sets default values
APushCube::APushCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.

}

// Called when the game starts or when spawned
void APushCube::BeginPlay()
{
	Super::BeginPlay();

	PrimaryActorTick.bCanEverTick = true;

	_cube = (UStaticMeshComponent*)RootComponent;
}

// Called every frame
void APushCube::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
}