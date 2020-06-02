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
  else if (data <= root->data)
  {
    root->left = getNewNode(root->left, data);
  }
  else
  {
    root->right = getNewNode(root->right, data);
  }
  return root;
}

bool nodeSearch(Node *root, int data)
{
  if (root == NULL)
    return false;
  else if (root->data == data)
  {
    return true;
  }
  else if (data <= root->data)
  {
    return nodeSearch(root->left, data);
  }
  else
  {
    return nodeSearch(root->right, data);
  }
}

int main()
{
  Node *root = NULL;
  root = insert(root, 15);
  root = insert(root, 10);
  root = insert(root, 20);
  root = insert(root, 25);
  root = insert(root, 8);
  root = insert(root, 12);
  if (nodeSearch(root, 10) != 0)
  {
    cout << "Found in the binary tree" << endl;
  }
  else
  {
    cout << "Not Found" << endl;
  }
  return 0;
}