/*
* Array Implementation of Stack
*/
#include <iostream>
using namespace std;

#define MAX_SIZE 101

int A[MAX_SIZE]; // Integer array to store the stack
int top = -1;    // variable to mark top of the stack

// Push operation to insert an element on top of stack.
void Push(int x)
{
    if (top == MAX_SIZE - 1)
    { // overflow case
        cout << "Error: Stack Overflow:" << endl;
        return;
    }
    A[++top] = x;
}

// Pop operation to remove an element from top of stack.
void Pop()
{
    if (top == -1)
    {
        cout << "Error: Stack is empty" << endl;
        return;
    }
    top--;
}

// Top operation to return element at top of stack.
int Top()
{
    return A[top];
}

// This function will return 1 (true) if stack is empty, 0 (false) otherwise
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}

// This function is just to test the implementation of stack.
// This will print all the elements in the stack at any stage.
void Print()
{
    cout << "Stack: ";
    for (int i = 0; i <= top; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
}

int main()
{
    // Code to test the implementation.
    // calling Print() after each push or pop to see the state of stack.
    Push(2);
    Print();
    Push(5);
    Print();
    Push(10);
    Print();
    Pop();
    Print();
    Push(12);
    Print();
    return 0;
}
