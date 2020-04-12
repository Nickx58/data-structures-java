/*
* Double Linked List Introduction
* Insert at the end
* Print Double List
* Print in Reverse Order
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

Node *head;

struct Node* getNode(int x) {
    Node *newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void insertAtHead(int data) {
    Node *newNode = getNode(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void print() {
    Node *temp = head;
    cout<<"Forward: ";
    while(temp != NULL) {
        cout<<" "<<temp->data;
        temp = temp->next;
    }
    cout<<"\n";
}

void reversePrint() {
    Node *temp = head;
    if (temp == NULL) return;
    // Going to last Node
    while(temp->next != NULL) {
        temp = temp->next;
    }
    // Traversing Backward using Prev Pointer
    cout <<"Reverse: ";
    while(temp != NULL) {
        cout<<" "<<temp->data;
        temp = temp->prev;
    }
    cout<<"\n";
}

int main() {
    head = NULL;
    insertAtHead(2);print();reversePrint();
    insertAtHead(4);print();reversePrint();
    insertAtHead(6);print();reversePrint();
    return 0;
}
