#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;

void insert(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}

int detectLoop()
{
    Node *slow, *fast = head;
    while (slow && fast && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    head = NULL;
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    head->next->next->next->next = head;
    detectLoop() == 1 ? cout << "Found Loop" << endl : cout << "Loop is not there" << endl;
    return 0;
}
