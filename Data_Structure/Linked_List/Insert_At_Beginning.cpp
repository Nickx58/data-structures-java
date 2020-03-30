// Single Linked List
// Insert at the beginning of the List
#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
};

Node *head; // global Variable

void Insert(int data) {
  Node *temp = new Node();
  temp->data = data;
  temp->next = head;
  head = temp;
}

void Print() {
  Node *temp = head;
  cout <<"List is: ";
  while(temp != NULL) {
    cout<<" "<<temp->data;
    temp = temp->next;
  }
  cout<<endl;
}

int main() {
  head = NULL; // empty list
  int number, data;
  cout << "How Many Numbers: "<<flush;
  cin >>number;
  for(int i = 0; i<number; i++) {
    cout<< "Enter number: "<<flush;
    cin >>data;
    Insert(data);
    Print();
  }
  return 0;
}