#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *head = NULL;

void print()
{
  Node *t = head;
  while (t)
  {
    cout << t->data << " ";
    t = t->next;
  }
  cout << endl;
}

void push(int data)
{
  Node *temp = new Node();
  temp->data = data;
  temp->next = head;
  head = temp;
}

void reverse()
{
  Node *current = head;
  Node *next = NULL;
  Node *prev = NULL;
  while (current)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
}

int main()
{
  push(5);
  push(4);
  push(3);
  push(2);
  push(1);
  print();
  cout << "After reversing the linked List: " << endl;
  reverse();
  print();
  return 0;
}