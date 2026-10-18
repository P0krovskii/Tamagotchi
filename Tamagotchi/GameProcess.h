#pragma once

#include "Tamagotchi.h"
#include "Wallet.h"
#include "GameUI.h"

class GameProcess {
private:
	Tamagotchi& tamagotchi;
	Wallet& wallet;
	GameUI& gameui;
public:
	GameProcess(Tamagotchi& tamagotchi, Wallet& wallet, GameUI& gameui);

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