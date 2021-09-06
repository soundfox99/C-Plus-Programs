//Author: Aditya Jindal 112835035
//Homework 2 Task 1

//include neccessary libraries:
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	//Define input and output files.
	ifstream fin("input.txt");
	ofstream fout("output.txt");

	//Check states of the input and output files before reading and writing.
	if (fin.fail()) {
		cerr << "Error opening input file!" << endl;
		exit(1);
	}
	if (fout.fail()) {
		cerr << "Error opening output file!" << endl;
		exit(1);
	}

	char c;		//Temp character varaible to store input file characters to later check.

	while (!fin.eof()) {		//Continously loop untill done reading from input file.
		c = fin.get();			//Used get() instead of input stream so I can get white space and new line characters

		if ((c != '$') && (c != ',') && (c != ')') && (c != EOF)) {		//Conditional to exclude unwanted characters.
			if (c == '(') {		//Conditional to convert character
				c = '-';
			}
			fout << c;			//output character to output file.
		}
	}

	//Close the input and output files.
	fin.close();
	fout.close();

	system("pause");
	return 0;
}