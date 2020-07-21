#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *head = NULL;

void push(int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = head;
  head = newNode;
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

int detectLoop()
{
  Node *slow = head;
  Node *fast = head;
  while (slow && fast && fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)
    {
      return 1;
    }
  }
  return 0;
}

int main()
{
  push(20);
  push(4);
  push(15);
  push(10);
  print();

  /* Create a loop for testing */
  head->next->next->next->next = head;
  if (detectLoop())
  {
    cout << "Found Loop" << endl;
  }
  else
  {
    cout << "No Loop" << endl;
  }
  return 0;
}