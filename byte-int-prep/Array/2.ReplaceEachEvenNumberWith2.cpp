#include <iostream>
using namespace std;

int getLastNumber(int arr[], int size)
{
  int i = size - 1;
  while (i >= 0 && arr[i] == 0)
  {
    i--;
  }
  return i;
}

void cloneNumbers(int arr[], int size)
{
  int end = size;
  int i = getLastNumber(arr, size);
  while (i >= 0)
  {
    if (arr[i] % 2 == 0)
    {
      arr[--end] = arr[i];
    }
    arr[--end] = arr[i];
    i--;
  }
}

void print(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[7] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  cloneNumbers(arr, size);
  cout << "After Cloning: " << endl;
  print(arr, size);
}