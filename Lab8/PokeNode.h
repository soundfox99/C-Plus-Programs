#pragma once
using namespace std;
#include <iostream>

class PokeNode
{
private:
	string name, type;
	int totalBaseStat;
	double weight;
	PokeNode* next;
	PokeNode* prev;
public:
	PokeNode(string name, string type, int totalBaseStat, double weight);
	void setNext(PokeNode* next);
	void setPrev(PokeNode* prev);
	PokeNode* getNext();
	PokeNode* getPrev();
	string getName();
	int getTotalBaseStat();
	double getWeight();
	void print();
};
