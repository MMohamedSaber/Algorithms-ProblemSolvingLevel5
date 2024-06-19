

#include <iostream>
#include "class clsDblLinkedList.h"
using namespace std;

int main()
{
	clsDblLinkedList <int> MydblLinkedList;

	
	MydblLinkedList.InsertAtBeginning(5);
	MydblLinkedList.InsertAtBeginning(4);
	MydblLinkedList.InsertAtBeginning(3);
	MydblLinkedList.InsertAtBeginning(2);
	MydblLinkedList.InsertAtBeginning(1);

	
	cout << "\nLinked List Content\n";
	MydblLinkedList.PrintList();

	cout << "\nNumber of the itmes in the linked list is = " << MydblLinkedList.Size();



	
	MydblLinkedList.InsertAfter(6, 500);

	cout << "\nLinked List Content\n";
	MydblLinkedList.PrintList();

	system("pause>0");
}

