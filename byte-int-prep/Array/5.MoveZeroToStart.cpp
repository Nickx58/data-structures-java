#include <iostream>
using namespace std;

void moveZeroToStart(int nums[], int size)
{
  int boundary = size - 1;
  for (int i = size - 1; i >= 0; i--)
  {
    if (nums[i] != 0)
    {
      swap(nums[i], nums[boundary]);
      boundary--;
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
  int arr[] = {1, 2, 0, 3, 4, 0, 6, 0};
  int size = sizeof(arr) / sizeof(arr[0]);
  moveZeroToStart(arr, size);
  print(arr, size);
  return 0;
}