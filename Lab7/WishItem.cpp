//Item custom header files
#include "WishItem.h"

//Include necessary C libraries
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;
using std::string;

//Define constructors.
WishItem::WishItem() : price(0), item("") {}
WishItem::WishItem(double price, string item) : price(price), item(item) {}

//Define setter functions.
void WishItem::setPrice(double amount) { price = amount; }
void WishItem::setItem(string name) { item = name; }

//Define getter functions.
double WishItem::getPrice() { return price; }
string WishItem::getItem() { return item; }

//Define functions.
void WishItem::print() {
	cout << setw(40) << left << getItem() << setw(40) << left << getPrice() << endl;

	return;
}