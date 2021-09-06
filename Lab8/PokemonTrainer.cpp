//Authour Aditya Jindal 112835035

//Included needed C++ libraries
#include<iostream>
//Included needed custom header files
#include "PokeNode.h"
#include "PokeDex.h"

using namespace std;

int main() {
	//Define needed variables.
	PokeDex dex = PokeDex();
	char user_input = '9';

	while (user_input != 'q') {
		//Give the user the option.
		cout << "\n(p) - Print all the registered Pokemon data" << endl;
		cout << "(l) - Loading some pokemon to my Pokedex" << endl;
		cout << "(n) - Select next Pokemon" << endl;
		cout << "(b) - Select previous Pokemon" << endl;
		cout << "(t) - Select the last Pokemon" << endl;
		cout << "(h) - Select the first Pokemon" << endl;
		cout << "(c) - Comapre the current Pokemon to the head Pokemon" << endl;
		cout << "(q) - Quit the Promgram" << endl;

		//Get user input.
		cout << "\nPlease select an option: ";
		cin >> user_input;

		//Switch based on user's input.
		switch (user_input) {
		case 'p': dex.printAll();  break;
		case 'l': dex.loadAll(); break;
		case 'n': dex.moveToNext(); break;
		case 'b': dex.moveToPrev(); break;
		case 't': dex.moveToTail(); break;
		case 'h': dex.moveToHead(); break;
		case 'c': dex.compare(); break;
		}
	}

	system("pause");
	return 0;
}