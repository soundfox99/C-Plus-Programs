// Author : Aditya Jindal 112835035
// Description: Lab03 Problem 4

//Include necessary libraries for the code.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	//Define input and output files.
	ifstream fin("data3.dat");
	ofstream fout("data3report.dat");

	float length, width;

	//Check to see if the program open input and output files.
	if (fin.fail()) {
		cerr << "Error opening input file!" << endl;
		exit(1);
	}

	if (fout.fail()) {
		cerr << "Error opening output file!" << endl;
		exit(1);
	}

	double total_area=0;
	int total_rect=0;

	//Iterate through the entire input file.
	do {
		fin >> length >> width;
		if (length != width) {		//Conditional to exclude squares.
			total_rect++;
			total_area = total_area + (double(length) * double(width));
			fout << length << " " << width << endl;
		}		
	} while (!fin.eof());

	fout << "\nTotal Rectangles not including squares: " << total_rect << "\nAverage area of rectangles not including squares: " << (total_area / total_rect) << endl;

	//Close the input and output files.
	fin.close();
	fout.close();

	system("pause");
	return 0;
}