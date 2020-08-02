#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *head = NULL;
int countNode = 0;

void addNodeAtBegin(int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = head;
  head = newNode;
}

void addNodeAtEnd(int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = NULL;
  Node *temp = head;
  while (temp->next)
  {
    temp = temp->next;
  }

  temp->next = newNode;
}

bool search(int data)
{
  Node *temp = head;
  while (temp)
  {
    if (temp->data == data)
    {
      return true;
    }
    temp = temp->next;
  }
  return false;
}

void deleteElement(int data)
{
  Node *temp = head;
  Node *prev = head;
  if (head && head->data == data)
  {
    temp = head;
    delete temp;
    head = head->next;
    return;
  }
  while (temp)
  {
    if (temp->data == data)
    {
      prev->next = temp->next;
      delete temp;
      temp = prev;
    }
    prev = temp;
    temp = temp->next;
  }
}

void getNthNode(int n)
{
  Node *temp = head;
  if (n > countNode)
  {
    cout << "Enter a valid Position: " << endl;
    return;
  }
  for (int i = 1; i < n; i++)
  {
    temp = temp->next;
  }
  cout << n << "th Node from the Linked List is: " << temp->data << endl;
}

int getMin()
{
  int min = INT_MAX;
  Node *temp = head;
  while (temp)
  {
    if (temp->data < min)
    {
      min = temp->data;
    }
    temp = temp->next;
  }
  return min;
}

int getMax()
{
  int max = INT_MIN;
  Node *temp = head;
  while (temp)
  {
    if (temp->data > max)
    {
      max = temp->data;
    }
    temp = temp->next;
  }
  return max;
}

int countSpecificValue(int val)
{
  Node *temp = head;
  int countValue = 0;
  while (temp)
  {
    if (temp->data == val)
    {
      countValue++;
    }
    temp = temp->next;
  }
  return countValue;
}

void print()
{
  Node *temp = head;
  while (temp)
  {
    cout << temp->data << " ";
    countNode++;
    temp = temp->next;
  }
  cout << endl;
}

/* Driver program to test above function*/
int main()
{
  addNodeAtBegin(5);
  addNodeAtBegin(5);
  addNodeAtBegin(3);
  addNodeAtBegin(2);
  addNodeAtBegin(1);
  addNodeAtEnd(10);
  addNodeAtEnd(100);
  print();
  cout << "Lenght of the Linked List is: " << countNode << endl;
  search(2) ? cout << "Element Found" << endl : cout << "Not Found" << endl;
  cout << "Delete Element: " << endl;
  deleteElement(4);
  print();
  getNthNode(1);
  cout << "Minimum Element in the linked List is: " << getMin() << endl;
  cout << "Maximum Element in the linked List is: " << getMax() << endl;
  cout << "Count of Specific Element in the linked List is: " << countSpecificValue(5) << endl;
  cout << endl;
  return 0;
}
