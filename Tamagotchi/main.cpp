
#include <conio.h>
#include <iostream>
#include <Windows.h>

#include "Wallet.h"
#include "Tamagotchi.h"
#include "GameProcess.h"


int main()
{

	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	Wallet wallet(50);
	Tamagotchi tam(99, 50, 50, 50);
	GameProcess game(tam, wallet);
	game.startGame();
	game.endGame();



}