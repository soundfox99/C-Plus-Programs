//Aditya Jindal 112835035
#include "LinkedList.h"

LinkedList::LinkedList() : head(NULL), tail(NULL) {} //Initiate values null

void LinkedList::addNode(int data) {
	node* temp = new node; //create node
	temp->data = data; //set values
	temp->next_node = NULL;	//Initaite pointer to the next values as null

	if (head == NULL) {	//if no valeus in list then set tail and head to the same values
		head = temp;
		tail = temp;
	}
	else {  //else just move the tail
		tail->next_node = temp;
		tail = tail->next_node;
	}
}

node* LinkedList::getHead() {
	return head;	//return the first valeu of the list
}

node* LinkedList::reverseLikedList(node* head) {
	node* current = head;	//get the first node
	//Initialize needed variables as NULL
	node* previous = NULL;
	node* next = NULL;

	while (current != NULL) {  //While there are nodes in the lsit
		next = current->next_node;	//store the next node in a varaibles
		current->next_node = previous; //set the next node to the previous node
		previous = current;	//set the previous varible to the current node
		current = next;	//move the node we are looking at to the next node
	}
	head = previous;	//finally se the head to point at the new head
	return head;		//return head as per the prompt
}