#include "Finishing.h"

Finishing::Finishing() {
	length = height = 0;
	material, mouldType = "";
}

Finishing::Finishing(double l, double h, std::string m, std::string t, double p, int a) : Wood(p, a) {
	length = l;
	height = h;
	mouldType = t;
	material = m;
}

std::string Finishing::dimentionCombination() {
	return std::to_string(length) + "X"+ std::to_string(height) + mouldType + " " + material;
}
