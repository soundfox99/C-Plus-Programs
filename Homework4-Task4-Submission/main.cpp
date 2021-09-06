//Aditya Jindal 112835035

//Included needed C libraries
#include <iostream>

//Include needed object headers
#include "LinkedList.h"


using namespace std;

int main() {
	LinkedList list; //create one way linked list

	//add 10 nodes to the list and display them to console
	cout << "Input list is: ";
	for (int i = 0; i < 10; i++) {
		cout << i << " ";
		list.addNode(i);
	}
	cout << endl;

	node* first = list.reverseLikedList(list.getHead());	//call function

	//Display results
	cout << "Reversed list is: ";
	while (first != NULL) {
		cout << first->data << " ";
		first = first->next_node;
	}
	cout << endl;

	system("pause");
	return 0;
}