
#include <conio.h>
#include <iostream>
#include <Windows.h>

#include "Wallet.h"
#include "Tamagotchi.h"
#include "GameProcess.h"
#include "GameUI.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    GameUI gameUI{};
    Wallet wallet(50);
    Tamagotchi tam(99, 50, 50, 50);
    GameProcess game(tam, wallet, gameUI);

    game.startGame();
    game.endGame();

    return 0;
}
