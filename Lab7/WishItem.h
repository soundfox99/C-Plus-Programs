//Include needed C libraries.
#pragma once
#include <string>
#include <iomanip>

using std::string;

class WishItem
{
private:
	double price;
	string item;
public:
	//Getter Headers.
	WishItem();
	WishItem(double price, string item);

	//Define functions.
	double getPrice();
	string getItem();
	void setPrice(double price);
	void setItem(string item);
	void print();
};

