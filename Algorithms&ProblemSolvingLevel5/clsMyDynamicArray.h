#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsMyDynamicArray
{
	
	int _Size=0;
	T* _arr;
	


public:

	clsMyDynamicArray(int size)
	{
		if (size < 0)
		{
			size = 0;
		}

		_Size = size;
		_arr = new T[_Size];
	}


	bool SetItem(int Index,T Item)
	{
		if (Index > _Size)
		{
			
			return false;
		}

		_arr[Index] = Item;
		return true;
		
	} 

	int Size()
	{
		return _Size;

	}
	bool IsEmpty()
	{
		return (_Size == 0 ? true : false);
	}

	void PrintList()
	{
		for (int i = 0; i < _Size; i++)
		{
			cout<<_arr[i] << " " ;
		}
		cout << endl;
	}



};

