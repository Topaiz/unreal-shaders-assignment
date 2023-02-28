// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShaderTestGameMode.h"
#include "ShaderTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShaderTestGameMode::AShaderTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
