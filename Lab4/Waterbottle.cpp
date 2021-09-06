//Author: Aditya Jindal 112835035

#include "Waterbottle.h"
#include<iostream>
#include<string>

using namespace std;
using std::string;

//Define constructors.
Waterbottle::Waterbottle() : capacity(0), color("None") {}

//Define setter functions.
void Waterbottle::setCapacity(float cap) { capacity = cap; }
void Waterbottle::setColor(string col) { color = col; }

//Define getter functions.
float Waterbottle::getCapacity() { return capacity; }
string Waterbottle::getColor() { return color; }

//Define input and output functions.
void Waterbottle::input(istream& in) {
	double capacity;
	string color;

	in >> capacity >> color;

	setCapacity(capacity);
	setColor(color);

	return;
}

void Waterbottle::output(ostream& out) {
	out << "The capacity and color of your bottole is: " << getCapacity() << " " << getColor() << endl;

	return;
}