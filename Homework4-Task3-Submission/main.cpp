//Aditya Jindal 112835035
//Included needed C libratires
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Define Fuction
template <typename T>
vector<T> combine(vector<T> &vector1, vector<T> &vector2) {
	//Define varaibles needed for function
	vector<T> result;
	T temp;

	result.reserve(vector1.size() + vector2.size());	//same memory
	result.insert(result.end(), vector1.begin(), vector1.end()); //Put in vector 1 values
	result.insert(result.end(), vector2.begin(), vector2.end()); //Put in vecotr 2 values

	//sort vector
	for (size_t i = 0; i < result.size(); i++) {
		for (size_t j = i; j < result.size(); j++) {
			if (result[i] > result[j]) {
				temp = result[j];
				result[j] = result[i];
				result[i] = temp;
			}
		}
	}

	return result;  //return result
}

//Define main function
int main() {
	//Hardcoded test vectors
	vector<int> num_vector1{ 1, 3, 6, 9, 12 };
	vector<int> num_vector2{ 2, 4, 7, 10, 15, 17 };

	vector<int> result = combine(num_vector1, num_vector2);  //Call funtion

	//display testing values to console and reults
	cout << "Combined Number Vectors, {1,3,6,9,12} and {2,4,7,10,15,17}: ";
	for (size_t i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	cout << endl;

	//Hardcoded test vectors
	vector<char> char_vector1{ 'b','r','t' };
	vector<char> char_vector2{ 'a', 'h', 's' };

	vector<char> result2 = combine(char_vector1, char_vector2);  //call function

	//Display testing values to console and results
	cout << "Combined Character Vectors, {'b','r','t'} and {'a','h','s'}: ";
	for (size_t i = 0; i < result2.size(); i++) {
		cout << result2[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}