#include "Dimentional.h"

Dimentional::Dimentional() {
	length = width = height = 0;
	volume = "";
}

Dimentional::Dimentional(double l, double w, double h, std::string v, double p, int a) : Wood(p, a) {
	length = l;
	width = w;
	height = h;
	volume = v;
}

std::string Dimentional::calculateVolume() {
	volume = std::to_string(length * width * height);
	return volume;
}

std::string Dimentional::dimentionCombination() {
	return std::to_string(length) + "X" + std::to_string(width) + " - " + std::to_string(height) + "'";
}
