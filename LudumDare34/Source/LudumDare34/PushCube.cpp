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

void APushCube::NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	if (((ALudumDare34Character*)Other) != NULL)
	{
		
	}
}

void APushCube::StartTouchBox(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	if (((ALudumDare34Character*)OtherActor) != NULL)
	{

	}
}

void APushCube::EndTouchBox(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) 
{
	if (((ALudumDare34Character*)OtherActor) != NULL)
	{

	}
}