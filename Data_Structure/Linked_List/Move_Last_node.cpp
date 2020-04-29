/*
* Move last node to the head;
*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

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

void moveLast()
{
    Node *prev, *last;
    last = head;
    while (last->next != NULL)
    {
        prev = last;
        last = last->next;
    }

    prev->next = NULL;
    last->next = head;
    head = last;
    return;
}

int main()
{
    push(4);
    push(3);
    push(2);
    push(1);
    print();
    cout << "Move last to the head" << endl;
    moveLast();
    print();
    return 0;
}