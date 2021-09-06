#include <iostream>
#include "PokeDex.h"
#include "PokeBattle.h"

void controlPanel(istream&, PokeDex&);
void controlPanel2(istream&, PokeBattle&);

using namespace std;

int main() {
	cout << "Opening PokemonTrainer.cpp ..." << endl;
	PokeBattle pokeBattle;
	PokeDex pokeDex;
	char expression = '3';
	while (expression != 'q') {
		cout << "(1) - Using Pokedex..." << endl;
		cout << "(2) - Using Battle simulation" << endl;
		cout << "(q) - Quit Porgram" << endl;
		cout << "Input: ";
		cin >> expression;
		switch (expression) {
		case '1':
			cout << "Using array..." << endl;
			controlPanel(cin, pokeDex);
			break;
		case '2':
			controlPanel2(cin, pokeBattle);
			break;
		
		}
	}
	cout << "\nExiting the program..." << endl;
	return 0;
}

void controlPanel(istream& in, PokeDex& pokeDex) {

	cout << "\n(p) - Print all the registered Pokemon data" << endl;
	cout << "(l) - Loading some Pokemon to my Pokedex" << endl;
	cout << "(n) - Select next Pokemon" << endl;
	cout << "(b) - Select previous Pokemon" << endl;
	cout << "(t) - Select the last Pokemon" << endl;
	cout << "(h) - Select the first Pokemon" << endl;
	cout << "(c) - Comparing the current Pokemon to the head Pokemon" << endl;
	cout << "(q) - Quit the program" << endl;

	char expression = '1';
	while (expression != 'q') {
		cout << "\nPlease select an option: ";
		in >> expression;

		switch (expression) {
		case 'p':
			pokeDex.printAll();
			break;
		case 'l':
			pokeDex.loadAll();
			cout << "\nLoading complete\n";
			break;
		case 'n':
			pokeDex.moveToNext();
			break;
		case 'b':
			pokeDex.moveToPrev();
			break;
		case 't':
			pokeDex.moveToTail();
			break;
		case 'h':
			pokeDex.moveToHead();
			break;
		case 'c':
			pokeDex.compare();
			break;
		}
	}
}

void controlPanel2(istream& in, PokeBattle& pokeBattle) {
	cout << "\n(b) - battle simulation" << endl;

	char expression = '1';
	while (expression != 'q') {
		cout << "\nPlease select an option: ";
		in >> expression;

		switch (expression) {
		case 'b':
			pokeBattle.battleSimulation();
			break;
		}
	}
}