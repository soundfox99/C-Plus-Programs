// Aditya Jindal 112835035
// Homework 3 Task 3

// Include needed C libraries
#include <iostream>
#include <fstream>

using namespace std;

// Define function headers
void populate_array(float array[][7], int rows);
void display_minimum(float array[][7], int rows);

int main() {
	float power_data[10][7];

	populate_array(power_data, 10);
	display_minimum(power_data, 10);
	

	system("pause");
	return 0;
}

void populate_array(float array[][7], int rows) {
	//Define input files
	ifstream input_file("power1.dat");

	//Check to see if program can open input file.
	if (input_file.fail()) {
		cerr << "Error opening input file!" << endl;
		exit(1);
	}

	for (int i = 0; i < 10; i++) {		//Populate the array with the values from the file
		for (int j = 0; j < 7; j++) {
			input_file >> array[i][j];
		}
	}

	input_file.close();	//Close the file when done
	return;
}


void display_minimum(float array[][7], int rows) {
	int temp_week, temp_day;
	double min_power;

	for (temp_week = 0; temp_week < rows; temp_week++) {	//Iterate through the array to display the days per week that were the lowest
		min_power = -1;
		for (temp_day = 0; temp_day < 7; temp_day++) {	//For loop to determine which value per week is the lowest
			if (array[temp_week][temp_day] < min_power) {
				min_power = array[temp_week][temp_day];
			}
			else if (min_power == -1) {
				min_power = array[temp_week][temp_day];
			}
		}

		cout << "Week " << (temp_week + 1);

		for (temp_day = 0; temp_day < 7; temp_day++) {	//Out put all the days in that week with the lowest value (in case there are multiple)
			if (array[temp_week][temp_day] == min_power) {
				cout << " Day " << (temp_day + 1) << ": " << (array[temp_week][temp_day]);
			}
		}
		
		cout << endl;
	}

	return;
}