#include <iostream>
#include <string>
#include <cstdint>
#include "Toy.h"


Toy::Toy(uint8_t itemId, std::string nameItem, std::string properties, uint8_t price)
	: Item(itemId, nameItem, properties, price)
{
}

void Toy::use() {
	printf("Вы использовали игрушку: \n");
};