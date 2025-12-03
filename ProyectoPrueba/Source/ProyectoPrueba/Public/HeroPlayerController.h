#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HeroPlayerController.generated.h"

// ⚠️ IMPORTANTE: cambia PROYECTOPRUEBA_API por el que salga en tus otras clases C++
// (por ejemplo en AbaseItem.h verás algo como TUJUEGO_API)
UCLASS()
class PROYECTOPRUEBA_API AHeroPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;
};
