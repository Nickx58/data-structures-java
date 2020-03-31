// Delete the Node at nth Position without Validation

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;

void Print()
{
    Node *temp = head;
    cout << "List: ";
    while (temp != NULL)
    {
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

void Insert(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}

void DeleteNode(int n)
{
    Node *temp1 = head;
    if (n == 1)
    {
        head = temp1->next;
        delete temp1;
        return;
    }
    int i;
    for (i = 0; i < n - 2; i++)
    {
        temp1 = temp1->next;
        Node *temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
    }
}

int main()
{
    head = NULL; // empty list
    int n;
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    Insert(6);
    Print();
    cout << "Enter the position: " << flush;
    cin >> n;
    DeleteNode(n);
    cout << "After Deleting" << endl;
    Print();
    return 0;
}