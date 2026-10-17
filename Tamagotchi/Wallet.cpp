#include <cstdint>
#include <iostream>
#include "Wallet.h"

Wallet::Wallet(uint8_t balance)
{
	this->balance = balance;
};

uint8_t Wallet::getBalance() const {
	return balance;
};

void Wallet::printBalance() {
	printf("\t\t\tВаш баланс = %d\n", getBalance());
};

uint8_t Wallet::giveMoney(uint8_t money) {
	balance -= money;
	return balance;
};

uint8_t Wallet::takeMoney(uint8_t money) {
	balance += money;
	return balance;
};