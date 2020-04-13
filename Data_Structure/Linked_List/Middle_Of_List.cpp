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
        cout <<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

void insert(int data) {
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}

void printMiddle() {
    if (head != NULL) {
        Node *fast = head;
        Node *slow = head;
        while(fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        cout<<"The Middle of List: "<<slow->data<<"\n";
    }
}

int main() {
    head = NULL;
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    print();
    printMiddle();
    return 0;
}