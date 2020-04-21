/*
* Get Nth node from the linked list
*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;

void insert(int data, int n)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (n == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *temp = head;
    for (int i = 0; i < n - 2; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int gethNthNode(int n)
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "List cannot be empty" << endl;
        return 0;
    }
    int count = 0;
    while (temp != NULL)
    {
        if (count == n)
        {
            return temp->data;
        }
        count++;
        temp = temp->next;
    }
    /* if we get to this line,  
    the caller was asking  
    for a non-existent element  
    so we assert fail */
    assert(0);
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

int main()
{
    head = NULL;
    insert(2, 1);
    insert(3, 2);
    insert(4, 1);
    insert(5, 2);
    print();
    int result = gethNthNode(2);
    if (result != 0)
    {
        cout << result << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}