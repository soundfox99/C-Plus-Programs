//Include needed C libraries
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Define function headers;
void input_vector(vector <double> &vect);
void display_vector(vector <double> &vect);
void average_vector(vector <double> &vect);

int main() {
	//create vector
	vector <double> scores;

	input_vector(scores);
	display_vector(scores);
	average_vector(scores);

	system("pause");
	return 0;
}

void input_vector(vector <double> &vect) {
	//define variables
	string user_input;
	double temp_score;

	cout << "Please input up to 10 golf scores or enter quit to stop entering scores" << endl;

	for (int i = 0; (i < 10); i++) {	//Prompt user for 10 entries
		cout << "Score: ";
		cin >> user_input;

		if (user_input == "quit") {	//Condition to let the user terminate the program early
			break;
		}
		else {
			temp_score = atof(user_input.c_str());
			vect.push_back(temp_score);	//Push new value into vector
		}

	}

	return;
}
void display_vector(vector <double> &vect) {
	
	cout << "Scores: ";
	for (size_t i = 0; i < vect.size(); i++) {	//Iterate through the vector and display them
		cout << vect[i] << " ";
	}
	cout << endl;

	return;
}
void average_vector(vector <double>& vect) {
	//Declare variables
	double total_score = 0;
	double total = 0;

	for (size_t i = 0; i < vect.size(); i++) {	//Iterate through the vector and compute the total score and the number of entries to get average.
		total_score += vect[i];
		total++;
	}
	cout << "Average Score: " << (total_score / total) << endl;
}