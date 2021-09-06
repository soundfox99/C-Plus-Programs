//Include custom header files.
#include "WishItemList.h"

//Include needed C libraries.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
using std::string;

int main() {
	//Define needed variables
	double temp_price;
	string temp_item;
	char user_choice = 'g';

	WishItemList list;

	do {
		// Give the user the menu and prompt user for choice
		cout << "Wish Item List Manager Options: \na) Add item to list \nd) Delete item from list \np) Print all items in list \nb) Break Code) \nq) Quit Program \n";
		cout << "\nl) Load the items from the file \nz) Pointer practice... \ny) Search by item \ns) Sort the list by the Price \nx) Sort the list by alphaabet \n";
		cout << "Input: ";
		cin >> user_choice;

		cout << endl;

		switch (tolower(user_choice)) {	//Switch case to branch off based off user's choice
		case 'a':	//Add element
			cout << "Please input and item name and price (without the $ sign): ";
			cin >> temp_item >> temp_price;
			list.addItem(temp_item, temp_price);
			break;
		case 'd':	//Delete Element
			cout << "Please input and item name to delete: ";
			cin >> temp_item;
			list.deleteItem(temp_item);
			break;
		case 'p': list.printAll(); break; //Print all
		case 'b': list.breakSecret(); break;	//Break secret
		case 'l': list.loadAll(); break;	//Load from file
		case 's': list.sortByPrice2(); break;	//Sort using heap method
		case 'x': list.sortByAlphabet(); break;	//Sort based on alphabet
		case 'y':	//Search list
			cout << "Please input the item name you want to search for: ";
			cin >> temp_item;
			list.searchByItem(temp_item); break;
		case 'z': break;	//Do nothing
		default: break;	//Default condition
		}

		cout << endl;

	} while (user_choice != 'q');	//Quit program if user chosses q
	
	system("pause");
	return 0;
}