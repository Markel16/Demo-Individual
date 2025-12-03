UCLASS()
class PROYECTOPRUEBA_API AHeroGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AHeroGameMode();

    UFUNCTION(BlueprintCallable)
    void AddOrb(int32 Amount = 1);

    UFUNCTION(BlueprintPure)
    int32 GetOrbCount() const { return OrbCount; }

private:
    int32 OrbCount = 0;
};
