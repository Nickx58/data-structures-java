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
  Node *curr = head;
  while (curr != NULL)
  {
    cout << curr->data << " ";
    curr = curr->next;
  }
  cout << endl;
}

void insertEnd(int data)
{
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

void moveLast()
{
  Node *last = head;
  Node *second_last = NULL;
  while (last->next != NULL)
  {
    second_last = last;
    last = last->next;
  }
  second_last->next = NULL;
  last->next = head;
  head = last;
}

int main()
{
  insertEnd(1);
  insertEnd(3);
  insertEnd(4);
  insertEnd(5);
  insertEnd(6);
  print();
  moveLast();
  print();
}