#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "HeroCharacter.generated.h"

UCLASS()
class PROYECTOPRUEBA_API AHeroCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AHeroCharacter();

protected:
    virtual void BeginPlay() override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    // --- Enhanced Input ---

    // Mapping context principal (IMC_Hero)
    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputMappingContext* DefaultMappingContext;

    // Acción de movimiento (IA_Move)
    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* MoveAction;

    // Acción de mirar (IA_Look)
    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* LookAction;

    // Acción de interactuar (IA_Interact)
    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* InteractAction;

    // Funciones que se llaman desde Enhanced Input
    void Move(const FInputActionValue& Value);
    void Look(const FInputActionValue& Value);
    void Interact(const FInputActionValue& Value);
};
