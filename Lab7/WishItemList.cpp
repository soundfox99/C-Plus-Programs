//Include needed header files.
#include "WishItemList.h"
#include "wishItem.h"

//Include needed C libraries.
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;
using std::string;

//Define Constructor
WishItemList::WishItemList() {}

void WishItemList::printAll() {
	
	double total_price = 0;
	int j = 1;

	cout << "Wish List:" << endl;
	for (int i = 0; i < sizeof(wishItem) / sizeof(wishItem[0]); i++) {		//Iterate through the array using the print function on all the elements
		if (wishItem[i].getItem() != "") {		//If the element is empty then don't print it
			cout << setw(10) << left << j;
			j++;
			wishItem[i].print();
			total_price += wishItem[i].getPrice();		//Keep track of total price
		}
	}

	cout << "\nThe total amount of this list is: $" << total_price << endl;

	return;
}

void WishItemList::addItem(string item, double price) {
	for (int i = 0; i < sizeof(wishItem) / sizeof(wishItem[0]); i++) {	//Iterate through the array to see if there is an empty slot
		if (wishItem[i].getItem() == "") {		//If there is an empty slot add the item
			wishItem[i].setItem(item);
			wishItem[i].setPrice(price);
			return;
		}
	}

	cout << "No Room in the list to store the item" << endl;	//Otherwise inform the use the list is full
	return;
}

void WishItemList::deleteItem(string item) {
	for (int i = 0; i < sizeof(wishItem) / sizeof(wishItem[0]); i++) {	//Iterate through the list
		if (wishItem[i].getItem() == item) {	//Check to see if the item is present
			wishItem[i].setItem("");
			wishItem[i].setPrice(0);
		}
	}

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

void WishItemList::loadAll() {
	fstream input_file;
	string file_name;

	//Prompt user for the file name
	cout << "Please enter the file name: ";
	cin >> file_name;

	input_file.open(file_name);

	//Check to see if the program open input and output files.
	if (input_file.fail()) {
		cerr << "\nError opening input file!" << endl;
		return;
	}

	cout << "File loaded successfully" << endl;
	
	string name;
	double price;

	while (!input_file.eof()) { // Add all items from the list to the array
		input_file >> name >> price;
		addItem(name, price);
	}

	return;
}

//void pointerPractice();

void WishItemList::sortByPrice() {
	WishItem temp;
	
	//Iterate through the list comparing each element to every other element in the array to sort them
	for (int i = 0; i < sizeof(wishItem) / sizeof(wishItem[0]); i++) {
		for (int j = i; j < sizeof(wishItem) / sizeof(wishItem[0]); j++) {
			if (wishItem[j].getPrice() < wishItem[i].getPrice()) {
				temp = wishItem[j];
				wishItem[j] = wishItem[i];
				wishItem[i] = temp;
			}
		}
	}

	cout << "Items sorted successfully in assending order" << endl;
	return;
}
void WishItemList::sortByAlphabet() {
	WishItem temp;

	//Iterate through the list comparing each element to every other element in the array to sort them
	for (int i = 0; i < sizeof(wishItem) / sizeof(wishItem[0]); i++) {
		for (int j = i; j < sizeof(wishItem) / sizeof(wishItem[0]); j++) {
			if (wishItem[i].getItem().compare(wishItem[j].getItem()) > 0) {
				temp = wishItem[j];
				wishItem[j] = wishItem[i];
				wishItem[i] = temp;
			}
		}
	}

	cout << "Items sorted successfully in alphabetical order" << endl;
	return;
}
void WishItemList::searchByItem(string item) {
	sortByAlphabet();

	int lower_bound = 0;
	int upper_bound = (sizeof(wishItem) / sizeof(wishItem[0])) - 1;
	int middle = 0;

	while (lower_bound <= upper_bound) {	//While the lower bound is less than the upper bound continue looping

		middle = (upper_bound + lower_bound) / 2;	//Compute the middle of the array

		//cout << lower_bound << " " << middle << " " << upper_bound << " " << item << endl;

		if (wishItem[middle].getItem().compare(item) < 0) {	//If item name greater than the middle elements name increase the lower bound
			lower_bound = middle + 1;
		}
		else if (wishItem[middle].getItem().compare(item) > 0) {	//If item name less than the middle element decrease upper bound
			upper_bound = middle - 1;
		}
		else {		//Otherwise you found the element
			wishItem[middle].print();
			return;
		}
	}

	cout << "Could not find the item" << endl;	//If not the element does not exist
	return;
}

void WishItemList::heapify(int size, int num)
{
	//Compute parent and children
	int parent = num; 
	int left_child = 2 * num + 1; 
	int right_child = 2 * num + 2; 

	//Conditional to determine what number is the largest (parent or child)
	if (left_child < size && wishItem[left_child].getPrice() > wishItem[parent].getPrice())
		parent = left_child;

	if (right_child < size && wishItem[right_child].getPrice() > wishItem[parent].getPrice())
		parent = right_child;

	if (parent != num) { //If the parent was not the largest then loop back through and sort untill it is
		swap(wishItem[num], wishItem[parent]);

		heapify(size, parent);
 	}
}

void WishItemList::sortByPrice2()
{
	int size = (sizeof(wishItem) / sizeof(wishItem[0]));	//Compute the size of the array
	 
	for (int i = size / 2 - 1; i >= 0; i--)	//sort the array initially to move the largest element to the 0 position
		heapify(size, i);

	for (int i = size - 1; i >= 0; i--) {	//recursivly loop through the array sorting the unsorted elements
		swap(wishItem[0], wishItem[i]);

		heapify(i, 0);
	}
}