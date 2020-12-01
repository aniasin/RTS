// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RTS_CharacterBase.generated.h"

UCLASS()
class RTS_API ARTS_CharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARTS_CharacterBase();

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Input")
	bool bRightClick;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void RightClick();
	void RightClickEnd();

	void MoveForward(float Value);
	void MoveRight(float Value);
	void Turn(float Value);
	void LookUp(float Value);
	void TurnAtRate(float Value);
	void LookUpAtRate(float Value);

	float BaseTurnRate;
	float BaseLookUpRate;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
