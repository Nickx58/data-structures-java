#include <iostream>
#include <stack>
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

void iterativePreOrder(Node *root)
{
  stack<Node *> s;
  s.push(root);
  while (!s.empty())
  {
    Node *temp = s.top();
    cout << temp->data << " ";
    s.pop();
    if (temp->right)
    {
      s.push(temp->right);
    }
    if (temp->left)
    {
      s.push(temp->left);
    }
  }
  cout << endl;
}

int main()
{
  struct Node *root = newNode(10);
  root->left = newNode(8);
  root->right = newNode(2);
  root->left->left = newNode(3);
  root->left->right = newNode(5);
  root->right->left = newNode(2);

  cout << "Pre Order traversal of binary tree is \n";
  iterativePreOrder(root);

  return 0;
}