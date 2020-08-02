#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *head = NULL;

Node *pushFirst(int x)
{
  Node *temp = new Node();
  temp->data = x;
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

int countNodesinLoop(Node *list)
{
  Node *slow = list;
  Node *fast = list;
  int loop = 0;
  int countLoop = 1;
  while (slow && fast && fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)
    {
      loop = 1;
      break;
    }
  }
  if (loop)
  {
    fast = fast->next;
    while (slow != fast)
    {
      fast = fast->next;
      countLoop++;
    }
    return countLoop;
  }
  return 0;
}

/* Driver program to test above function*/
int main()
{

  struct Node *head = pushFirst(1);
  head->next = pushFirst(2);
  head->next->next = pushFirst(3);
  head->next->next->next = pushFirst(4);
  head->next->next->next->next = pushFirst(5);

  /* Create a loop for testing */
  head->next->next->next->next->next = head->next;

  cout << countNodesinLoop(head) << endl;

  return 0;
}
