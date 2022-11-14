// Fill out your copyright notice in the Description page of Project Settings.


#include "alcoholCollider.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"

// Sets default values
AalcoholCollider::AalcoholCollider()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	CollBox->SetBoxExtent(FVector(34.f, 34.f, 34.f));
	CollBox->SetCollisionProfileName("Trigger");
	RootComponent = CollBox;

	CollBox->OnComponentBeginOverlap.AddDynamic(this, &AalcoholCollider::OnOverlapBegin);
	CollBox->OnComponentEndOverlap.AddDynamic(this, &AalcoholCollider::OnOverlapEnd);
}

// Called when the game starts or when spawned
void AalcoholCollider::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AalcoholCollider::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AalcoholCollider::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Cyan, "Overlap has begun");
}


void AalcoholCollider::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
	class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, "Overlap has ended");
}

