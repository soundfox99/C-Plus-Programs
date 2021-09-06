#include "PokeNode.h"
#include <iostream>
#include <iomanip>

using namespace std;

//Define constructor
PokeNode::PokeNode(string name, string type, int totalBaseStat, double weight) {
	this->name = name;
	this->type = type;
	this->totalBaseStat = totalBaseStat;
	this->weight = weight;
}

//Define getters and setters
void PokeNode::setNext(PokeNode* next) {this->next = next;}

PokeNode* PokeNode::getNext() {return next;}

void PokeNode::setPrev(PokeNode* prev) {this->prev = prev;}

PokeNode* PokeNode::getPrev() {return prev;}

string PokeNode::getName() { return name; }

int PokeNode::getTotalBaseStat() { return totalBaseStat; }

double PokeNode::getWeight() { return weight; }

void PokeNode::print() { //Define variable print function
	cout << setw(20) << left << name << setw(20) << left << type;
	cout << setw(20) << left << totalBaseStat << setw(20) << left << weight << endl;
}