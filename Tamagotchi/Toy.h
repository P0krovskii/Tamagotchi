#pragma once
#include <iostream>
#include <string>
#include <cstdint>
#include "Item.h"


class Toy : public Item {
public:
	Toy(uint8_t itemId, std::string nameItem, std::string properties, uint8_t price);
    void use();
};
