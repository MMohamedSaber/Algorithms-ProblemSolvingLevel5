#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsMyDynamicArray
{
	
	int _Size=0;

	T* _TempArray;


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

		_TempArray = new T[newSize];

		// just getting to newSize
		if (newSize < _Size)
		{
			_Size = newSize;
		}
		
		// cop Items into Temporary array
		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}
		

		//if new Size > Size
		_Size = newSize;

		delete[] OriginalArray;
		OriginalArray = _TempArray;



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

	int GetItem(int Index)
	{
		if (Index >= _Size || Index < 0)return -1; // Item Not Found

		return OriginalArray[Index];
	}

	void Reverse() 
	{
		_TempArray=new T [_Size];
		for (int  i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[_Size- i- 1];
		}

		delete[]OriginalArray;
		OriginalArray = _TempArray;

	}
	void Clear()
	{
		_Size = 0;
		_TempArray = new T[0];
		delete[]OriginalArray;

		OriginalArray = _TempArray;
	}

	bool DeleteItemAt(int index)
	{
		if (index >= _Size || index < 0)
		{
			return false;
		}

		_Size--;

		_TempArray = new T[_Size];

		//copy all before index
		for (int i = 0; i < index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		//copy all after index
		for (int i = index + 1; i < _Size+1 ; i++)
		{
			_TempArray[i - 1] = OriginalArray[i];
		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;

	}

	void  DeleteFirstItem()
	{
		 DeleteItemAt(0);
		
	}
	
	void DeleteLastItem()
	{
		 DeleteItemAt(_Size-1);
	}

	int Find(T Item)
	{

	
		for (int i = 0; i < _Size; i++)
		{
			if (Item== OriginalArray[i])
				{
					return i;
				}
			

			

		}
		return -1;

	}


	void DeleteItem( T Item)
	{

		int index = Find(Item);

		if (index == -1)
		{
			return false;
		}

		DeleteItemAt(index);
		return true;

	}

	bool InsertAt(int index, T Item)
	{
		if (index > _Size || index < 0)
		{
			return false;
		}

		_Size++;

		_TempArray = new T[_Size];

		//copy all before index
		for (int i = 0; i < index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		_TempArray[index] = Item;

		//copy all after index
		for (int i = index; i < _Size - 1; i++)
		{
			_TempArray[i + 1] = OriginalArray[i];
		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;
		return true;


	}


	bool InsertAtBeginning(T Item)
	{
		return InsertAt(0,  Item);
	}
	bool InsertBefore(int Index, T Item)
	{
		return InsertAt(Index - 1, Item);
	}



	bool InsertAfter(int Index, T Item)
	{
		return InsertAt(Index + 1, Item);
	}

	bool InsertAtEnd( T Item)
	{
		return InsertAt(_Size, Item);
	}



	};



