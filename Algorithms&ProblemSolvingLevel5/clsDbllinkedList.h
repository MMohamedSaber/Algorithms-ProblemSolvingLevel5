#pragma once
#include <iostream>
using namespace std;

class Node
{
public:

    int Data;
    Node* Next;
    Node* Prev;

    Node()
    {
        Data = 0;
        Next = NULL;
        Prev = NULL;
    }
};

template <class T>
class clsDbllinkedList
{
private:

  Node * Head =NULL;


public:
    void InsertAtBeginning(T NewValue)
    {
        Node* New_Node = new Node();
        New_Node->Data = NewValue;
        New_Node->Prev = NULL;

        if (Head==NULL) {

            New_Node->Next = NULL;
            Head = New_Node;
        }
        else
        {
            New_Node->Next = Head;
            Head->Prev = New_Node;
            Head = New_Node;
        }

    }

    void PrintList()
    {
        Node* Temp = Head;
      //  Temp = Head;

        while (Temp != NULL)
        {
            cout << Temp->Data << " ";
            Temp = Temp->Next;

        } 

    }

};

