// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TestPublicComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT4_API UTestPublicComponent : public UActorComponent
{
	GENERATED_BODY()

		UFUNCTION(Blueprintcallable, category = Testing)
		static int GabeDoubleInt2(const int i);

public:	
	// Sets default values for this component's properties
	UTestPublicComponent();

	//Character's Health
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Character)
		float bootyShaky;
		

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
