#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsDbllinkedList
{
private:
    
  

public:
    // Nested Node class
    class Node
    {
    public:
        T Data;
        Node* Next;
        Node* Prev;

        // Default constructor initializes the node with default values
        Node()
        {
            Data = 0;
            Next = NULL;
            Prev = NULL;
        }
    };
    // Head node of the linked list
    Node* Head = NULL;

    // Check if the linked list is empty
    bool IsEmpty()
    {
        return (Head == NULL);
    }

    // Insert a new node at the beginning of the linked list
    void InsertAtBeginning(T NewValue)
    {
        Node* New_Node = new Node();
        New_Node->Data = NewValue;
        New_Node->Prev = NULL;

        if (Head == NULL) {
            New_Node->Next = NULL;
            Head = New_Node;
        }
        else {
            New_Node->Next = Head;
            Head->Prev = New_Node;
            Head = New_Node;
        }
    }

    // Find a node with a specific value in the linked list
    Node* Find(T Value)
    {
        if (IsEmpty()) {
            return NULL;
        }

        Node* Temp = Head;

        while (Temp != NULL)
        {
            if (Temp->Data == Value) {
                return Temp;
            }
            Temp = Temp->Next;
        }
        return NULL;
    }

    // Insert a new node after a specific node in the linked list
    void InsertAfter(Node* Current, T NewValue)
    {
        if (IsEmpty() || Head == Current) {
            InsertAtBeginning(NewValue);
            return;
        }

        Node* New_Node = new Node();
        Node* Temp = Head;

        while (Temp != Current) {
            Temp = Temp->Next;
        }

        New_Node->Data = NewValue;
        New_Node->Next = Temp->Next;
        Temp->Next->Prev = New_Node;
        Temp->Next = New_Node;
        New_Node->Prev = Temp;
    }

    // Insert a new node at the end of the linked list
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

    // Delete a specific node from the linked list
    void DeleteNode(Node* NodeToDelete)
    {
        if (IsEmpty()) {
            cout << "\nSorry..No Data Found to be Deleted :-(\n";
            return;
        }

        if (Head == NodeToDelete) {
            Head = NodeToDelete->Next;
        }

        if (NodeToDelete->Next != NULL) {
            NodeToDelete->Next->Prev = NodeToDelete->Prev;
        }

        if (NodeToDelete->Prev != NULL) {
            NodeToDelete->Prev->Next = NodeToDelete->Next;
        }

        delete NodeToDelete;
    }

    // Delete the first node from the linked list
    void DeleteFirstNode()
    {
        if (IsEmpty()) {
            cout << "\nSorry..No Data Found to be Deleted :-(\n";
            return;
        }

        if (Head->Next == NULL)
        {
            delete Head;
            Head = NULL;
            return;
        }

        Node* DeletedNode = Head;
        Head = Head->Next;
        Head->Prev = NULL;
        delete DeletedNode;
    }

    // Delete the last node from the linked list
    void DeleteLastNode()
    {
        if (IsEmpty()) {
            cout << "\nSorry..No Data Found to be Deleted :-(\n";
            return;
        }

        if (Head->Next == NULL)
        {
            delete Head;
            Head = NULL;
            return;
        }

        Node* Currrent = Head;
        while (Currrent->Next->Next != NULL)
        {
            Currrent = Currrent->Next;
        }

        Node* Temp = Currrent->Next;
        Currrent->Next = NULL;
        delete Temp;
    }

    // Print the content of the linked list
    void PrintList()
    {
        Node* Temp = Head;

        while (Temp != NULL)
        {
            cout << Temp->Data << " ";
            Temp = Temp->Next;
        }
        cout << endl;
    }
};
