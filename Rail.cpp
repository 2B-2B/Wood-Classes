#include "Rail.h"

/*
contructor and function specification for Dimentional
*/

Rail::Rail() {
	this->length = this->height = 0;
	this->material, this->type = "";
}

Rail::Rail(double length, double height, std::string material, std::string type, double price, int amount, int available) : Wood(price, amount, available) {
	this->length = length;
	this->height = height;
	this->type = type;
	this->material = material;
	this->available = available;
}


Rail::Rail(const Rail& obj) {
	this->length = obj.length;
	this->height = obj.height;
	this->type = obj.type;
	this->material = obj.material;
	this->price = obj.price;
	this->amount = obj.amount;
	this->available = obj.available;
}

std::string Rail::dimentionCombination() {
	return std::to_string(length) + "'' X " + std::to_string(height) + " '' " + type + " " + material;
}

System::String^ Rail::getDimentionSS() {
	System::String^ ss = gcnew System::String(dimentionCombination().c_str());
	return ss;
}