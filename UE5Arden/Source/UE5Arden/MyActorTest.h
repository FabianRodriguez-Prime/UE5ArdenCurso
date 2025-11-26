// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorTest.generated.h"

UCLASS()
class UE5ARDEN_API AMyActorTest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Ejemplo de variable de instancia publica
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "MyActorTest")
	float MyFloatVariable;

	// Ejemplo de una funcion publica
	UPROPERTY(BlueprintCallable, Category = "MyActorTest")
	void MyFunction();
};
