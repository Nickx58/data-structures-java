/*
  Delete Nth Node and Insert Node at the end;
*/
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

void insert(int data)
{
  Node *t1 = new Node();
  t1->data = data;
  if (!head)
  {
    t1->next = NULL;
    head = t1;
    return;
  }
  Node *t2 = head;
  while (t2->next)
  {
    t2 = t2->next;
  }
  t2->next = t1;
  t1->next = NULL;
}

void deleteList(int p)
{
  Node *t1 = head;
  if (p == 1)
  {
    head = t1->next;
    delete t1;
    return;
  }
  for (int i = 0; i < p - 2; i++)
  {
    t1 = t1->next; // n-1th Node
  }
  Node *t2 = t1->next; // Node to be deleted
  t1->next = t2->next;
  delete t2;
}

int main()
{
  insert(5);
  insert(4);
  insert(3);
  print();
  cout << "Enter the position: " << flush;
  int p;
  cin >> p;
  deleteList(p);
  print();
  return 0;
}