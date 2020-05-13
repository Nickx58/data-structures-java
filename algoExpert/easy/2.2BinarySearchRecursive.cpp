#include <iostream>
using namespace std;

int binarySearch(int a[], int left, int right, int x)
{
  if (left <= right)
  {
    int mid = left + (right - left) / 2;
    if (a[mid] == x)
    {
      return a[mid];
    }
    else if (x < a[mid])
    {
      return binarySearch(a, left, mid - 1, x);
    }
    else
    {
      return binarySearch(a, mid + 1, right, x);
    }
  }
  return 0;
}

int main()
{
  int a[] = {1, 2, 5, 7, 10, 14, 16, 20};
  int size = sizeof(a) / sizeof(a[0]);
  int x = 5;
  int left = 0;
  int right = size - 1;
  int result = binarySearch(a, left, right, x);
  if (result)
  {
    cout << "Element Found:" << result << endl;
  }
  else
  {
    cout << "Not Found" << endl;
  }
  return 0;
}