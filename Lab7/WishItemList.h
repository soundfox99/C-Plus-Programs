//Include custom header files
#include "wishItem.h"

//Include needed C libraries.
#pragma once
#include <string>
#include <vector>
#include <iomanip>

using std::string;

class WishItemList
{
private:
	WishItem wishItem[15];
public:
	WishItemList();
	void printAll();
	void addItem(string item, double price);
	void deleteItem(string item);
	void breakSecret();
	//----------------------LAB07
	void loadAll();
	//void pointerPractice();
	void sortByPrice();
	void sortByPrice2();
	void sortByAlphabet();
	void searchByItem(string item);
	void heapify(int size, int num);
};

