//Author: Aditya Jindal 112835035
//Homework 2 Task 2

//include neccessary libraries:
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Define function headers:
bool device_work();
double rand_float(double a, double b);

int main() {
	int num_simulations = 5000;		//Number of simulations you want to run.
	int passed = 0;					//Counter to see how many devices work


	for (int i = 0; i < num_simulations; i++) {		//For loop to run all the wanted simulations.

		if (device_work()) {		//Increment passed counter if simulation comes back True.
			passed++;
		}
	}

	//Console output for the user.
	cout << "Simulations: " << num_simulations << endl;
	cout << "Device Pass Rate: "  << double(passed)/double(num_simulations) << endl;

	system("pause");
	return 0;
}


bool device_work() {
	double comp1, comp2, comp3, comp4;

	comp1 = rand_float(0, 1);		//Generate random float numbers between 0 and 1.
	comp2 = rand_float(0, 1);
	comp3 = rand_float(0, 1);
	comp4 = rand_float(0, 1);

	//If the component number is 0 or less the component failed.
	comp1 = comp1 - 0.05;		//Offset number by failure rate.
	comp2 = comp2 - 0.05;
	comp3 = comp3 - 0.05;
	comp4 = comp4 - 0.05;


	if (((comp1 <= 0) && (comp2 <= 0)) && ((comp3 <= 0) || (comp4 <= 0))) {		//Conditional to check if the device failed.
		return 0;
	}
	else {
		return 1;
	}
	
	return 1;
}


double rand_float(double a, double b)		//Define rand_float function.
{
	return ((double)rand() / RAND_MAX) * (b - a) + a;
}