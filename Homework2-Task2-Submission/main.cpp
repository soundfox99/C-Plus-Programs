//Author: Aditya Jindal 112835035
//Homework 2 Task 2

//include neccessary libraries:
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Define function headers:
void harmonic_mean(double x, double& y);

int main() {
	double x, y;
	
	do {
		//Prompt user for input
		cout << "Please enter two values: " << endl;
		cin >> x >> y;

		harmonic_mean(x, y);

	} while ((x != 0) && (y != 0));		//Keep looping untill at least on of the inputs is zero

	system("pause");
	return 0;
}

void harmonic_mean(double x, double& y) {
	double mean;

	mean = (2 * x * y) / (x + y);		//calculate harmonic mean

	if ((x == 0) && (y == 0)) {		//Conditioanl to determine if you are dividing by zero and if you are to change the output prompt.
		cout << "There is no hermonic mean of the values: " << x << " and " << y << " because we are dividing be zero." << endl;
	}
	else {
		cout << "There hermonic mean of the values: " << x << " and " << y << " is " << mean << endl;
		cout << endl;
	}

	return;
}