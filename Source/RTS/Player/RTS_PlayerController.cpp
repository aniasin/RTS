// Fill out your copyright notice in the Description page of Project Settings.


#include "RTS_PlayerController.h"

void ARTS_PlayerController::BeginPlay()
{
	Super::BeginPlay();

}

void ARTS_PlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);

	bShowMouseCursor = true;

	int32 Square = FMath::Pow(2,24);
	UE_LOG(LogTemp, Log, TEXT("Square : %i"), Square);
}
