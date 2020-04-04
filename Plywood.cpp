#include "Plywood.h"

/*
contructor and function specification for Dimentional
*/

Plywood::Plywood() {
	this->length = this->width = this->thick = 0;
	this->volume =  "";
}

Plywood::Plywood(double length, double width, double thick, std::string volume, double price, int amount, int available) : Wood(price, amount, available) {
	this->length = length;
	this->width = width;
	this->thick = thick;
	this->volume = volume;
	this->available = available;
}

Plywood::Plywood(const Plywood& obj) {
	this->length = obj.length;
	this->width = obj.width;
	this->thick = obj.thick;
	this->volume = obj.volume;
	this->price = obj.price;
	this->amount = obj.amount;
	this->available = obj.available;
}

std::string Plywood::calculateVolume() {
	volume = std::to_string(length * width * thick);
	return this->volume;
}

std::string Plywood::dimentionCombination() {
	return std::to_string(length) + "X" + std::to_string(width) + " - " + std::to_string(thick) + "'";
}

System::String^ Plywood::getDimentionSS() {
	System::String^ ss = gcnew System::String(dimentionCombination().c_str());
	return ss;
}