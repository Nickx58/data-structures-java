#include <iostream>
using namespace std;

int binarySearch(int a[], int size, int x)
{
  int left = 0;
  int right = size - 1;
  while (left <= right)
  {
    int mid = left + (right - left) / 2;
    if (a[mid] == x)
    {
      return a[mid];
    }
    else if (x < a[mid])
    {
      right = mid - 1;
    }
    else
    {
      left = mid + 1;
    }
  }
  return 0;
}

int main()
{
  int a[] = {1, 2, 5, 7, 10, 14, 16, 20};
  int size = sizeof(a) / sizeof(a[0]);
  int x = 12;
  int result = binarySearch(a, size, x);
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