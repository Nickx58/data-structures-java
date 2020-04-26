/*
* Check if Linked List is Palindrome
*/

#include <iostream>
#include <stack>
using namespace std;

struct Node
{
    char data;
    Node *next;
};

Node *head;

void push(char data)
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

int isPalindrome()
{
    stack<char> s;
    Node *ss = head;
    while (ss != NULL)
    {
        s.push(ss->data);
        ss = ss->next;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        char i = s.top();
        if (i == temp->data)
        {
            return 1;
        }
        s.pop();
        temp = temp->next;
    }
    return 0;
}

int main()
{
    head = NULL;
    push('a');
    push('b');
    push('a');
    print();
    int result = isPalindrome();
    result == 1 ? cout << "Palindrome" << endl : cout << "Not Palindrome" << endl;
    return 0;
}