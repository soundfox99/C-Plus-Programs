#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main() {
	char gpa_letter;
	float gpa_num;

	cout << "What is your letter grade" << endl;
	cin >> gpa_letter;

	gpa_letter = toupper(gpa_letter);

	switch (gpa_letter) {
		case 'A' : gpa_num = 4.00; break;
		case 'B' : gpa_num = 3.00; break;
		case 'C' : gpa_num = 2.00; break;
		case 'D' : gpa_num = 1.00; break;
		case 'F' : gpa_num = 0.00; break;
		default: gpa_num = -1.00; break;
	}

	if (gpa_num == -1.00) {
		cout << "You entered an invalid gpa letter " << endl;
	}
	else {
		cout << "Your converted gpa number is " << setprecision(2) << fixed << gpa_num << endl;
	}

	system("pause");
	return 0;
}