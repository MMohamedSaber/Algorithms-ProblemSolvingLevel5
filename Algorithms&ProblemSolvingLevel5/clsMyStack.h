#pragma once
#include "class clsDblLinkedList.h"

template <class T>
class clsMyStack
{
protected:

	clsDblLinkedList <T> _MyList;


public:


	void push(T Item)
	{
		_MyList.InsertAtBeginning(Item);
	}


	void pop()
	{
		_MyList.DeleteFirstNode();
	}

	void Print()
	{

		_MyList.PrintList();
	}

	int Size()
	{
		return _MyList.Size();
	}


	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}


	T Top()
	{
		return _MyList.GetItem(0);
	}

	T bottom()
	{
		return _MyList.GetItem(Size() - 1);
	}


	T GetItem(T Index)
	{

		return _MyList.GetItem(Index);

	}

	void Reverse()
	{
		_MyList.Reverse();

	}

	bool UpdateItem(int Index, T Item)

	{
		return _MyList.UpdateItem(Index, Item);
	}

	bool InsertAfter(int Index, T Item)
	{
		return _MyList.InsertAfter(Index, Item);

	}

	void InsertAtFront(T Item)
	{
		_MyList.InsertAtBeginning(Item);
	}

	void InsertAtBack(T Item)
	{
		_MyList.InsertAtEnd(Item);
	}

	void  Clear()
	{
		_MyList.Clear();
	}




};

