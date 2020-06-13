// Fill out your copyright notice in the Description page of Project Settings.


#include "TestPublicComponent.h"

// Sets default values for this component's properties
UTestPublicComponent::UTestPublicComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTestPublicComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTestPublicComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

int UTestPublicComponent::GabeDoubleInt2(const int i) {
	return i * 2;
}

