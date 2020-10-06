#include <iostream>
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

int findHeight(Node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  int leftHeight = findHeight(root->left);
  int rightHeight = findHeight(root->right);
  return 1 + max(leftHeight, rightHeight);
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
  cout << "Height of above tree is: " << findHeight(root);
  cout << endl;
  return 0;
}