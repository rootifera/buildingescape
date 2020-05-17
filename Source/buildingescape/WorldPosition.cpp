// Testing purposes only I guess...


#include "WorldPosition.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();
	
	FString ObjectName = GetOwner()->GetName();
	//UE_LOG(LogTemp, Warning, TEXT("ObjName: %s"),  *GetOwner()->GetName());
	FString ObjectPosition = GetOwner()->GetActorLocation().ToString();

	UE_LOG(LogTemp, Warning, TEXT("%s position is: %s"), *ObjectName, *ObjectPosition);




/* 	FString Log = TEXT("Hello");
	FString* PtrLog = &Log;

	Log.Len();
	PtrLog->Len();
	
	UE_LOG(LogTemp, Warning, TEXT("%s"), **PtrLog);

	UE_LOG(LogTemp, Warning, TEXT("This is a warning!"));
    UE_LOG(LogTemp, Error, TEXT("ERROR!"));
	UE_LOG(LogTemp, Display, TEXT("This is just a message"));
	 */
}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

