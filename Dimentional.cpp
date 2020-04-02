#include "Dimentional.h"

/*
contructor and function specification for Dimentional
*/

Dimentional::Dimentional() {
	this->length = this->width = this->height = 0;
	this->volume = "";
}

Dimentional::Dimentional(double length, double width, double height, std::string volume, double price, int amount, int available) : Wood(price, amount, available) {
	this->length = length;
	this->width = width;
	this->height = height;
	this->volume = volume;
	this->available = available;
}

std::string Dimentional::calculateVolume() {
	this->volume = std::to_string(length * width * height);
	return this->volume;
}

std::string Dimentional::dimentionCombination() {
	return std::to_string(length) + "X" + std::to_string(width) + " - " + std::to_string(height) + "'";
}

System::String^ Dimentional::getDimentionSS() {
	System::String^ ss = gcnew System::String(dimentionCombination().c_str());
	return ss;
}