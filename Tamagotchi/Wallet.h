#pragma once
#include <iostream>
#include <cstdint>

class Wallet {
private:
	uint8_t balance;
public:
	Wallet(uint8_t balance);

	uint8_t getBalance() const; 

	void printBalance();
	uint8_t giveMoney(uint8_t money);
	uint8_t takeMoney(uint8_t money);
};