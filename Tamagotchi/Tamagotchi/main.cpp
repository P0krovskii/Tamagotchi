#include "Tamagotchi.h"
#include "GameProcesse.h"

int main()
{
	Tamagotchi tam(99, 50, 50, 50);
	tam.printStats();
	tam.feed();
	tam.printStats();
	tam.heal();
	tam.printStats();
	tam.wash();
	tam.printStats();
	tam.play();
	tam.printStats();
}