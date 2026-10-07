#include <cstdint>
#include <iostream>
#include "Tamagotchi.h"

Tamagotchi::Tamagotchi(uint8_t health, uint8_t satiety, uint8_t happiness, uint8_t cleanliness){
	this->health = health;
	this->satiety = satiety;
	this->happiness = happiness;
	this->cleanliness = cleanliness;
};

uint8_t Tamagotchi::getHealth() const{
	return health;
	};

uint8_t Tamagotchi::getSatiety() const{
	return satiety;
};
	
uint8_t Tamagotchi::getHappiness() const{
		return happiness;
};
	
uint8_t Tamagotchi::getCleanliness() const{
	return cleanliness;
};

void Tamagotchi::printStats() const{
	printf("Health = %3d Satiety = %3d Happiness = %3d Cleanliness = %3d\n", getHealth(), getSatiety(), getHappiness(), getCleanliness());
};

void Tamagotchi::feed() {
	satiety += 3;
	cleanliness -= 10;

	if (satiety > 100) satiety = 100;
};

void Tamagotchi::heal() {
	health += 5;
	if (health > 100) health = 100;
};

void Tamagotchi::play() {
	happiness += 5;
	satiety -= 15;	
	if (happiness > 100) happiness = 100;
};

void Tamagotchi::wash() {
	happiness -= 3; cleanliness += 25;
	if (cleanliness > 100) cleanliness = 100;
};

bool Tamagotchi::isDead() const{
	return health == 0;
};

bool Tamagotchi::hasEscaped() const{
	return happiness == 0;
};



