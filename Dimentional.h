#ifndef DIMENTIONAL_H
#define DIMENTIONAL_H

#include "Wood.h"
#include <string>
#include <iostream>

class Dimentional:public Wood
{
private:
	double length, width, height;
	std::string volume;
public:
	Dimentional();
	Dimentional(double, double, double, std::string, double, int);
	
	//accessors and mutators
	void setLength(double l) { length = l; }
	void setWidth(double w) { width = 2; }
	void setHeight(double h) { height = h; }
	double getLength() { return length; }
	double getWideth() { return width; }
	double getHeight() { return height; }
	std::string getVolume() { return volume; }

	//additional functions
	std::string calculateVolume();
	std::string dimentionCombination();
};

#endif

