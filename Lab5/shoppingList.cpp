//Author: Aditya Jindal 112835035

//Import custome header files
#include"shoppingList.h"

//Import neccessary libraries
#include<iostream>
#include<fstream>
#include<string>

//define naming spaces
using namespace std;
using std::string;

//Define constructor.
shoppingList::shoppingList(): max_price(0), price(0) {}

//Define onject functions.
bool shoppingList::fileExists(istream& in) {
	//Get file name.
	cout << "Please enter the file name: ";
	in >> file_name;

	myFile.open(file_name);		//Set myFile open to user input.

	//Check status of the file.
	if (myFile.fail()) {
		cerr << "Error opeining input file!" << endl;
		return 0;
	}
	else {
		cout << "Successfully opens the target file!" << endl;
		return 1;
	}

	return 0;
}

void shoppingList::addItem(istream& in) {
	string item;
	double price;

	//Propt user for input.
	cout << "Please enter and item and the price (without the dollar sign): " << endl;
	in >> item >> price;
	
	//Move file pointer to the end of the file and add the new item.
	myFile.seekg(0, ios::end);
	myFile << "\n" << item << " " << price;

	return;
}
bool shoppingList::itemExist(istream& in) {
	string input;
	
	//Prompt user for input.
	cout << "Please enter and item name you would like to look up: ";
	in >> input;

	myFile.seekg(0, ios::beg);

	//Iterate throug the entire file to determine if item is in the list.
	while (!(myFile.eof())) {
		myFile >> name >> price;

		if (name == input) {
			cout << "The item exists" << endl;
			return 1;
		}
	}

	cout << "The item does not exists" << endl;
	return 0;
}

void shoppingList::printMostExpensiveItem() {	
	myFile.seekg(0, ios::beg);

	//Iterate through the list to figure out which item is most expensive.
	while (!(myFile.eof())) {
		myFile >> name >> price;

		if (price > max_price) {
			max_price = price;
			most_expensive_item = name;
		}
	}

	//Output the most expensive item
	cout << "The most expensive item is: " << most_expensive_item << " $" << max_price << endl;
	
	return;
}

void shoppingList::printAll() {
	myFile.seekg(0, ios::beg);
	

	//Iterate through the entire list to print all the items in the list.
	for(int counter = 1; (!(myFile.eof())); counter++) {
		myFile >> name >> price;
		cout << counter << ". " << name << " $" << price << endl;
	}

	return;
}