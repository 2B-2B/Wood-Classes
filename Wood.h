#ifndef WOOD_H
#define WOOD_H
class Wood
{
protected:
	double price;
	int amount;

public:
	Wood();
	Wood(double, int);
	//accessors and mutators
	void setPrice(double p) { price = p; }
	void setAmount(int a) { amount = a; }
	double getPrice() { return price; }
	int getAmount() { return amount; }

	//additional functions
	double totalPrice() { return price * amount; }
};

#endif

