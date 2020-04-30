#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;
int countData = 0;

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

void getCount(int x)
{
    Node *n = head;
    while (n != NULL)
    {
        if (n->data == x)
        {
            countData++;
        }
        n = n->next;
    }
}

int main()
{
    push(4);
    push(4);
    push(2);
    push(1);
    push(3);
    print();
    getCount(11);
    cout << "Count of given node: " << countData << endl;
    return 0;
}