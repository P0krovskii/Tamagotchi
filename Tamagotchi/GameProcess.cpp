#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

#include "GameProcess.h"

using namespace std;

GameProcess::GameProcess(Tamagotchi& tam, Wallet& wal, GameUI& gameui) //konstr
	:tamagotchi(tam), wallet(wal), gameui(gameui)
{
}



//Gameplay

void GameProcess::checkKey(int key) {
	switch (key) {
	case '1':
		feedTam();
		break;
	case '2':
		healTam();
		break;
	case '3':
		playTam();
		break;
	case '4':
		washTam();
		break;
	//default:
	};
};

void GameProcess::startGame() {
	int GameKey = 0;
	gameui.printLogo();
	while (GameKey != 27) {
		GameKey = _getch();
		if (GameKey != 27) {
			gameui.outputDelay();
			gameui.rebrashConsole();
			tamagotchi.printStats();
			wallet.printBalance();
			checkKey(GameKey);
			if (!checkTamState()) {
				break;
			}
		}
		else { break; };
	};
};

void GameProcess::saveGame() {
	printf("dont forget to make save!!!");
};

void GameProcess::endGame() {
	printf("\t\t  END GAME SESSION\n");
};


//Wallet


//Tamagotchi 

bool GameProcess::checkTamState() {
	if (tamagotchi.hasEscaped()) {
		printf("\n\t\tВаш тамагочи убежал!\n\t\t ВЫ СКУЧНЫЙ ХОЗЯИН!\n\n");
		return false;
	};
	if (tamagotchi.isDead()) {
		printf("\n\t\tВаш тамагочи умер!\n\t\tВЫ ПЛОХОЙ ХОЗЯИН!\n\n");
		return false;
	};
	
	return true;
};

void GameProcess::feedTam() {
	tamagotchi.feed();
};

void GameProcess::healTam() {
	tamagotchi.heal();
};

void GameProcess::playTam() {
	tamagotchi.play();
};

void GameProcess::washTam() {
	tamagotchi.wash();
};
