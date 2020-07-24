#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *head = NULL;

void insertAtAnyPosition(int data, int pos)
{
  Node *temp = head;
  Node *newNode = new Node();
  newNode->data = data;
  if (pos == 0)
  {
    newNode->next = head;
    head = newNode;
  }
  else
  {
    for (int i = 0; i < pos - 1; i++)
    {
      temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
  }
}

void printList()
{
  Node *temp = head;
  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{

  insertAtAnyPosition(10, 0);
  insertAtAnyPosition(20, 1);
  insertAtAnyPosition(5, 0);
  insertAtAnyPosition(30, 2);
  insertAtAnyPosition(40, 4);
  printList();
  return 0;
}
