

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




   
}

