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

void rightView(Node *root, int level)
{
  static int max_level = 0;
  if (root == NULL)
    return;
  if (level > max_level)
  {
    cout << root->data << " ";
    max_level = level;
  }
  rightView(root->right, level + 1);
  rightView(root->left, level + 1);
}

int main()
{
  struct Node *root = newNode(3);
  root->left = newNode(2);
  root->right = newNode(5);
  root->left->left = newNode(1);
  root->left->right = newNode(4);
  rightView(root, 1);
  return 0;
}