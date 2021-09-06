//Aditya Jindal 112835035
//Included needed C libratires
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

//Define Fuction
bool palindrome(char* ptr) {
	queue<char>foward;
	stack<char>backward;

	for (int i = 0; ptr[i] != '\0'; i++) {
		//Clean input
		if (ptr[i] >= 'A' && ptr[i] <= 'Z') {
			ptr[i] = 'a' + (ptr[i] - 'A');
		}
		//Load values in stack and array
		if (ptr[i] >= 'a' && ptr[i] <= 'z') {
			foward.push(ptr[i]);
			backward.push(ptr[i]);
		}
	}

	while(!backward.empty()) {  //Compare the stack and the array
		if (foward.front() != backward.top()) {
			return false;	//return false if any character does not match
		}
		foward.pop();
		backward.pop();
	}

	return true;	//if all characters match resturn true
}

//Define main function
int main() {
	char input[100]; //Define varibale

	//Prompt user input
	cout << "Please input a string: ";
	cin >> input;
	cout << endl;

	char* pointer = input; //Set pointer to the first charcter of input

	bool result = palindrome(pointer); //call function

	cout << "\nIs Palindrome: " << boolalpha << result << endl; //Display result

	system("pause");
	return 0;
}