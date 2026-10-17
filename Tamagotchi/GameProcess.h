#pragma once
#include "Tamagotchi.h"
#include "Wallet.h"

class GameProcess {
private:
	Tamagotchi& tamagotchi;
	Wallet& wallet;
public:
	GameProcess(Tamagotchi& tamagotchi, Wallet& wallet);

	void checkKey(int key);
	void startGame();
	void saveGame();
	void endGame();

	//Wallet


	//Tamagotchi
	bool checkTamState();

	void feedTam();
	void healTam();
	void playTam();
	void washTam();

};