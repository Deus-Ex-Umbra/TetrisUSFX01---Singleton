// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PieceStructure.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPieceStructure : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRISUSFX01_API IPieceStructure
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	/*virtual void SetTipoPieza(int _tipoPieza) = 0;*/
	virtual void SetNumeroBloques(int _numeroBloques) = 0;
};
