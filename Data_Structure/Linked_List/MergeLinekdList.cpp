#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *first = NULL;
Node *second = NULL;
Node *third = NULL;

void pushFirst(int x)
{
  Node *newNode = new Node();
  newNode->data = x;
  newNode->next = first;
  first = newNode;
}

void pushSecond(int x)
{
  Node *newNode = new Node();
  newNode->data = x;
  newNode->next = second;
  second = newNode;
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

void mergeList(Node *first, Node *second)
{
  Node *last;
  if (first->data < second->data)
  {
    third = last = first;
    first = first->next;
    third->next = NULL;
  }
  else
  {
    third = last = second;
    second = second->next;
    third->next = NULL;
  }
  while (first && second)
  {
    if (first->data < second->data)
    {
      last->next = first;
      last = first;
      first = first->next;
      last->next = NULL;
    }
    else
    {
      last->next = second;
      last = second;
      second = second->next;
      last->next = NULL;
    }
  }
  if (first)
  {

    last->next = first;
  }
  if (second)
  {

    last->next = second;
  }
}

/* Driver program to test above function*/
int main()
{
  pushFirst(7);
  pushFirst(3);
  pushFirst(2);
  pushFirst(1);
  pushSecond(4);
  pushSecond(5);
  pushSecond(6);
  pushSecond(8);
  printList(first);
  printList(second);
  mergeList(first, second);
  printList(third);
  return 0;
}
