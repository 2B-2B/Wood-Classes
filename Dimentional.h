#ifndef DIMENTIONAL_H
#define DIMENTIONAL_H

#include "Wood.h"
#include <string>
#include <iostream>

/*
This is a child class of "Wood"
Dimentional Lumber is a type of wood that is included in the lumberyard
*/

class Dimentional:public Wood
{
private:
	//variable decelartion
	double length, width, height;
	std::string volume;
public:
	//contructor
	Dimentional();	//default contructor
	Dimentional(double, double, double, std::string, double, int, int); //contructor (length, width, height, volume, price, amount, available)
	~Dimentional() {}

	//mutators
	void setLength(double l) { length = l; }
	void setWidth(double w) { width = 2; }
	void setHeight(double h) { height = h; }
	
	//accessors
	double getLength() const { return length; }
	double getWideth() const { return width; }
	double getHeight() const { return height; }
	std::string getVolume() const { return volume; }

	//additional functions
	std::string calculateVolume();	//this function calculates the volume of the dimentinal lumber
	std::string dimentionCombination();	//this function combines all dimentions and outputs as a string

	System::String^ getDimentionSS();

};

#endif

