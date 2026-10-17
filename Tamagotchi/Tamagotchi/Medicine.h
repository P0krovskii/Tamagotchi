#pragma once
#include <iostream>
#include <string>
#include <cstdint>
#include "Item.h"

class Medicine : public Item {
public:
	Medicine(std::string nameItem, std::string properties, uint8_t price);
};
