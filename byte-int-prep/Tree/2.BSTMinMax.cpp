#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;
};

Node *getNewNode(Node *root, int data)
{
  Node *node = new Node();
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}

Node *insert(Node *root, int data)
{
  if (root == NULL)
  {
    root = getNewNode(root, data);
  }
  else if (root->data >= data)
  {
    root->left = getNewNode(root->left, data);
  }
  else
  {
    root->right = getNewNode(root->right, data);
  }
  return root;
}

int findMinNumberIterative(Node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  while (root->left)
  {
    root = root->left;
  }
  return root->data;
}

int findMaxNumberIterative(Node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  while (root->right)
  {
    root = root->right;
  }
  return root->data;
}

int findMinNumberRecursive(Node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  else if (root->left == NULL)
  {
    return root->data;
  }
  return findMinNumberRecursive(root->left);
}

int findMaxRecursive(Node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  else if (root->right == NULL)
  {
    return root->data;
  }
  return findMaxRecursive(root->right);
}

int main()
{
  Node *root = NULL;
  root = insert(root, 15);
  root = insert(root, 10);
  root = insert(root, 4);
  root = insert(root, 25);
  int minNumber = findMinNumberRecursive(root);
  int maxNumber = findMaxNumberIterative(root);
  cout << "Min Number in the tree is: " << minNumber << endl;
  cout << "Max Number in the tree is: " << maxNumber << endl;
  return 0;
}