#include <thread>
#include <chrono>
#include <cstdlib>

#include "GameUI.h"


void GameUI::outputDelay() {
	std::this_thread::sleep_for(std::chrono::milliseconds(300));
};

void GameUI::printLogo() {
	printf("\t\t\t\t\tTAMAGOTCHI\n");

	printf("###########################################################################################\n"
		"#                                                                                         #\n"
		"#                                                                                         #\n"
		"#                                                                                         #\n"
		"#            #####   #    ##   ##    #     ###  ####  #####  ###  #  #  #####             #\n"
		"#              #    # #   # # # #   # #   #     #  #    #   #     #  #    #               #\n"
		"#              #   # # #  #  #  #  # # #  #  #  #  #    #   #     ####    #               #\n"
		"#              #   #   #  #     #  #   #   ###  ####    #    ###  #  #  #####             #\n"
		"#                                                                                         #\n"
		"#                                                                                         #\n"
		"#                                                                 @created_by_p0krovskii_ #\n"
		"###########################################################################################\n");


	printf(
		"#                                                                                         #\n"
		"#                                 Нажмите Esc для выхода                                  #\n"
		"#                                                                                         #\n"
		"###########################################################################################\n");
};

void GameUI::rebrashConsole() {
	// Для Windows
	system("cls");

	// Для Linux / macOS
	//system("clear");
};






