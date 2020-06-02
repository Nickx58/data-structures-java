// array implementation of binary tree
#include <iostream>
using namespace std;

char tree[10];

int root(char key)
{
  if (tree[0] != '\0')
  {
    cout << "Tree already had a root" << endl;
  }
  else
  {
    tree[0] = key;
  }
  return 0;
}

int set_left(char key, int parent)
{
  if (tree[parent] == '\0')
  {
    cout << "Cannot set child" << endl;
  }
  else
  {
    tree[(parent * 2) + 1] = key;
  }
  return 0;
}

int set_right(char key, int parent)
{
  if (tree[parent] == '\0')
  {
    cout << "Cannot set child" << endl;
  }
  else
  {
    tree[(parent * 2) + 2] = key;
  }
  return 0;
}

void printTree()
{
  for (int i = 0; i < 10; i++)
  {
    if (tree[i] != '\0')
    {
      cout << tree[i];
    }
    else
    {
      cout << "-";
    }
  }
  cout << endl;
}

int main()
{
  root('A');
  set_right('C', 0);
  set_left('D', 1);
  set_right('E', 1);
  set_right('F', 2);
  printTree();
  return 0;
}