#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *push(Node *head, int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = head;
  head = newNode;
  return head;
}

void print(Node *head)
{
  if (head == NULL)
  {
    return;
  }
  cout << head->data << " ";
  print(head->next);
}

void printReverse(Node *head)
{
  if (head == NULL)
  {
    cout << endl;
    return;
  }
  printReverse(head->next);
  cout << head->data << " ";
}

int main()
{
  Node *head = NULL;
  head = push(head, 1);
  head = push(head, 2);
  head = push(head, 3);
  head = push(head, 4);
  print(head);
  printReverse(head);
  cout << endl;
  return 0;
}