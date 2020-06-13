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

void inorder(Node *root)
{
  if (!root)
    return;
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
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

void deleteDeppest(Node *root, Node *dNode)
{
  queue<Node *> q;
  q.push(root);
  Node *temp;
  while (!q.empty())
  {
    temp = q.front();
    q.pop();
    if (temp->right)
    {
      if (temp->right == dNode)
      {
        temp->right = NULL;
        delete dNode;
        return;
      }
      else
      {
        q.push(temp->right);
      }
    }
    if (temp->left)
    {
      if (temp->left == dNode)
      {
        temp->left = NULL;
        delete dNode;
        return;
      }
    }
  }
}

void deleteKey(Node *root, int key)
{
  queue<Node *> q;
  q.push(root);
  Node *temp;
  Node *key_Node = NULL;
  while (!q.empty())
  {
    temp = q.front();
    q.pop();
    if (temp->data == key)
    {
      key_Node = temp;
    }
    if (temp->left)
    {
      q.push(temp->left);
    }
    if (temp->right)
    {
      q.push(temp->right);
    }
  }
  int x = temp->data;
  cout << "Value: " << x << endl;
  deleteDeppest(root, temp);
  key_Node->data = x;
}

int main()
{
  struct Node *root = newNode(10);
  root->left = newNode(11);
  root->left->left = newNode(7);
  root->left->right = newNode(12);
  root->right = newNode(9);
  root->right->left = newNode(15);
  root->right->right = newNode(8);

  cout << "Inorder traversal before deletion : ";
  inorder(root);

  int key = 11;
  deleteKey(root, key);

  cout << endl;
  cout << "Inorder traversal after deletion : ";
  inorder(root);

  return 0;
}