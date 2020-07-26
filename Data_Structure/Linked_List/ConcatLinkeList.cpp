#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *first = NULL;
Node *second = NULL;

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

void concat()
{
  Node *temp = first;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = second;
  second = NULL;
}

/* Driver program to test above function*/
int main()
{
  pushFirst(1);
  pushFirst(3);
  pushFirst(5);
  pushFirst(7);
  pushSecond(2);
  pushSecond(4);
  pushSecond(6);
  pushSecond(8);
  printList(first);
  printList(second);
  concat();
  printList(first);
  return 0;
}
