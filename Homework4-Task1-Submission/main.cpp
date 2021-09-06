//Aditya Jindal 112835035
//Included needed C libratires
#include <iostream>

using namespace std;

//Define Fuction
char mostRepeatedChar(char* ptr) {
	int letter_count[26] = { 0 };	//array to keep track of iterations

	//Interate throught the character array
	for (int i = 0; ptr[i] != '\0'; i++) {
		//Clean input
		if (ptr[i] >= 'A' && ptr[i] <= 'Z') {
			ptr[i] = 'a' + (ptr[i] - 'A');
		}
		//Count the letters
		if (ptr[i] >= 'a' && ptr[i] <= 'z') {
			letter_count[(ptr[i] - 'a')]++;
		}
	}

	int max_count = 0;	//figure tout which letter has the most repitiions
	for (int i = 0; i < 26; i++) {
		if (letter_count[i] > max_count) {
			max_count = letter_count[i];
		}
	}

	char max_char;
	for (int i = 0; i < 26; i++) {
		if (letter_count[i] == max_count) {
			max_char = 'a' + i;
			break;	//break when the first max count is reached
		}
	}

	return max_char;
}

//Define main function
int main() {
	char input[100];

	//Prompt user for input
	cout << "Please input a string: ";
	cin >> input;
	cout << endl;

	char* pointer = input;	//make char pointer

	char most = mostRepeatedChar(pointer); //call function

	cout << "\nMost Character: " << most << endl;	//output results

	system("pause");
	return 0;
}