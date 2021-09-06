//Include custom header files
#include "wishItem.h"

//Include needed C libraries.
#pragma once
#include <string>
#include <vector>

using std::string;
using namespace std;

class WishItemList
{
private:
	vector <WishItem> wishItem;
public:
	WishItemList();
	void printAll();
	void addItem(string item, double price);
	void deleteItem(string item);
	void breakSecret();
};

