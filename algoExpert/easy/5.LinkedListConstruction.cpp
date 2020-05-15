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
  Node *temp = new Node();
  temp->data = data;
  temp->next = head;
  head = temp;
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

void reverse()
{
  if (head == NULL)
  {
    return;
  }
  Node *current = head;
  Node *prev = NULL;
  Node *next = NULL;
  while (current != NULL)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
}

int main()
{
  push(5);
  push(4);
  push(3);
  push(2);
  push(1);
  print();
  cout << "After reversing List: " << endl;
  reverse();
  print();
  return 0;
}