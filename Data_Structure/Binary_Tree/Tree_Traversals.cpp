/*
* Tree Traversals
* In-Order
* Pre-Order
* Post-Order
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
};

Node* getNewNode(int data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void printInOrder(Node *root) {
    if (root == NULL) {
        return;
    }
    printInOrder(root->left);
    cout<<root->data<<" ";
    printInOrder(root->right);
}

void printPreOrder(Node *root) {
    if (root == NULL) {
        return;
    }
    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

void printPostOrder(Node *root) {
    if (root == NULL) {
        return;
    }
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data<<" ";
}

int main() {
    Node *root = getNewNode(1);
    root->left             = getNewNode(2); 
    root->right           = getNewNode(3); 
    root->left->left     = getNewNode(4); 
    root->left->right   = getNewNode(5); 
    printf("\nPreorder traversal of binary tree is \n"); 
    printPreOrder(root); 
  
    printf("\nInorder traversal of binary tree is \n"); 
    printInOrder(root);   
  
    printf("\nPostorder traversal of binary tree is \n"); 
    printPostOrder(root);
}
