#include <iostream>
#include <string>
#include <cstdint>
#include "Item.h"

Item::Item(std::string nameItem, std::string properties, uint8_t price) {
	this->nameItem = nameItem;
	this->properties = properties;
	this->price = price;
};

std::string Item::getNameItem() const{
	return nameItem;
};

std::string Item::getProperties() const{
	return properties;
};

uint8_t Item::getPrice() const{
	return price;
};

void Item::use() {
	printf("Вы использовали предмет: \n");
};

