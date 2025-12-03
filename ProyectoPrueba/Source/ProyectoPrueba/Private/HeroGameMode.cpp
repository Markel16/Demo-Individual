#include "HeroGameMode.h"
#include "HeroPlayerController.h"
#include "HeroCharacter.h"

AHeroGameMode::AHeroGameMode()
{
    PlayerControllerClass = AHeroPlayerController::StaticClass();
    DefaultPawnClass = AHeroCharacter::StaticClass();
}

void AHeroGameMode::AddOrb(int32 Amount)
{
    OrbCount += Amount;
}
