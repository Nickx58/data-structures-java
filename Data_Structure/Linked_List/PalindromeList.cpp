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

bool checkPalindrome()
{
  stack<int> Stack;
  Node *temp = head;
  while (temp != NULL)
  {
    Stack.push(temp->data);
    temp = temp->next;
  }
  while (head != NULL)
  {
    int i = Stack.top();
    Stack.pop();
    if (head->data != i)
    {
      return false;
    }
    head = head->next;
  }
  return true;
}

int main()
{
  push(1);
  push(2);
  push(1);
  print();
  if (checkPalindrome())
  {
    cout << "List is Palindrome" << endl;
  }
  else
  {
    cout << "Not Palindrom" << endl;
  }
  return 0;
}