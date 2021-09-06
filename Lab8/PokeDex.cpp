#include "PokeDex.h"

PokeDex::PokeDex() {  //Define Constructor
	head = NULL;
	tail = NULL;
	current = NULL;
}

void PokeDex::setTail(PokeNode* tail) { //Define setter
	return;
}

PokeNode* PokeDex::getCurrent() {  //Define getters
	return current;
}

void PokeDex::addPokemon(PokeNode* pokemon) {
	if (head == NULL) {  //If there is not head then head, tail, current are the same new value.
        head = tail = current = pokemon;
    }
    else {
		//Else add the new value to the end of the linked list
        tail->setNext(pokemon);
        tail->getNext()->setPrev(tail);
        tail = tail->getNext();
    }
}

void PokeDex::loadAll() {
	if (flag) {  //Only allow one load
		addPokemon(new PokeNode("Pikachu", "Electric", 430, 6.0));
		addPokemon(new PokeNode("Lucario", "Fighting/Steel", 525, 54.0));
		addPokemon(new PokeNode("Mewtwo", "Psychic", 680, 122));
		addPokemon(new PokeNode("Greninja", "Water/Dark", 530, 40.0));
		flag = false;
		cout << "Pokemon Loaded" << endl;
	}
	else {
		cout << "You already loaded once!" << endl;
	}
}

//Define how to move the current pointer location
void PokeDex::moveToNext() {
	if (getCurrent()->getNext() == NULL) {
		cout << "There is no next value" << endl;
	}
	else {
		cout << "Moved" << endl;
		current = getCurrent()->getNext();
	}
	
}

void PokeDex::moveToPrev() {
	if (getCurrent()->getPrev() == NULL) {
		cout << "There is no previous value" << endl;
	}
	else {
		cout << "Moved" << endl;
		current = getCurrent()->getPrev();
	}
}

void PokeDex::moveToHead() {
	cout << "Moved" << endl;
	current = head;
}

void PokeDex::moveToTail() {
	cout << "Moved" << endl;
	current = tail;
}

void PokeDex::compare() { //Define compare function
	if (current == head) {  //See if you are comparing the same value
		cout << "You are comparing the same pokemon" << endl;
	}
	else {
		cout << "Comparing the current and the first pokemon" << endl;

		//Compare base stats of pokemon
		cout << "Comparing the total base status: ";
		if (larger<double>(current->getTotalBaseStat(), head->getTotalBaseStat())) {
			cout << current->getName() << " is greater" << endl;
		}
		else {
			cout << head->getName() << " is greater" << endl;
		}

		//Compare weight of pokemon
		cout << "Comparing the weight: ";
		if (larger<double>(current->getWeight(), head->getWeight())) {
			cout << current->getName() << " is greater" << endl;
		}
		else {
			cout << head->getName() << " is greater" << endl;
		}
	}
}

void PokeDex::printAll() {
	PokeNode* temp_current = head;  //Define needed temporray values
	while (temp_current != NULL) {	//Keep iterating until the current pointer points at nothing
		
		if (temp_current == current) {  //Put asterisk on the current entry being pointed.
			cout << "*";
		}
		
		temp_current->print();	//print the pointer value
		temp_current = temp_current->getNext(); //increment pointer to next value
	}
}