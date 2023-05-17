// Fill out your copyright notice in the Description page of Project Settings.


#include "tankPlayerController.h"
#include "GameFramework/Pawn.h"

void AtankPlayerController::SetPlayerEnabledState(bool bPlayerEnabled)
{
    if (bPlayerEnabled)
    {
        GetPawn()->EnableInput(this);
    }
    else
    {
        GetPawn()->DisableInput(this);
    }
    bShowMouseCursor = bPlayerEnabled;
}