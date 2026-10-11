#pragma once
#include "Tamagotchi.h"

class GameProcess {
private:
	Tamagotchi& tamagotchi;
public:
	GameProcess(Tamagotchi& tamagotchi);

	void checkKey(int key);
	void startGame();
	void saveGame();
	void endGame();

	void feedTam();
	void healTam();
	void playTam();
	void washTam();

};