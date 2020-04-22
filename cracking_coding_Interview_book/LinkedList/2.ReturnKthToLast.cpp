/*
* Return Kth to Last:
* Implement an algorithm to find the kth to last element of a singly linked list.
*/
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;
int len; // global variable to get length of the list

void print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        len++;
        temp = temp->next;
    }
    cout << endl;
}

void insert(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}

int kthNode(int p)
{
    int n = (len - p) + 1; // get kth node from the end of the list
    Node *temp1 = head;
    if (n == 1)
    {
        return temp1->data;
    }
    for (int i = 0; i < n - 2; i++)
    {
        temp1 = temp1->next;
    }
    return temp1->next->data;
}

int main()
{
    head = NULL;
    len = 0;
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    print();
    int result = kthNode(2);
    cout << "Kth Node from the end: " << result << endl;
    return 0;
}