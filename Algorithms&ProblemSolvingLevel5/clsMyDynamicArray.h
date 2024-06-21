#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsMyDynamicArray
{
	
	int _Size=0;

	T* TempArray;


public:

	T* OriginalArray;
	clsMyDynamicArray(int size)
	{
		if (size < 0)
		{
			size = 0;
		}

		_Size = size;
		OriginalArray = new T[_Size];
	}

	~clsMyDynamicArray()
	{
		delete[] OriginalArray;
	}

	void   Resize(int newSize)
	{
		if (newSize < 0)
		{
			return;
		}

		TempArray = new T[newSize];

		// just getting to newSize
		if (newSize < _Size)
		{
			_Size = newSize;
		}
		
		// cop Items into Temporary array
		for (int i = 0; i < _Size; i++)
		{
			TempArray[i] = OriginalArray[i];
		}
		

		//if new Size > Size
		_Size = newSize;

		delete[] OriginalArray;
		OriginalArray = TempArray;



	}

	bool SetItem(int Index,T Item)
	{
		if (Index > _Size)
		{
			
			return false;
		}

		OriginalArray[Index] = Item;
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
			cout<<OriginalArray[i] << " " ;
		}
		cout << endl;
	}



};

