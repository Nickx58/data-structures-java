#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;
int listLenght;

void insert(int data)
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
        listLenght++;
        temp = temp->next;
    }
    cout << endl;
}

void deleteMiddle()
{
    Node *temp1 = head;
    for (int i = 0; i < (listLenght / 2) - 2; i++)
    {
        temp1 = temp1->next;
    }
    Node *temp2 = temp1->next;
    temp1->next = temp2->next;
    delete temp1;
}

int main()
{
    head = NULL;
    listLenght = 0;
    insert(6);
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    print();
    cout << "Middle of Linked List: " << listLenght / 2 << '\n';
    cout << "After deleting middle of linked list: " << endl;
    deleteMiddle();
    print();
    return 0;
}
