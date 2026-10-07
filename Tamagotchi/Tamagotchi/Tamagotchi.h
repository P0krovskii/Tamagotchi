#pragma once
#include <cstdint>

class Tamagotchi {
private:
    uint8_t health;
    uint8_t satiety;
    uint8_t happiness;
    uint8_t cleanliness;

public:
    Tamagotchi(uint8_t health, uint8_t satiety, uint8_t happiness, uint8_t cleanliness);

    uint8_t getHealth() const;
    uint8_t getSatiety() const;
    uint8_t getHappiness() const;
    uint8_t getCleanliness() const;

    void printStats() const;

    void feed();
    void heal();
    void play();
    void wash();

    bool isDead() const;
    bool hasEscaped() const;
};