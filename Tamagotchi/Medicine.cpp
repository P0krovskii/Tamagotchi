#include <iostream>
#include <string>
#include <cstdint>
#include "Medicine.h"

Medicine::Medicine (uint8_t itemId, std::string nameItem, std::string properties, uint8_t price)
	:Item(itemId, nameItem, properties, price)
{
};

void Medicine::use() {
	printf("Вы лечите тамагочи:");
};