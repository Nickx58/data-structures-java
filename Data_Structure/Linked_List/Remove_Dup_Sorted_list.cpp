/*
* Remove Duplicates from sorted Linked List
*/
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;

void push(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}

void print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void removeduplicates()
{
    Node *current = head;
    Node *temp;
    while (current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            temp = current->next->next;
            delete current->next;
            current->next = temp;
        }
        else
        {
            current = current->next;
        }
    }
}

int main()
{
    head = NULL;
    push(4);
    push(3);
    push(3);
    push(2);
    push(2);
    push(1);
    push(1);
    print();
    cout << "After removing Duplicates: " << endl;
    removeduplicates();
    print();
    return 0;
}
