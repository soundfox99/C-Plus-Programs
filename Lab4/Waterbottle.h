//Author: Aditya Jindal 112835035

#pragma once
#include<iostream>
#include<string>

using namespace std;
using std::string;


class Waterbottle
{
private:
	// Define private variables.
	float capacity;
	string color;
public:
	//Define constructor functions.
	Waterbottle();

	//Define setters for the two private variables.
	void setCapacity(float capacity);
	void setColor(string color);

	//Define the two getter functions.
	float getCapacity();
	string getColor();

	//Define needed functions for the task.
	void input(istream& in);
	void output(ostream& out);
};

