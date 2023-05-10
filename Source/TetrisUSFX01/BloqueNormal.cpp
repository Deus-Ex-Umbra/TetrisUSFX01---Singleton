// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueNormal.h"

// Sets default values
ABloqueNormal::ABloqueNormal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABloqueNormal::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Se construye BloqueNormal"));
}

// Called every frame
void ABloqueNormal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABloqueNormal::mostrarInformacion()
{
	UE_LOG(LogTemp, Warning, TEXT("Es un: BloqueNormal"));
}

