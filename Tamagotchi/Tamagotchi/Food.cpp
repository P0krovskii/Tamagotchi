#include <iostream>
#include <string>
#include <cstdint>
#include "Food.h"

Food::Food(std::string nameItem, std::string properties, uint8_t price)
	:Item(nameItem, properties, price)
{
};

void Item::use() {
	printf("Вы покормили тамагочи:");
};