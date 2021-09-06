#include "PokeBattle.h"
#include "PokeNode.h"
#include <list>
#include <stack>
#include <iostream>

using namespace std;

void PokeBattle::addPokeNode(PokeNode* pokemon) {
	pokeList.push_back(pokemon);		//Add pokemon to the List
	return;
}

void PokeBattle::loadPokeNode() {
	//Load multiple pokemon to the list
	cout << endl;
	addPokeNode(new PokeNode("Pikachu", "Electric", 90, 6.0));
	addPokeNode(new PokeNode("Jigglypuff", "Water/Dark", 22, 5.5));
	addPokeNode(new PokeNode("Mega Lucario", "Fighting/Steel", 122, 54.0));
	addPokeNode(new PokeNode("Mewtwo", "Psychic", 130, 120));
	addPokeNode(new PokeNode("Greninja", "Water/Dark", 122, 40.0));
	addPokeNode(new PokeNode("Charizard", "Water/Dark", 100, 90.5));
	cout << endl;

	return;
}

void PokeBattle::sort() {
	//Sort the list as needed for the program
	pokeList.sort([](PokeNode* lhs, PokeNode* rhs) {return lhs->getSpeedStat() < rhs->getSpeedStat(); });
}

void PokeBattle::pushAll() {
	//Push the list to a stack
	for (auto i: pokeList) {
		pokeStack.push(i);
	}
	return;
}

PokeNode* PokeBattle::pop() {
	// return the last valeu and delete it from the stack
	PokeNode* temp = pokeStack.top();
	pokeStack.pop();
	return temp;
}

void PokeBattle::battleSimulation() {
	loadPokeNode();	//load values
	sort();	//sort list
	pushAll(); //push list into stack

	int total_size = pokeStack.size();	//store total stack size
	cout << "Sumulating..." << endl;
	for (int i = 1; i <= total_size; i++) {
		//Display the stack in the order of highest speed ot lowest speed
		cout << "Action " << i << ": " << pop()->getName() << " moved!" << endl;
	}

	return;
}
