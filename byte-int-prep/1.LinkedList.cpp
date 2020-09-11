#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

Node *head;

void PrintNode()
{
	Node *temp = head;
	cout << "List is: " << endl;
	while (temp)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

void Insert(int x)
{
	Node *temp = new Node();
	temp->data = x;
	temp->next = head;
	head = temp;
}

int main()
{
	cout << "How Many Number: " << endl;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter Number: " << endl;
		int x;
		cin >> x;
		Insert(x);
	}
	PrintNode();
	cout << endl;
}