#include "Tamagotchi.h"
#include "GameProcess.h"
#include <conio.h>
#include <iostream>
#include <Windows.h>


using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	//проверка сохранений если нет создать обьект с базовыми хар
	
	Tamagotchi tam(99, 50, 50, 50);
	GameProcess game(tam);
	game.startGame();
	game.endGame();

	//GameProcess save(tam);

}