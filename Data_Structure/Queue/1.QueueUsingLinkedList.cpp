#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;

void enQueue(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void deQueue()
{
    Node *temp = front;
    if (front == NULL)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    if (front == rear)
    {
        front = rear = NULL;
    }
    else
    {
        front = front->next;
    }
    delete temp;
}

int Front()
{
    if (front == NULL)
    {
        cout << "Queue is Empty" << endl;
        return 0;
    }
    return front->data;
}

void print()
{
    Node *temp = front;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    /* Drive code to test the implementation. */
    // Printing elements in Queue after each Enqueue or Dequeue
    enQueue(2);
    print();
    enQueue(4);
    print();
    enQueue(6);
    print();
    deQueue();
    print();
    enQueue(8);
    print();
}