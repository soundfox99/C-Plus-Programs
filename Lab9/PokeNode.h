#pragma once
#include "PokeNode.h"
#include <string>
using namespace std;

class PokeNode
{
private:
	string name, type;
	int speedStat;
	int totalBaseStat;
	double weight;
	PokeNode* next;
	PokeNode* prev;
public:
	PokeNode(string name, string type,
	int speedStat, double weight);
	void setNext(PokeNode* next);
	void setPrev(PokeNode* next);
	PokeNode* getNext();
	PokeNode* getPrev();
	string getName();
	int getTotalBaseStat();
	int getSpeedStat();
	double getWeight();
	void print();
};