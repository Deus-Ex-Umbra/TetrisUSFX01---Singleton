// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PieceStructure.h"
#include "Bloque.h"
#include "Pieza.generated.h"
enum TipoPieza {
	PIEZA_NORMAL,
	PIEZA_METAL,
	PIEZA_MADERA,
	PIEZA_HIELO,
	PIEZA_EXPLOSIVO,
	PIEZA_NORMAL_METAL,
	PIEZA_NORMAL_MADERA,
	PIEZA_NORMAL_HIELO,
	PIEZA_NORMAL_EXPLOSIVO
};
UCLASS()
class TETRISUSFX01_API APieza : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APieza();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	TipoPieza tipopieza;
	TArray<IBloque*> bloques;
	int numero_bloques;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void SetNumeroBloques(int _numero_bloques);
};
