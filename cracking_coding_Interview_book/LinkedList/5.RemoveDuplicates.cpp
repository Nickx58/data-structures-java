/*
* Removes duplicates from the unsorted Linked List
*/
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;

void push(int x)
{
    Node *temp = new Node();
    temp->data = x;
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

void removeDuplicate()
{
    Node *temp1, *temp2, *dup;
    temp1 = head;
    while (temp1 != NULL && temp1->next != NULL)
    {
        temp2 = temp1;
        while (temp2->next != NULL)
        {
            if (temp1->data == temp2->next->data)
            {
                dup = temp2->next;
                temp2->next = temp2->next->next;
                delete dup;
            }
            else
            {
                temp2 = temp2->next;
            }
        }
        temp1 = temp1->next;
    }
}

int main()
{
    head = NULL;
    push(20);
    push(22);
    push(12);
    push(10);
    push(12);
    print();
    cout << "After removing duplicates" << endl;
    removeDuplicate();
    print();
    return 0;
}