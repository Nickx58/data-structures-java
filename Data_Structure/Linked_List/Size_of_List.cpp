// return the size of the Linked List

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head;

int getSize() {
    Node *temp = head;
    if(temp == NULL) return 0;
    int count = 0;
    while(temp != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}

void push(int data) {
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}

int main() {
    head = NULL;
    push(3);
    push(4);
    push(5);
    push(6);
    cout <<"Size of Linked List: "<<getSize()<<endl;
    return 0;
}