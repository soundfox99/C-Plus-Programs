//Aditya Jindal 112835035
#pragma once
#include <iostream>

using namespace std;

//Create a node structure
struct node {
	int data;
	node* next_node;
};

class LinkedList
{
private:
	node* head;
	node* tail;
public:
	LinkedList();	//Define constructor
	void addNode(int value);	//Defien add node function
	node* getHead();	//Define getter for the head of the list
	node* reverseLikedList(node* head); //define task function
};

