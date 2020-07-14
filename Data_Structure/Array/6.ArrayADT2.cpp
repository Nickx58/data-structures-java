#include <iostream>
using namespace std;

void display(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int get(int arr[], int index, int size)
{
  if (index >= 0 && index <= size)
  {
    return arr[index];
  }
  return -1;
}

void setValue(int arr[], int index, int size, int value)
{
  if (index >= 0 && index <= size)
  {
    arr[index] = value;
  }
}

int getMax(int arr[], int size)
{
  int max = arr[0];
  for (int i = 1; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

int getMin(int arr[], int size)
{
  int min = arr[0];
  for (int i = 1; i < size; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  return min;
}

int sum(int arr[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return sum;
}

int main()
{
  int A[] = {2, 3, 24, 5, 6, 7, 11};
  int size = sizeof(A) / sizeof(A[0]);
  display(A, size);
  cout << get(A, 1, size) << endl;
  setValue(A, 1, size, 1);
  display(A, size);
  cout << "Max Element in the array is: " << getMax(A, size) << endl;
  cout << "Min Element in the array is: " << getMin(A, size) << endl;
  cout << "Sum of Array is: " << sum(A, size) << endl;
  return 0;
}