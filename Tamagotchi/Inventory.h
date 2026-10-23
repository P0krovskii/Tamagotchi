#pragma once
#include <iostream>
#include <vector>
#include <cstdint>
#include "Item.h"

struct AllItems {
	Item* item;
	uint8_t counters;
};

class Inventory {
private:
	std::vector<AllItems> inventoryItems;
public:
	void addItem(Item* item);
	void removeItem(uint8_t id);
	uint8_t getItemCount(uint8_t id);
	void getInventoryInfo();
	void openInventory();
	uint8_t browseInv(uint8_t GameKey, uint8_t currentIndex, uint8_t lastIndex);
	bool hasItem(uint8_t id);
	void printInv(uint8_t);

};
