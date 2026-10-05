#include <cstdint>
#include <iostream>

class Tamagotchi {
private:
	uint8_t Health;
	uint8_t Satiety;
	uint8_t Happiness;
	uint8_t Cleanliness;

protected:

public:
	Tamagotchi(uint8_t health, uint8_t satiety, uint8_t happiness, uint8_t cleanliness)
	{
		Health = health;
		Satiety = satiety;
		Happiness = happiness;
		Cleanliness = cleanliness;
	}
	
	void getter() {
		printf("Health = %d Satiety = %d Happiness = %d Cleanliness = %d\n", Health, Satiety, Happiness, Cleanliness );
	};

	void feed() {
		Satiety += 3;
		Cleanliness -= 10;
		if (Satiety > 100) Satiety = 100;
	};

	void heal() {
		Health += 5;
		if (Health > 100) Health = 100;
	};

	void play() {
		Happiness += 5;
		Satiety -= 15;
		if (Happiness > 100) Happiness = 100;
	};

	void wash() {
		Happiness -= 3;
		Cleanliness += 25;
		if (Cleanliness > 100) Cleanliness = 100;
	};

	~Tamagotchi() {
		printf("\ncheck object");
	};

};

int main()
{
	Tamagotchi tam(99, 50, 50, 50);
	tam.getter();
	tam.feed();
	tam.heal();
	tam.wash();
	tam.play();
	tam.getter();
}

