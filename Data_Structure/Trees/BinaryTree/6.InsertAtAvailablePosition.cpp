#include <iostream>
#include <queue>
using namespace std;

struct Node
{
  int data;
  Node *left, *right;
};

Node *newNode(int key)
{
  Node *temp = new Node();
  temp->data = key;
  temp->left = temp->right = NULL;
  return temp;
}

void inOrder(Node *root)
{
  if (!root)
    return;
  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
}

void insert(Node *root, int data)
{
  queue<Node *> q;
  q.push(root);

  while (!q.empty())
  {
    Node *temp = q.front();
    q.pop();

    if (!temp->left)
    {
      temp->left = newNode(data);
      break;
    }
    else
    {
      q.push(temp->left);
    }

    if (!temp->right)
    {
      temp->right = newNode(data);
      break;
    }
    else
    {
      q.push(temp->right);
    }
  }
}

int main()
{
  Node *root = newNode(10);
  root->left = newNode(11);
  root->left->left = newNode(7);
  root->right = newNode(9);
  root->right->left = newNode(15);
  root->right->right = newNode(8);

  cout << "Inorder traversal before insertion:";
  inOrder(root);

  int key = 12;
  insert(root, key);

  cout << endl;
  cout << "Inorder traversal after insertion:";
  inOrder(root);

  return 0;
}