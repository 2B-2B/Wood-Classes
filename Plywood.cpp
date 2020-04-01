#include "Plywood.h"

Plywood::Plywood() {
	length = width = thick = 0;
	volume = type = "";
}

Plywood::Plywood(double l, double w, double t, std::string v, double p, int a) : Wood(p, a) {
	length = l;
	width = w;
	thick = t;
	volume = v;
}

std::string Plywood::calculateVolume() {
	volume = std::to_string(length * width * thick);
	return volume;
}

std::string Plywood::dimentionCombination() {
	return std::to_string(length) + "X" + std::to_string(width) + " - " + std::to_string(thick) + "'";
}
