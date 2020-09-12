#include <iostream>
using namespace std;

void dutchNationalFlag(int arr[], int size, int pivot)
{
  int low_boundary = 0;
  int high_boundary = size - 1;
  int i = 0;
  while (i <= high_boundary)
  {
    if (arr[i] < pivot)
    {
      swap(arr[i], arr[low_boundary]);
      low_boundary++;
      i++;
    }
    else if (arr[i] > pivot)
    {
      swap(arr[i], arr[high_boundary]);
      high_boundary--;
    }
    else
    {
      i++;
    }
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
  int arr[] = {6, 7, 5, 4, 3, 2, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  dutchNationalFlag(arr, size, 4);
  print(arr, size);
  return 0;
}