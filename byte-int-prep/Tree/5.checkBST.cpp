#include <iostream>
#include <limits.h>
using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;
};

Node *getNewNode(int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

Node *insert(Node *node, int data)
{
  if (node == NULL)
    return getNewNode(data);
  if (data <= node->data)
  {
    node->left = insert(node->left, data);
  }
  else if (data >= node->data)
  {
    node->right = insert(node->right, data);
  }
  return node;
}

bool isBSTUtil(Node *root, int min, int max)
{
  if (root == NULL)
  {
    return true;
  }
  if (root->data < min || root->data > max)
  {
    return false;
  }
  return isBSTUtil(root->left, min, root->data - 1) && isBSTUtil(root->right, root->data + 1, max);
}

bool isBST(Node *root)
{
  return isBSTUtil(root, INT_MIN, INT_MAX);
}

int main()
{
  Node *root = NULL;
  root = insert(root, 50);
  insert(root, 30);
  insert(root, 20);
  insert(root, 40);
  insert(root, 70);
  insert(root, 60);
  insert(root, 80);
  if (isBST(root))
    cout << "Is BST";
  else
    cout << "Not a BST";
  cout << endl;
  return 0;
}