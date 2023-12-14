// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorAlpha.h"

// Sets default values
AActorAlpha::AActorAlpha()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActorAlpha::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorAlpha::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

