// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SteamVRInputTestPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "SteamVRInputTestCharacter.h"
#include "Engine/World.h"

ASteamVRInputTestPlayerController::ASteamVRInputTestPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void ASteamVRInputTestPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// keep updating the destination every tick while desired
	if (bMoveToMouseCursor)
	{
		MoveToMouseCursor();
	}
}

void ASteamVRInputTestPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

    InputComponent->BindAction("MoveMyGuyLeft", IE_Pressed, this, &ASteamVRInputTestPlayerController::MoveLeft);
    InputComponent->BindAction("MoveMyGuyDown", IE_Pressed, this, &ASteamVRInputTestPlayerController::MoveDown);
    InputComponent->BindAction("MakeMyGuyJump", IE_Pressed, this, &ASteamVRInputTestPlayerController::Jump);

	InputComponent->BindAction("SetDestination", IE_Pressed, this, &ASteamVRInputTestPlayerController::OnSetDestinationPressed);
	InputComponent->BindAction("SetDestination", IE_Released, this, &ASteamVRInputTestPlayerController::OnSetDestinationReleased);

	// support touch devices 
	InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &ASteamVRInputTestPlayerController::MoveToTouchLocation);
	InputComponent->BindTouch(EInputEvent::IE_Repeat, this, &ASteamVRInputTestPlayerController::MoveToTouchLocation);

	InputComponent->BindAction("ResetVR", IE_Pressed, this, &ASteamVRInputTestPlayerController::OnResetVR);
}

void ASteamVRInputTestPlayerController::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ASteamVRInputTestPlayerController::MoveLeft() {

    GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "Moving right (pressing east on the touchpad)");

    APawn* const MyPawn = GetPawn();
    FVector DestLocation = MyPawn->GetActorLocation() + MyPawn->GetActorRightVector() * 130.f;
    UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, DestLocation);
}

void ASteamVRInputTestPlayerController::MoveDown() {

    GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "Moving down (pressing south on the touchpad)");

    APawn* const MyPawn = GetPawn();
    FVector DestLocation = MyPawn->GetActorLocation() + MyPawn->GetActorForwardVector() * -130.f;
    UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, DestLocation);
}

void ASteamVRInputTestPlayerController::Jump() {

    GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "Jumping");

    ASteamVRInputTestCharacter* const MyCharacter = Cast<ASteamVRInputTestCharacter>(GetPawn());
    MyCharacter->Jump();
}

void ASteamVRInputTestPlayerController::MoveToMouseCursor()
{
	if (UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled())
	{
		if (ASteamVRInputTestCharacter* MyPawn = Cast<ASteamVRInputTestCharacter>(GetPawn()))
		{
			if (MyPawn->GetCursorToWorld())
			{
				UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, MyPawn->GetCursorToWorld()->GetComponentLocation());
			}
		}
	}
	else
	{
		// Trace to see what is under the mouse cursor
		FHitResult Hit;
		GetHitResultUnderCursor(ECC_Visibility, false, Hit);

		if (Hit.bBlockingHit)
		{
			// We hit something, move there
			SetNewMoveDestination(Hit.ImpactPoint);
		}
	}
}

void ASteamVRInputTestPlayerController::MoveToTouchLocation(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	FVector2D ScreenSpaceLocation(Location);

	// Trace to see what is under the touch location
	FHitResult HitResult;
	GetHitResultAtScreenPosition(ScreenSpaceLocation, CurrentClickTraceChannel, true, HitResult);
	if (HitResult.bBlockingHit)
	{
		// We hit something, move there
		SetNewMoveDestination(HitResult.ImpactPoint);
	}
}

void ASteamVRInputTestPlayerController::SetNewMoveDestination(const FVector DestLocation)
{
	APawn* const MyPawn = GetPawn();
	if (MyPawn)
	{
		float const Distance = FVector::Dist(DestLocation, MyPawn->GetActorLocation());

		// We need to issue move command only if far enough in order for walk animation to play correctly
		if ((Distance > 120.0f))
		{
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, DestLocation);
		}
	}
}

void ASteamVRInputTestPlayerController::OnSetDestinationPressed()
{
	// set flag to keep updating destination until released
	bMoveToMouseCursor = true;
}

void ASteamVRInputTestPlayerController::OnSetDestinationReleased()
{
	// clear flag to indicate we should stop updating the destination
	bMoveToMouseCursor = false;
}
