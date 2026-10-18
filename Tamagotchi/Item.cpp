#include <iostream>
#include <string>
#include <cstdint>
#include "Item.h"

Item::Item(uint8_t itemId, std::string nameItem, std::string properties, uint8_t price) {
	this->itemId = itemId;
	this->nameItem = nameItem;
	this->properties = properties;
	this->price = price;
};

uint8_t Item::getItemId() const {
	return itemId;
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

