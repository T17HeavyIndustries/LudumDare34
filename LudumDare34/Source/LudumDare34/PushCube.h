// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "PushCube.generated.h"

UCLASS()
class LUDUMDARE34_API APushCube : public AActor
{
	GENERATED_BODY()

	UStaticMeshComponent* _cube;

public:	
	// Sets default values for this actor's properties
	APushCube();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

};
