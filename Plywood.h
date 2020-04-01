#ifndef PLYWOOD_H
#define PLYWOOD_H

#include "Wood.h"
#include <string>
#include <iostream>

class Plywood :public Wood
{
private:
	double length, width, thick;
	std::string volume, type;
public:
	Plywood();
	Plywood(double, double, double, std::string, double, int);

	//accessors and mutators
	void setLength(double l) { length = l; }
	void setWidth(double w) { width = 2; }
	void setThick(double h) { thick = h; }
	double getLength() { return length; }
	double getWideth() { return width; }
	double getThick() { return thick; }
	std::string getVolume() { return volume; }

	//additional functions
	std::string calculateVolume();
	std::string dimentionCombination();
};

#endif
