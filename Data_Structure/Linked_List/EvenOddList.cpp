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

void segregateEvenOdd()
{
	Node *evenStart = NULL;
	Node *evenEnd = NULL;
	Node *oddStart = NULL;
	Node *oddEnd = NULL;
	Node *current = head;
	while (current)
	{
		int value = current->data;
		if (value % 2 == 0)
		{
			if (evenStart == NULL)
			{
				evenStart = evenEnd = current;
			}
			else
			{
				evenEnd->next = current;
				evenEnd = current;
			}
		}
		else
		{
			if (oddStart == NULL)
			{
				oddStart = oddEnd = current;
			}
			else
			{
				oddEnd->next = current;
				oddEnd = current;
			}
		}
		current = current->next;
	}
	if (oddStart == NULL || evenStart == NULL)
	{
		return;
	}
	evenEnd->next = oddStart;
	oddEnd->next = NULL;
	head = evenStart;
}

/* Driver program to test above function*/
int main()
{
	addNodeAtBegin(5);
	addNodeAtBegin(4);
	addNodeAtBegin(3);
	addNodeAtBegin(2);
	addNodeAtBegin(1);
	print();
	segregateEvenOdd();
	print();
	return 0;
}

