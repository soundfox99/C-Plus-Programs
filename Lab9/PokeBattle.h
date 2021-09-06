#pragma once
#include "PokeNode.h"
#include <list>
#include <stack>
class PokeBattle
{
private:
	list<PokeNode*> pokeList;
	stack<PokeNode*> pokeStack;
public:
	void addPokeNode(PokeNode* pokemon);
	void loadPokeNode();
	void battleSimulation();
	void pushAll();
	PokeNode* pop();
	void sort();
};

