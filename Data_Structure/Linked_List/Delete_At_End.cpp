#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head;

void push(int data) {
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}

void print() {
    Node *temp = head;
    while (temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteEnd() {
    Node *temp,*prev;
    temp = head;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    delete temp;
}

int main() {
    head = NULL;
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);
    print();
    cout<<"Deleting Last Node"<<endl;
    deleteEnd();
    print();
    return 0;
}
