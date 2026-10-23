#pragma once
#include <iostream>
#include <vector>
#include <conio.h>
#include "Inventory.h"
#include "Item.h"



void Inventory::addItem(Item* item) {
    for (uint8_t i = 0; i < inventoryItems.size(); i++) {
        if (inventoryItems[i].item->getItemId() == item->getItemId()) {
            inventoryItems[i].counters++;
            return;
        }
    }

    inventoryItems.push_back({ item, 1 });
}

void Inventory::printInv(uint8_t currentIndex) {
    printf("%s", inventoryItems[currentIndex].item->getNameItem().c_str());
    printf("%s", inventoryItems[currentIndex].item->getProperties().c_str());
    printf("%d", inventoryItems[currentIndex].counters);
}

void Inventory::removeItem(uint8_t id) {
    for (uint8_t i = 0; i < inventoryItems.size(); i++) {
        if (inventoryItems[i].item->getItemId() == id) {
            if (inventoryItems[i].counters > 0) {
                inventoryItems[i].counters--;
            }
            return;
        }
    }
};

uint8_t Inventory::getItemCount(uint8_t id) {
    for (uint8_t i = 0; i < inventoryItems.size(); i++) {
        if (inventoryItems[i].item->getItemId() == id) {
            return inventoryItems[i].counters;
        }
    }

    return 0;
};

//void Inventory::getInventoryInfo() {
//
//};

bool Inventory::hasItem(uint8_t id) {
    for (uint8_t i = 0; i < inventoryItems.size(); i++) {
        if (inventoryItems[i].item->getItemId() == id) {
            return true;
        }

    };
    return false;
};

uint8_t Inventory::browseInv(uint8_t GameKey, uint8_t currentIndex, uint8_t lastIndex) {

    if (GameKey == 'E')
    {
        if (currentIndex == lastIndex){
            return currentIndex = 0;
        } else {
            return ++currentIndex;
        }

    } else if (GameKey == 'Q') {
        if (currentIndex == 0){
            return currentIndex = lastIndex;
        } else {
            return --currentIndex;
        };

    } else if (GameKey == 'U') {
       // Item::use();
    }
    return currentIndex;
};

void Inventory::openInventory() {
    if (inventoryItems.empty()) {
        printf("Inventory is empty.\n");
        _getch();
        return;
    }

	uint8_t GameKey = 0;
    uint8_t currentIndex = 0;
    uint8_t lastIndex = inventoryItems.size() - 1;
    printInv(currentIndex);
	while (GameKey != 8) {
        GameKey = _getch();
        currentIndex = browseInv(GameKey, currentIndex, lastIndex);
        printInv(currentIndex);
        
	};
};



