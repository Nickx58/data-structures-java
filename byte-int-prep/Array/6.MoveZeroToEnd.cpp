#include <iostream>
using namespace std;

void moveZeroToEnd(int nums[], int size)
{
  int boundary = 0;
  for (int i = 0; i < size; i++)
  {
    if (nums[i] != 0)
    {
      swap(nums[i], nums[boundary]);
      boundary++;
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
  int arr[] = {1, 2, 0, 3, 4, 0, 6, 0}; // 1,2,3,4,6,0,0,0
  int size = sizeof(arr) / sizeof(arr[0]);
  moveZeroToEnd(arr, size);
  print(arr, size);
  return 0;
}