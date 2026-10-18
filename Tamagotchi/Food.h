#pragma once
#include <iostream>
#include <string>
#include <cstdint>
#include "Item.h"

class Food : public Item {
public:
	Food(uint8_t itemId, std::string nameItem, std::string properties, uint8_t price);
	void use() override;
};
