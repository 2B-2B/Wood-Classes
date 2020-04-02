#include "Wood.h"

/*
contructor and function specification for Dimentional
*/

Wood::Wood() {
	this->price = 0;
	this->amount = 0;
}

Wood::Wood(double price, int amount, int available) {
	this->price = price;
	this->amount = amount;
	this->available = available;
}