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

void reverse(int arr[], int size)
{
  int i = 0;
  int j = size - 1;
  while (i < j)
  {
    swap(arr[i], arr[j]);
    i++;
    j--;
  }
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

bool checkSorted(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      return false;
    }
  }
  return true;
}

int sortedInsert(int arr[], int size, int x)
{
  int i = size - 1;
  while (i >= 0 && arr[i] > x)
  {
    arr[i + 1] = arr[i];
    i--;
  }
  arr[i + 1] = x;
  return size + 1;
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
  cout << "After reversing the Array" << endl;
  reverse(A, size);
  display(A, size);
  size = sortedInsert(A, size, 4);
  display(A, size);
  return 0;
}