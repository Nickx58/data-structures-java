#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *head = NULL;

void push(int data)
{
  // insert At end;
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = NULL;
  if (head == NULL)
  {
    head = newNode;
    return;
  }
  Node *prev = head;
  while (prev->next != NULL)
  {
    prev = prev->next;
  }
  prev->next = newNode;
}

void removeAll(int val)
{
  Node **p = &head;
  while (*p)
  {
    Node *entry = *p;
    if (entry->data == val)
    {
      *p = entry->next;
      delete entry;
    }
    else
    {
      p = &(entry->next);
    }
  }
}

void print()
{
  Node *curr = head;
  while (curr != NULL)
  {
    cout << curr->data << " ";
    curr = curr->next;
  }
  cout << endl;
}

int main()
{

  push(1);
  push(2);
  push(3);
  push(4);
  push(2);
  print();
  removeAll(2);
  print();
  return 0;
}