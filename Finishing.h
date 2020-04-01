#ifndef FINISHING_H
#define FINISHING_H

#include "Wood.h"
#include <string>
#include <iostream>

class Finishing :public Wood
{
private:
	double length,height;
	std::string mouldType, material;
public:
	Finishing();
	Finishing(double, double, std::string, std::string, double, int);

	//accessors and mutators
	void setLength(double l) { length = l; }
	void setThick(double h) { height = h; }
	double getLength() { return length; }
	double getThick() { return height; }

	//additional functions
	std::string dimentionCombination();
};

#endif
