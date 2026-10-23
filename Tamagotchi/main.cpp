
#include <conio.h>
#include <iostream>
#include <Windows.h>

#include "Wallet.h"
#include "Tamagotchi.h"
#include "GameProcess.h"
#include "GameUI.h"
#include "Magazine.h"
#include "Inventory.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Magazine magazine;
    Inventory inventary;
    GameUI gameUI{};
    Wallet wallet(50);
    Tamagotchi tam(99, 50, 50, 50);
    GameProcess game(tam, wallet, gameUI, magazine, inventary);

    game.startGame();
    game.saveGame();
    game.endGame();

    return 0;
}
