// Reverse a linked List iterative Solution

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head;

void reverse() {
    Node *current = head;
    Node *prev = NULL;
    Node *next = NULL;
    while(current != NULL) {
        // store next
        next = current->next;
        // reverse current Node pointer
        current->next = prev;
        // Move Pointers one position ahead.
        prev = current;
        current = next;
    }
    head = prev;
}

void push(int data) {
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}

void print() {
    Node *temp = head;
    while(temp != NULL) {
        cout <<temp->data<<endl;
        temp = temp->next;
    } 
}
int main() {
    head = NULL;
    push(5);
    push(4);
    push(3);
    push(2);
    print();
    cout<<"Reverse a list"<<endl;
    reverse();
    print();
    return 0;
}
