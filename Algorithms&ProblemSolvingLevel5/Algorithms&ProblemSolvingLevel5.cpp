

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


	clsDblLinkedList <int >::Node * N;
	N = MydblLinkedList.GetNode(2);

	cout << "\n\nNode Value is : " << N->value;
	system("pause>0");
}

