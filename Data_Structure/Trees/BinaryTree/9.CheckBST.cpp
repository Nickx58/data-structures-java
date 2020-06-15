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

bool isBst(Node *root)
{
  static Node *prev = NULL;
  if (root)
  {
    if (!isBst(root->left))
      return false;
    if (prev != NULL && prev->data >= root->data)
      return false;
    prev = root;
    return isBst(root->right);
  }
  return true;
}

int main()
{
  struct Node *root = newNode(3);
  root->left = newNode(2);
  root->right = newNode(5);
  root->left->left = newNode(1);
  root->left->right = newNode(4);

  cout << "Check if tree is BST : ";
  if (isBst(root))
  {
    cout << "is BST" << endl;
  }
  else
  {
    cout << "Not BST" << endl;
  }
  return 0;
}