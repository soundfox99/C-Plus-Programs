//Author: Aditya Jindal 112835035

#pragma once

//Import needed libraries.
#include<iostream>
#include<fstream>
#include<string>

using namespace std;
using std::string;

class shoppingList
{
private:
	//Define object variables.
	string file_name;
	fstream myFile;
	string most_expensive_item;
	double max_price;
	string name;
	double price;
public:
	shoppingList();		//Define constructor.

	//Define object funcions.
	bool fileExists(istream& in);
	void addItem(istream& in);
	bool itemExist(istream& in);
	void printMostExpensiveItem();
	void printAll();
};

