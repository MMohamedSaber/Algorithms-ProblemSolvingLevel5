

#include <iostream>
#include "clsMyDynamicArray.h"
using namespace std;

int main()
{

	clsMyDynamicArray <int> MyDynamicArray(10);

	MyDynamicArray.SetItem(0,10);
	MyDynamicArray.SetItem(1,20);
	MyDynamicArray.SetItem(2,30);
	MyDynamicArray.SetItem(3,40);
	MyDynamicArray.SetItem(4,50);

	cout << "\nArray Size : "<< MyDynamicArray.Size();
	cout << "\nIs Empty ? : "<< MyDynamicArray.IsEmpty();

	cout << "\nArray Items:\n";
	MyDynamicArray.PrintList();

	MyDynamicArray.Resize(2);
	cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
	cout << "\nArray Items after resize to 2 : \n";
	MyDynamicArray.PrintList();


	MyDynamicArray.Resize(10);
	cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
	cout << "\nArray Items after resize to 2 : \n";
	MyDynamicArray.PrintList();

	system("pause>0");
}

