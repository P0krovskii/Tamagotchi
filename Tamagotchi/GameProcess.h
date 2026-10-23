#pragma once

#include "Magazine.h"
#include "Tamagotchi.h"
#include "Wallet.h"
#include "GameUI.h"
#include "Inventory.h"

class GameProcess {
private:
	Tamagotchi& tamagotchi;
	Wallet& wallet;
	GameUI& gameui;
	Magazine& magazine;
	Inventory& inventory;
public:
	GameProcess(Tamagotchi& tamagotchi, Wallet& wallet, GameUI& gameui, Magazine& magazine, Inventory& inventory);
	
	void checkKey(int key);
	void startGame();
	void saveGame();
	void endGame();

	//Wallet
	bool buyItem(uint8_t itemId);

	//Tamagotchi
	bool checkTamState();

	void feedTam();
	void healTam();
	void playTam();
	void washTam();

};