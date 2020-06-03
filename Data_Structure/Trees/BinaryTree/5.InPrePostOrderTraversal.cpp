#include <iostream>
#include <queue>
using namespace std;

struct Node
{
  char data;
  Node *left;
  Node *right;
};

// Functions to print Nodes in a binary tree in in,post,preOrder
void inOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
}

void postOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  inOrder(root->left);
  inOrder(root->right);
  cout << root->data << " ";
}

void preOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  cout << root->data << " ";
  inOrder(root->left);
  inOrder(root->right);
}

// Function to Insert Node in a Binary Search Tree
Node *Insert(Node *root, char data)
{
  if (root == NULL)
  {
    root = new Node();
    root->data = data;
    root->left = root->right = NULL;
  }
  else if (data <= root->data)
    root->left = Insert(root->left, data);
  else
    root->right = Insert(root->right, data);
  return root;
}

int main()
{
  Node *root = NULL;
  root = Insert(root, 'M');
  root = Insert(root, 'B');
  root = Insert(root, 'Q');
  root = Insert(root, 'Z');
  root = Insert(root, 'A');
  root = Insert(root, 'C');
  //Print Nodes traversals
  inOrder(root);
  cout << endl;
  postOrder(root);
  cout << endl;
  preOrder(root);
  cout << endl;
}