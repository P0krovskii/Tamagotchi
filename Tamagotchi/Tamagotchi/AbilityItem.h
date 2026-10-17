#pragma once
#include <iostream>
#include <string>
#include <cstdint>
#include "Item.h"


class AbilityItem : public Item {
	AbilityItem(std::string nameItem, std::string properties, uint8_t price);
};