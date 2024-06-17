

#include <iostream>
#include "clsDbllinkedList.h"
using namespace std;

int main()
{
	clsDbllinkedList <int> MydblLinkedList;

	MydblLinkedList.InsertAtBeginning(1);
	MydblLinkedList.InsertAtBeginning(2);
	MydblLinkedList.InsertAtBeginning(3);
	MydblLinkedList.InsertAtBeginning(4);

	cout << "\nLinked List Content\n";
	MydblLinkedList.PrintList();

	clsDbllinkedList <int>::Node* N1 = MydblLinkedList.Find(2);

	if (N1 != NULL)
	{
		cout << "\nNode with value 2 is found:-)\n";
	}
	else {
		cout << "The Node is not Found:-)\n";
	}

	
	MydblLinkedList.InsertAfter(N1, 500.25);
	cout << "\nAfter Inserting 500 after\n";
	MydblLinkedList.PrintList();


	MydblLinkedList.InsertAtEnd(700);
	cout << "\nAfter Adding 700 after\n";
	MydblLinkedList.PrintList();


}

