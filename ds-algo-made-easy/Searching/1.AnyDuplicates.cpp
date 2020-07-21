/*
Given an array find if any duplicates present?

Brute Force Approach -> Use Two For Loop -> Complexity -> O(n2);

Efficent Solution -> Sort the given Array. Now just do one scan on sorted Array
Complexity -> O(nLogn) -> Assuming nlogn Sorting Algo.
For the ease I have use Bubble Sort in below code.
*/

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
  bool isSorted = false;
  while (!isSorted)
  {
    isSorted = true;
    for (int i = 0; i < n - 1; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        swap(arr[i], arr[i + 1]);
        isSorted = false;
      }
    }
    n--;
  }
}

void checkDuplicates(int arr[], int n)
{
  bubbleSort(arr, n);
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == arr[i + 1])
    {
      cout << "Found Duplicate: " << arr[i] << endl;
      return;
    }
  }
  cout << "Not Found Duplicates" << endl;
}

int main()
{
  int arr[] = {3, 2, 1, 2, 2, 3};
  int size = sizeof(arr) / sizeof(arr[0]);
  checkDuplicates(arr, size);
  return 0;
}