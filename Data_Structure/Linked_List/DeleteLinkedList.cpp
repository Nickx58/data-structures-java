#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *head = NULL; // global pointer
int getLength = 0;

void push(int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = head;
  head = newNode;
}

void print()
{
  Node *current = head;
  while (current != NULL)
  {
    cout << current->data << " ";
    getLength++;
    current = current->next;
  }
  cout << endl;
}

void deleteList()
{
  Node *current = head;
  Node *prev = NULL;
  while (current != NULL)
  {
    prev = current->next;
    delete current;
    current = prev;
    cout << "Lenght of list after every deletion is: " << getLength << endl;
  }
  head = NULL;
  return;
}

int main()
{
  push(44);
  push(134);
  push(30);
  push(100);
  print();
  cout << "Deleting List: " << endl;
  deleteList();
  print();
  cout << "getLength: " << getLength << endl;
  return 0;
}
