#include <iostream>
using namespace std;

int parition(int arr[], int low, int high)
{
  int pivot = arr[high];
  int i = (low - 1);
  for (int j = low; j <= high - 1; j++)
  {
    if (arr[j] < pivot)
    {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);
  return (i + 1);
}

void quick(int arr[], int low, int high)
{
  if (low < high)
  {
    int pi = parition(arr, low, high);
    quick(arr, low, pi - 1);
    quick(arr, pi + 1, high);
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
  int arr[] = {4, 3, 2, 7, 20, 23, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  quick(arr, 0, size - 1);
  print(arr, size);
  return 0;
}