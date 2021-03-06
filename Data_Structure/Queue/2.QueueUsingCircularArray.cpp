/* Queue - Circular Array implementation in C++*/
#include <iostream>
using namespace std;
#define MAX_SIZE 101 //maximum size of the array that will store Queue.

int A[MAX_SIZE];
int front = -1;
int rear = -1;
// To check wheter Queue is empty or not
bool IsEmpty()
{
    return (front == -1 && rear == -1);
}

// To check whether Queue is full or not
bool IsFull()
{
    return (rear + 1) % MAX_SIZE == front ? true : false;
}

// Inserts an element in queue at rear end
void Enqueue(int x)
{
    cout << "Enqueuing " << x << " \n";
    if (IsFull())
    {
        cout << "Error: Queue is Full\n";
        return;
    }
    if (IsEmpty())
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % MAX_SIZE;
    }
    A[rear] = x;
}

// Removes an element in Queue from front end.
void Dequeue()
{
    cout << "Dequeuing \n";
    if (IsEmpty())
    {
        cout << "Error: Queue is Empty\n";
        return;
    }
    else if (front == rear)
    {
        rear = front = -1;
    }
    else
    {
        front = (front + 1) % MAX_SIZE;
    }
}
// Returns element at front of queue.
int Front()
{
    if (front == -1)
    {
        cout << "Error: cannot return front from empty queue\n";
        return -1;
    }
    return A[front];
}
/* 
    Printing the elements in queue from front to rear. 
	This function is only to test the code. 
	This is not a standard function for Queue implementation. 
*/
void Print()
{
    // Finding number of elements in queue
    int count = (rear + MAX_SIZE - front) % MAX_SIZE + 1;
    cout << "Queue   : ";
    for (int i = 0; i < count; i++)
    {
        int index = (front + i) % MAX_SIZE; // Index of element while travesing circularly from front
        cout << A[index] << " ";
    }
    cout << "\n\n";
}
int main()
{
    Enqueue(2);
    Print();
    Enqueue(4);
    Print();
    Enqueue(6);
    Print();
    Dequeue();
    Print();
    Enqueue(8);
    Print();
}