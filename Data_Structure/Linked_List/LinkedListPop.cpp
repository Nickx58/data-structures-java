/*
 ** Pop head element of the linked list
*/

#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *head = NULL; // global pointer

void push(int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = head;
  head = newNode;
}

void print()
{
  Node *current = head;
  while (current != NULL)
  {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}

void popHead()
{
  Node *current = head;
  Node *newHead = head;
  newHead = current->next;
  head = newHead;
  delete current;
  return;
}

int main()
{
  push(44);
  push(134);
  push(30);
  push(100);
  print();
  cout << "Deleting head: " << endl;
  popHead();
  print();
  return 0;
}
