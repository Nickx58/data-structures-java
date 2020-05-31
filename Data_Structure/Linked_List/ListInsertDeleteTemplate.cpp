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
  Node *node = new Node();
  node->data = x;
  node->next = head;
  head = node;
}

void insertEnd(int x)
{
  Node *node = new Node();
  node->data = x;
  node->next = NULL;
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = node;
}

void print()
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void append(int x, int position)
{
  Node *node = new Node();
  node->data = x;
  if (position == 1)
  {
    node->next = head;
    head = node;
    return;
  }
  int i = 1;
  Node *temp = head;
  while (i < position - 1)
  {
    temp = temp->next;
    i++;
  }
  node->next = temp->next;
  temp->next = node;
}

void deleteBeginning()
{
  if (head == NULL)
  {
    cout << "Head is empty" << endl;
    return;
  }
  if (head->next == NULL)
  {
    delete head;
    return;
  }
  Node *temp = head;
  head = temp->next;
  delete temp;
}

void deleteEnd()
{
  Node *temp = head;
  Node *prev = NULL;
  while (temp->next != NULL)
  {
    prev = temp;
    temp = temp->next;
  }
  prev->next = NULL;
  delete temp;
  return;
}

void deleteFromPosition(int position)
{
  if (position == 1)
  {
    deleteBeginning();
    return;
  }
  int i = 1;
  Node *temp = head;
  Node *prev = NULL;
  while (i < position)
  {
    prev = temp;
    temp = temp->next;
    i++;
  }
  prev->next = temp->next;
  delete temp;
  return;
}

int main()
{
  push(4);
  push(3);
  push(2);
  insertEnd(5);
  append(1, 1);
  append(10, 2);
  print();
  cout << "Delete From Start: " << endl;
  deleteBeginning();
  print();
  cout << "Delete from end: " << endl;
  deleteEnd();
  print();
  cout << "Delete from specific position: " << endl;
  deleteFromPosition(2);
  print();
}