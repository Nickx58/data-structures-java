#include <iostream>
#include <stack>
#include <queue>
using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;
};

Node *newNode(int data)
{
  Node *temp = new Node();
  temp->data = data;
  temp->left = temp->right = NULL;
  return temp;
}

void reverseLevel(Node *root)
{
  queue<Node *> q;
  stack<Node *> s;
  q.push(root);
  while (!q.empty())
  {
    root = q.front();
    q.pop();
    s.push(root);
    if (root->right)
    {
      q.push(root->right);
    }
    if (root->left)
    {
      q.push(root->left);
    }
  }

  // pop all element from stack
  while (!s.empty())
  {
    root = s.top();
    cout << root->data << " ";
    s.pop();
  }
  cout << endl;
}

int main()
{
  struct Node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
  root->right->left = newNode(6);
  root->right->right = newNode(7);

  cout << "Level Order traversal of binary tree is \n";
  reverseLevel(root);

  return 0;
}