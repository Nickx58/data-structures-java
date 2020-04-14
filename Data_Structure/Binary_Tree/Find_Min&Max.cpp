/*
Find Min and Max element Iterative
*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Function to create new Node in the heap
Node *getNewNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
Node *insert(Node *root, int data)
{
    if (root == NULL)
    {
        root = getNewNode(data);
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

int findMin(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree is empty" << '\n';
        return -1;
    }
    while (root->left != NULL)
    {
        root = root->left;
    }

    return root->data;
}

int findMax(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree is empty" << '\n';
        return -1;
    }
    while (root->right != NULL)
    {
        root = root->right;
    }

    return root->data;
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
    cout << "Min element: " << findMin(root) << '\n';
    cout << "Max element: " << findMax(root) << '\n';
    return 0;
}