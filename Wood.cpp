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

System::String^ Wood::getDimentionSS() {
	System::String^ ss = gcnew System::String(std::to_string(totalPrice()).c_str());
	return ss;
}

System::String^ Wood::getPriceSS() {
	System::String^ ss = gcnew System::String(std::to_string(price).c_str());
	return ss;
}
System::String^ Wood::getAmountSS() {
	System::String^ ss = gcnew System::String(std::to_string(amount).c_str());
	return ss;
}
