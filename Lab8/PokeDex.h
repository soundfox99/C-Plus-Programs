#pragma once
#include "PokeNode.h"
template <class T>

T larger(T pokemon1, T pokemon2) {
	return (pokemon1 > pokemon2 ? true : false);
}

class PokeDex
{
private:
	typedef PokeNode* pokeNodePtr;
	pokeNodePtr head, tail, current;
	bool flag = true;

public:
	PokeDex();
	void addPokemon(PokeNode* pokemon);
	void compare();
	void moveToNext();
	void moveToPrev();
	void moveToHead();
	void moveToTail();
	void printAll();
	void loadAll();
	void setTail(PokeNode* tail);
	PokeNode* getCurrent();
};

