#pragma once
#include "Item.h"
#include <iostream>
#include <vector>

#include "Medicine.h"
#include "Food.h"
#include "Toy.h"
extern Food apple;
extern Food banana;
extern Medicine firstAidKit;
extern Toy ball;



class Magazine {
private:
	std::vector<Item*> fields;
public:
	

	void createAssortment();

	void openMagazine(uint8_t money);

	void printAssortment(uint8_t id);
	uint8_t browse(uint8_t GameKey, std::size_t currentIndex, std::size_t lastIndex);
	Item* buyItem(uint8_t id, uint8_t money);




};