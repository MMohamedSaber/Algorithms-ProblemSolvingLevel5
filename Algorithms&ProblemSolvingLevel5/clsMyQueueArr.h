#pragma once
#include "clsMyDynamicArray.h"
template <class T>

class clsMyQueueArr 
{

private:

	clsMyDynamicArray <T> _list;

public:

	
	void push(T Item)
	{
		_list.InsertAtBeginning(Item);
	}


	T front()
	{
		return  _list.GetItem(_list.Size()-1);
	}

	T back()
	{
		return _list.GetItem(0);
	}

	void Print()
	{
		_list.PrintList();
	}
	
	int Size()
	{
		return _list.Size();
	}

	T GetItem(int Index)
	{

		T Item = _list.GetItem(Index);
		return Item;
	}

	void Reverse()
	{
		_list.Reverse();
	}


	void UpdateItem(int Index, T Item)
	{
		_list.InsertAt(Index, Item);
	}

	void InsertAfter(int Index, T Item)
	{
		_list.InsertAfter(Index, Item);
	}

	void InsertAtFront(T Item)
	{
		_list.InsertAtBeginning(Item);
	}
	
	
	void InsertAtBack(T Item)
	{
		_list.InsertAtEnd(Item);
	}

	void Clear()
	{
		_list.Clear();

	}




};

