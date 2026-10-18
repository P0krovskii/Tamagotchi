#pragma once
#include <iostream>
#include <vector>
#include <cstdint>
#include <string>


class Item {
private:
    uint8_t itemId;
    std::string nameItem;
    std::string properties;
    uint8_t price;


public:

    Item(uint8_t itemId,std::string nameItem, std::string properties, uint8_t price);

    uint8_t getItemId() const;
    std::string getNameItem() const;
    std::string getProperties() const;
    uint8_t getPrice() const;
    virtual void use(); 

};
