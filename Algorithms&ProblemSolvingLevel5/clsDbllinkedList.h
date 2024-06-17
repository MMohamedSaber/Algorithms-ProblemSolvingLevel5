#pragma once
#include <iostream>
using namespace std;




template <class T>
class clsDbllinkedList
{
private:
  


public:

    class Node
    {
    public:

        T Data;
        Node* Next;
        Node* Prev;

        Node()
        {
            Data = 0;
            Next = NULL;
            Prev = NULL;
        }
    };
    Node* Head = NULL;
    bool IsEmpty()
    {
        return (Head == NULL);
    }
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
   
    Node *  Find(T Value)
    {
      
        if (IsEmpty())
        {
            return NULL;
        }

    
        Node *  Temp = Head;

        while (Temp != NULL)
        {
            if (Temp->Data == Value) {
                return Temp;
            }

            Temp = Temp->Next;
        }

        return NULL;
    }

    void InsertAfter(Node * Current, T NewValue)
    {
        if (IsEmpty() || Head == Current) {

            InsertAtBeginning(NewValue);
            return;
        }

        Node * New_Node = new Node();
        Node* Temp = Head;

        while (Temp != Current) {
            Temp = Temp->Next;
        }

        New_Node->Data = NewValue;
        New_Node->Next = Temp->Next;
        Temp->Next->Prev = New_Node;
        //--------------------------//
        Temp->Next = New_Node;
        New_Node->Prev = Temp;
    }

    void InsertAtEnd(T NewValue)
    {
        if (IsEmpty()) {
            InsertAtBeginning(NewValue);
            return;
        }

        Node* Temp = Head;
        Node* New_Node = new Node();
        New_Node->Data = NewValue;

        while (Temp->Next != NULL)
        {
            Temp = Temp->Next;
        }

        Temp->Next = New_Node;
        New_Node->Prev = Temp;
        New_Node->Next = NULL;
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

