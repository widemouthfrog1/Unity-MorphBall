// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MorphBallGameMode.h"
#include "MorphBallBall.h"

AMorphBallGameMode::AMorphBallGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = AMorphBallBall::StaticClass();
}
