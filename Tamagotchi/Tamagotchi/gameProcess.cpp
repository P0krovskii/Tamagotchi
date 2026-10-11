#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

#include "GameProcess.h"

using namespace std;

GameProcess::GameProcess(Tamagotchi& tam) //konstr
	:tamagotchi(tam)
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
	printf("game start\n");
	tamagotchi.printStats();

	int GameKey = 0;
	while (GameKey != 27) {
		printf("\t\t\tTAMAGOTCHI\n");
		cout << "\t\tНажмите Esc для выхода" << endl;
		GameKey = _getch();
		if (GameKey != 27) {
			checkKey(GameKey);
			tamagotchi.printStats();
		}
		else { break; };
	};

};

void GameProcess::endGame() {
	printf("END GAME SESSION\n");
};

void GameProcess::saveGame() {
	printf("dont forget to make save!!!");
};


//Tamagotchi 
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
