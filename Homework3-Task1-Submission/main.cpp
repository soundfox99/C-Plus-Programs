//Include neccessary C libraries
#include <iostream>


using namespace std;

//Define function headers
void sort_descending(int *array, int size);
bool num_find(int *array, int size, int num);


//Define main function
int main() {
	int arr[5] = { 29, 32, 20, 78, 31 };
	int size = (sizeof(arr) / sizeof(arr[0]));	//Allows for easy change of array variable

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	sort_descending(arr, size);

	//Print altered array
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	int num;
	//Get user input
	cout << "What nummber will you like to look for: ";
	cin >> num;

	//Output result
	cout << num << " is in the array: " << boolalpha << num_find(arr, size, num) << endl;;
	
	system("pause");
	return 0;
}

//Define functions
void sort_descending(int *array, int size) {
	int temp;

	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (array[i] < array[j]) {	//Compare differnt values in the array and swap the if they are not in descending order
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	
	}
	return;
}

bool num_find(int *array, int size, int num) {
	//Define different bounds to calculate moving middle of search area
	int lower_bound = 0;
	int upper_bound = size - 1;

	while (lower_bound <= upper_bound){
		int middle = floor(((lower_bound + upper_bound) / 2)); //Calculate the middle of the search area
		
		if (array[middle] > num){	//If the middle is greather than the number move the the search area up to the lower numbers
			lower_bound = middle + 1;
		}
		else if (array[middle] < num) {	//If the middle is less tahn the number move the search area down to the lower numbers
			upper_bound = middle - 1;
		}
		else {
			return 1;		//If neither condition is met then we found the number
		}
	}

	return 0;		//Otherwise the number is not in the array
}