#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *newNode(int key)
{
  Node *temp = new Node;
  temp->data = key;
  temp->next = NULL;
  return temp;
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

void detectAndRemoveLoop(Node *head)
{
  if (head == NULL && head->next == NULL)
  {
    return;
  }
  Node *slow = head;
  Node *fast = head;
  while (slow && fast && fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)
    {
      break;
    }
  }
  if (slow == fast)
  {
    slow = head;
    while (slow->next != fast->next)
    {
      slow = slow->next;
      fast = fast->next;
    }
    fast->next = NULL;
  }
}

/* Driver program to test above function*/
int main()
{
  Node *head = newNode(50);
  head->next = head;
  head->next = newNode(20);
  head->next->next = newNode(15);
  head->next->next->next = newNode(4);
  head->next->next->next->next = newNode(10);

  /* Create a loop for testing */
  head->next->next->next->next->next = head->next->next;

  detectAndRemoveLoop(head);

  printf("Linked List after removing loop \n");
  printList(head);

  return 0;
}
