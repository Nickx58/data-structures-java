// Reverse a Linked List using recursion

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head;

void reverseList(Node *p) {
    if(p->next == NULL) {
        head = p;
        return;
    }
    reverseList(p->next);
    Node *q = p->next;
    q->next = p;
    p->next = NULL;
}

void print() {
    Node *temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void push(int data) {
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}

int main() {
    head = NULL;
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);
    print();
    cout<<"After Reversing"<<endl;
    reverseList(head);
    print();
    return 0;
}