#pragma once
#include <iostream>
#include <vector>
#include <cstdint>
#include <string>


class Item {
private:
    std::string nameItem;
    std::string properties;
    uint8_t price;


public:

    Item(std::string nameItem, std::string properties, uint8_t price);

    std::string getNameItem() const;
    std::string getProperties() const;
    uint8_t getPrice() const;
    virtual void use(); 

};
