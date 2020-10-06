#include <iostream>
#include <queue>
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

void levelOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  queue<Node *> Q;
  Q.push(root);
  while (!Q.empty())
  {
    Node *current = Q.front();
    cout << current->data << " ";
    Q.pop();
    if (current->left)
    {
      Q.push(current->left);
    }
    if (current->right)
    {
      Q.push(current->right);
    }
  }
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
  levelOrder(root);
  cout << endl;
  return 0;
}