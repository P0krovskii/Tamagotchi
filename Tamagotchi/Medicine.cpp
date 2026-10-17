#include <iostream>
#include <string>
#include <cstdint>
#include "Medicine.h"

Medicine::Medicine (std::string nameItem, std::string properties, uint8_t price)
	:Item(nameItem, properties, price)
{
};

void Medicine::use() {
	printf("Вы лечите тамагочи:");
};