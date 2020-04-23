/*
* Stack Linked List Implementation
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *top = NULL;

void Print() {
    Node *temp = top;
    cout <<"Stack: ";
    while (temp != NULL) {
        cout <<temp->data<<" ";
        temp = temp->next;
    }
    cout <<endl;
}

void Push(int data) {
    Node *temp = new Node();
    temp->data = data;
    temp->next = top;
    top = temp;
}

void Pop() {
    if (top == NULL) {
        cout <<"Error: Stack is Empty"<<endl;
        return;
    }
    Node *temp = top;
    top = top->next;
    delete temp;
}

int isEmpty() {
    if (top == NULL) {
        return 1;
    }
    return 0;
}

int Top() {
    if (top == NULL) {
        cout <<"Stack is empty"<<endl;
        return 0;
    }
    return top->data;
}

int main() {
    Push(5);Print();
    Push(4);Print();
    Push(3);Print();
    Pop();Print();
    Push(2);Print();
    return 0;
}
