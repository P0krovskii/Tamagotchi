#include <iostream>
#include <string>
#include <cstdint>
#include "Food.h"

Food::Food(uint8_t itemId, std::string nameItem, std::string properties, uint8_t price)
	:Item(itemId, nameItem, properties, price)
{
};

void Food::use() {
	printf("Вы покормили тамагочи:");
};