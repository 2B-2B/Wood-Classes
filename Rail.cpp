#include "Rail.h"

Rail::Rail() {
	length = height = 0;
	material, type = "";
}

Rail::Rail(double l, double h, std::string m, std::string t, double p, int a) : Wood(p, a) {
	length = l;
	height = h;
	type = t;
	material = m;
}

std::string Rail::dimentionCombination() {
	return std::to_string(length) + "'' X " + std::to_string(height) + " '' " + type + " " + material;
}
