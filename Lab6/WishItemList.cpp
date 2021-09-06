//Include needed header files.
#include "WishItemList.h"
#include "wishItem.h"

//Include needed C libraries.
#include <iostream>
#include <string>

using namespace std;
using std::string;

//Define Constructor
WishItemList::WishItemList() {}


//Define functions
void WishItemList::printAll() {
	
	double total_price = 0;
	int j = 1;

	cout << "Wish List:" << endl;
	//Iterate through vector.
	for (size_t i = 0; i < wishItem.size(); i++) {
		cout << (i + 1) << ". " << wishItem[i].getItem() << "\t$" << wishItem[i].getPrice() << endl;
		total_price += wishItem[i].getPrice();
	}

	cout << "\nThe total amount of this list is: $" << total_price << endl;		//Output total amount of wish list.

	return;
}

void WishItemList::addItem(string item, double price) {
	//Set up new WishItem object
	WishItem newItem;
	newItem.setItem(item);
	newItem.setPrice(price);
	
	wishItem.push_back(newItem);	//Add new object to end of vector

	return;
}

void WishItemList::deleteItem(string item) {
	for (size_t i = 0; i < wishItem.size(); i++) {		//Iterate through vecotr untill you find the right object to delte
		if (wishItem[i].getItem() == item) {
			wishItem.erase(wishItem.begin() + i);
			cout << "Successfully deleted item" << endl;
			return;
		}
	}

	//In case user wants to delte object not in the vecotr
	cout << "Could not find item" << endl;
	return;
}

void WishItemList::breakSecret() {
	string secretItemArray = "mpmafzohklzvmnylf";
	string alteredArray = secretItemArray;		//Copy item array for manipulation

	for (int i = 1; i <= 10; i++) {
		alteredArray = secretItemArray;	//reset manipulation array
		for (int j = 0; j < alteredArray.size(); j++) {
			if (alteredArray[j] < ('a' + i)) {		//Conditional to loop around the letters
				alteredArray[j] = ('z' + ((alteredArray[j] - 'a') - i + 1));
			}
			else {
				alteredArray[j] = alteredArray[j] - i;	//otherwise just mainpulate the letters.
			}
		}
		cout << "Shift left by " << i << ":" << alteredArray << "\n" << endl;	//Output result.
	}


	return;
}