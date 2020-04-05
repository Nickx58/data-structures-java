// Print list in reverse order using recursion
// Insert List at the end;

#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

void reversePrint(Node *r)
{
	if (r == NULL)
	{
		return;
	}
	reversePrint(r->next);
	cout << r->data << endl;
}

Node *insertEnd(Node *head, int data)
{
	Node *temp = new Node();
	temp->data = data;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		Node *temp1 = head;
		while (temp1->next != NULL)
		{
			temp1 = temp1->next;
		}
		temp1->next = temp;
	}
	return head;
}

int main()
{
	Node *head = NULL;
	head = insertEnd(head, 1);
	head = insertEnd(head, 2);
	head = insertEnd(head, 3);
	head = insertEnd(head, 4);
	head = insertEnd(head, 5);
	reversePrint(head);
	return 0;
}