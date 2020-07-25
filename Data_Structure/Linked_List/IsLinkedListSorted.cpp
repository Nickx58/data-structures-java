#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *head = NULL;

void push(int x)
{
  Node *newNode = new Node();
  newNode->data = x;
  newNode->next = head;
  head = newNode;
}

void printList(Node *temp)
{
  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

bool isSorted()
{
  if (head == NULL || head->next == NULL)
  {
    return true;
  }
  Node *temp = head;
  while (temp->next)
  {
    if (temp->data > temp->next->data)
    {
      return false;
    }
    temp = temp->next;
  }
  return true;
}

/* Driver program to test above function*/
int main()
{
  push(9);
  push(5);
  push(3);
  push(1);
  printList(head);
  isSorted() ? cout << "Linked List is Sorted " : cout << "Linked List is Not Sorted ";
  cout << endl;
  return 0;
}
