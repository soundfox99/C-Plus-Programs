//Include custom header files.
#include "WishItemList.h"

//Include needed C libraries.
#include <iostream>
#include <string>

using namespace std;
using std::string;

int main() {
	//Define needed variables
	double temp_price;
	string temp_item;
	char user_choice = 'g';

	WishItemList list;

	//Loop through a loop untill the user stops the program
	do {
		//Display and input program choices
		cout << "Wish Item List Manager Options: \na) Add item to list \nd) Delete item from list \np) Print all items in list \nb) Break secret \nq) Quit Program  \nInput: ";
		cin >> user_choice;

		cout << endl;

		//Switch into the different choices
		switch (tolower(user_choice)) {
		case 'a':
			cout << "Please input and item name and price (without the $ sign): ";
			cin >> temp_item >> temp_price;
			list.addItem(temp_item, temp_price);
			break;
		case 'd':
			cout << "Please input and item name to delete: ";
			cin >> temp_item;
			list.deleteItem(temp_item);
			break;
		case 'p': list.printAll(); break;
		case 'b': list.breakSecret(); break;
		}

		cout << endl;

	} while (user_choice != 'q');
	
	system("pause");
	return 0;
}