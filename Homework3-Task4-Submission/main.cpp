// Aditya Jindal 112835035
// Homework 3 Task 3

// Include needed C libraries
#include <iostream>
#include <fstream>

using namespace std;

// Define function headers
void populate_array(float array[][7], int rows);
double computer_average(float array[][7], int rows);

int main() {
	float power_data[10][7];

	//Define input files
	ifstream input_file("power1.dat");

	//Check to see if program can open input file.
	if (input_file.fail()) {
		cerr << "Error opening input file!" << endl;
		exit(1);
	}

	//Populate the array
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 7; j++) {
			input_file >> power_data[i][j];
		}
	}

	input_file.close(); //Close file because no longer needed

	double avgVec = computer_average(power_data, 10);	//Compute the average power consumption

	cout << "The average of the array is: " << avgVec << endl; //Output results

	system("pause");
	return 0;
}

double computer_average(float array[][7], int rows) {
	double totalVec = 0,  avgVec = 0;

	for (int i = 0; i < rows; i++) {	//Iterate through the array and get the total
		for (int j = 0; j < 7; j++) {
			totalVec += array[i][j];
		}
	}

	avgVec = totalVec / double(7 * (double)rows);	//Calculat the average by dividing the total by the amount of elements in the array

	return avgVec;	//Return the average value
}