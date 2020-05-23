// sort inserted without validations
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

void sortedInsert(int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = NULL;
  Node *current = head;
  while (current->next != NULL && current->next->data < newNode->data)
  {
    current = current->next;
  }
  newNode->next = current->next;
  current->next = newNode;
}

int main()
{
  insertEnd(1);
  insertEnd(2);
  insertEnd(3);
  insertEnd(5);
  print();
  sortedInsert(4);
  print();
}