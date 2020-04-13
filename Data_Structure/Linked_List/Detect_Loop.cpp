#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head;

void insert(int data) {
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}

int hasLoop() {
    if (head == NULL) return 0;
    Node *slow = head;
    Node *fast = head;
    while(slow && fast && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow) {
            cout <<"Found Loop: "<<'\n';
            return 1;
        }
    }
    return 0;
}

int main() {
    head = NULL;
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    // create a loop
    head->next->next->next->next = head;
    hasLoop();
    return 0;
}