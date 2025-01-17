// Fill out your copyright notice in the Description page of Project Settings.

#include "Project.h"
#include "Asteroid1.h"


// Sets default values
AAsteroid1::AAsteroid1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<UBoxComponent>(TEXT("Root")); 
	RootComponent = Root; 

	SpeedScale = 0.0f; 



}

// Called when the game starts or when spawned
void AAsteroid1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAsteroid1::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	FVector NewLocation = GetActorLocation(); 
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime)); 
	NewLocation.Z += DeltaHeight * SpeedScale; 
	RunningTime += DeltaTime; 
	SetActorLocation(NewLocation);


}

