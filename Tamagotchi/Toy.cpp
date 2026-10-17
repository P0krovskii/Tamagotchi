#include <iostream>
#include <string>
#include <cstdint>
#include "Toy.h"


Toy::Toy(std::string nameItem, std::string properties, uint8_t price)
	: Item(nameItem, properties, price)
{
}

void Toy::use() {
	printf("Вы использовали игрушку: \n");
};