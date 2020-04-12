#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head;

void print() {
    Node *temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

void insertAtEnd(int data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    
    // IF head is empty make head as a new Node
    if(head == NULL) {
        head = newNode;
        return;
    }

    // Traverse till last Node
    Node *last = head;
    while( last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
    return;
}

int main() {
    head = NULL;
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(4);
    insertAtEnd(5);
    print();
    return 0;
}
