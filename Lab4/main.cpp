//Author: Aditya Jindal 112835035

#include "Waterbottle.h"
#include <iostream>
#include<string>
using std::string;
using namespace std;

int main() {
	Waterbottle bottle1;		//Define object variable.
	
	cout << "Please enter the capacity and color of your waterbottle:" << endl; // Prompt user for input.
	
	//Run functions for the task.
	bottle1.input(cin);
	bottle1.output(cout);

	system("pause");
	return 0;
}