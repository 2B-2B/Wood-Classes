#ifndef PLYWOOD_H
#define PLYWOOD_H

#include "Wood.h"
#include <string>
#include <iostream>

/*
this is a child class of "Wood"
Plywood is a type of wood offered in our lumber yard
*/

class Plywood :public Wood
{
private:
	//variable deceleration
	double length, width, thick;
	std::string volume;

public:
	//contructor
	Plywood();	//default constructor
	Plywood(double, double, double, std::string, double, int, int); //constructor (length, width, thick,  volume, price, amount, avaiable)
	Plywood(const Plywood&);
	~Plywood() {}

	//mutators
	void setLength(double length) { this->length = length; }
	void setWidth(double width) { this->width = width; }
	void setThick(double thick) { this->thick = thick; }
	
	//accessors
	double getLength() const{ return this->length; }
	double getWideth() const{ return this->width; }
	double getThick() const{ return this->thick; }
	std::string getVolume() const{ return this->volume; }

	//additional functions
	std::string calculateVolume();		//this function calculates the volume of the board using dimensions
	std::string dimentionCombination();	//this function combines all dimentions and outputs it as a string

	System::String^ getDimentionSS();
};

#endif
