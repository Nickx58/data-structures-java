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

void insert(int data, int p)
{
  Node *temp1 = new Node();
  temp1->data = data;
  temp1->next = NULL;
  if (p == 1)
  {
    temp1->next = head;
    head = temp1;
    return;
  }
  Node *temp2 = head;
  for (int i = 0; i < p - 2; i++)
  {
    temp2 = temp2->next;
  }
  temp1->next = temp2->next;
  temp2->next = temp1;
}

int main()
{
  insert(2, 1);
  insert(3, 2);
  insert(4, 3);
  insert(5, 4);
  print();
}