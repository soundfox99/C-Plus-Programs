// Author: Aditya Jindal 1112835035

//Import needed libaries.
#include<iostream>
#include<string>

//Import custom header files.
#include"shoppingList.h"

int main() {
	//Defien needed variables.
	bool exist = 0, quit = 0;
	char input;

	shoppingList list;		//Create shopping lsit object
	
	//Continously prompt user to enter file name untill one exists
	while (!exist) {
		exist = list.fileExists(cin);
		cout << endl;
	}

	//Continouslly propmpt user with what they want to do untill they quit.
	while (!quit) {
		//Print options to the user.
		cout << "\n(a) - add an item and its price" << endl;
		cout << "(i) - check to see if this item exists" << endl;
		cout << "(e) - print the most expensive item in the list" << endl;
		cout << "(p) - print all items and its price" << endl;
		cout << "(q) - quit the program\n" << endl;

		//Get users choice.
		cout << "Please select and option: ";
		cin >> input;
		input = tolower(input);
		
		//Break into the different choices.
		switch (input) {
		case 'a': list.addItem(cin);  break;
		case 'i': list.itemExist(cin);  break;
		case 'e': list.printMostExpensiveItem();  break;
		case 'p': list.printAll();  break;
		case 'q': quit = 1; break;
		default: break;
		}

	}


	system("pause");
	return 0;
}