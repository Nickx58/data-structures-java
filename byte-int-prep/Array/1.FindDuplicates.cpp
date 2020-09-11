#include <iostream>
using namespace std;

bool checkDuplicates(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    if (arr[i] == arr[i + 1])
    {
      return true;
    }
  }
  return false;
}

void bubbleSort(int arr[], int size)
{
  bool isSorted = false;
  while (!isSorted)
  {
    isSorted = true;
    for (int i = 0; i < size - 1; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        swap(arr[i], arr[i + 1]);
        isSorted = false;
      }
    }
    size--;
  }
}

int main()
{
  int arr[] = {5, 6, 1, 2, 7, 5, 9};
  int size = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, size);
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  if (checkDuplicates(arr, size))
  {
    cout << "Duplicates found" << endl;
  }
  else
  {
    cout << "Not found" << endl;
  }
  return 0;
}