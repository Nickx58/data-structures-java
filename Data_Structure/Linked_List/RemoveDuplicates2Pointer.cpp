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

void removeDuplicates()
{
  Node *p = head;
  Node *q = head->next;
  while (q)
  {
    if (p->data != q->data)
    {
      p = q;
      q = q->next;
    }
    else
    {
      p->next = q->next;
      delete q;
      q = p->next;
    }
  }
}

/* Driver program to test above function*/
int main()
{
  push(9);
  push(9);
  push(5);
  push(5);
  push(3);
  push(3);
  push(1);
  printList(head);
  removeDuplicates();
  printList(head);
  cout << endl;
  return 0;
}
