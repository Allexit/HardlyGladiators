// Copyright (C) 2016  Jens Pitkänen & Aleksi Talarmo

#pragma once

#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

UCLASS()
class HARDLYGLADIATORS_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestActor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
