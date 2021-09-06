#include "PokeNode.h"
#include <iostream>
#include <iomanip>
using namespace std;

PokeNode::PokeNode(string name, string type, int speed, double weight) {
	this->name = name;
	this->type = type;
	this->speedStat = speed;
	this->weight = weight;
}


//Define setters
void PokeNode::setNext(PokeNode* next) { //naming issue?
	this->next = next;
}

void PokeNode::setPrev(PokeNode* prev) {
	this->prev = prev;
}

//Defien getters
PokeNode* PokeNode::getNext() {
	return next;
}

PokeNode* PokeNode::getPrev() {
	return prev;
}

string PokeNode::getName() {
	return name;
}

void PokeNode::print() { //print function to make debuggin easier
	cout << setw(20) << left << name << setw(20) << left << type;
	cout << setw(20) << left << speedStat << setw(20) << left << weight << endl;
}

int PokeNode::getTotalBaseStat() {
	return totalBaseStat;
}

int PokeNode::getSpeedStat() {
	return speedStat;
}

double PokeNode::getWeight() {
	return weight;
}