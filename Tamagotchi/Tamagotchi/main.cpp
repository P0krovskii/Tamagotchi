
#include <conio.h>
#include <iostream>
#include <Windows.h>

#include "Tamagotchi.h"
#include "GameProcess.h"


using namespace std;

int main()
{

	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	
	Tamagotchi tam(99, 50, 50, 50);
	GameProcess game(tam);
	game.startGame();
	game.endGame();



}