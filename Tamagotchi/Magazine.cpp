#include <iostream>
#include <string>
#include <cstdint>
#include <conio.h>
#include "Magazine.h"


void Magazine::createAssortment() {
    fields = {
    &apple,
    &banana,
    &ball
    };
};


Item* Magazine::buyItem(uint8_t id, uint8_t money) {
    for (Item* item : fields) {
        if (item->getItemId() == id) {
            if (item->getPrice() <= money) {
                printf("Вы купили %s\n", item->getNameItem().c_str());
                return item;
            }
            else {
                printf("Не хватает денег!\n");
                return nullptr;
            };
        }
    }

    return nullptr;
};


uint8_t Magazine::browse(uint8_t GameKey, std::size_t currentIndex, std::size_t lastIndex) {
    if (GameKey == 'E'){
        if (currentIndex == lastIndex) {
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

    }
    return currentIndex;
};


void Magazine::printAssortment(uint8_t id) {
    for (Item* item : fields) {
        if (item->getItemId() == id) {
            printf("%s\n", item->getNameItem().c_str());
            printf("%s\n", item->getProperties().c_str());
            printf("%d\n", static_cast<int>(item->getPrice()));
            printf("\n");
        }
    }
};


void Magazine::openMagazine(uint8_t money) {
    uint8_t GameKey = 0;

    std::size_t currentIndex = 0;
    std::size_t lastIndex = fields.size() - 1;
    while (GameKey != 8) {
        Item* selectedItem = fields[currentIndex];
        printAssortment(selectedItem->getItemId());
        GameKey = _getch();
        currentIndex = browse(GameKey, currentIndex, lastIndex);
        if (GameKey == 13){
            buyItem(selectedItem->getItemId(), money);
        }
    };
};