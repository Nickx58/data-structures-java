#include <iostream>
#include <stack>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *head = NULL;

void push(int data)
{
  Node *temp = new Node();
  temp->data = data;
  temp->next = head;
  head = temp;
}

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

void reverseList()
{
  stack<Node *> Stack;
  Node *temp = head;
  while (temp->next != NULL)
  {
    Stack.push(temp);
    temp = temp->next;
  }

  head = temp;
  while (!Stack.empty())
  {
    temp->next = Stack.top();
    temp = temp->next;
    Stack.pop();
  }
  temp->next = NULL;
}

int main()
{
  push(1);
  push(2);
  push(3);
  push(4);
  cout << "Before reversing list: " << endl;
  print();
  cout << "After reversing list: " << endl;
  reverseList();
  print();
  return 0;
}