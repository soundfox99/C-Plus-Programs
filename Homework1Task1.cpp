#include<iomanip>
#include<iostream>
#include<string>

using namespace std;

//Define Element Weight Constants
const float o_wgt = 15.9994;
const float c_wgt = 12.011;
const float n_wgt = 14.00674;
const float s_wgt = 32.066;
const float h_wgt = 1.00794;

int main() {
	int o_amt, c_amt, n_amt, s_amt, h_amt;		//Define varaibles for the user to change
	
	//Prompt user and get user input
	cout << "Please enter the amount of atoms of oxygen, carbon, nitrogen, sulfur, and hydrogen" << endl;
	cin >> o_amt >> c_amt >> n_amt >> s_amt >> h_amt;

	//Calculate the total weight of the molecule
	//It should be noted that the problem prompt asks us to write a program to computer the molecules weight, but
	//the document asking us to take screenshots asks for average weight. I am submitting code for both because I am not sure which set of instructions is correct.
	double mol_wgt, avg_wgt;
	mol_wgt = (o_wgt * o_amt) + (c_wgt * c_amt) + (n_wgt * n_amt) + (s_wgt * s_amt) + (h_wgt * h_amt);
	avg_wgt = mol_wgt / (o_amt + c_amt + n_amt + s_amt + h_amt);

	cout << fixed;
	cout << "Molecule Weight is: " << setprecision(3) << mol_wgt << "\nThe Average Molecule Weight is: " << setprecision(4) << avg_wgt << endl;

	system("pause");
	return 0;
}