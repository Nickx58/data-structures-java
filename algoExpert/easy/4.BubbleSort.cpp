#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
  bool isSorted = false;
  int lastSorted = size - 1;
  while (!isSorted)
  {
    isSorted = true;
    for (int i = 0; i < lastSorted; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        swap(arr[i], arr[i + 1]);
        isSorted = false;
      }
    }
    lastSorted--;
  }
}
void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[] = {12, 13, 1, 10, 34, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, n);
  print(arr, n);
  return 0;
}