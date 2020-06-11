#include <iostream>
using namespace std;

bool findElement(int arr[], int x, int l, int r)
{
  if (r < l)
    return false;
  if (arr[l] == x)
    return true;
  if (arr[r] == x)
    return true;
  return findElement(arr, x, l + 1, r - 1);
}

int main()
{
  int arr[] = {1, 3, 4, 2, 6, 7};
  int x = 1;
  int size = sizeof(arr) / sizeof(arr[0]);
  int left = 0;
  int right = size - 1;
  if (findElement(arr, x, left, right))
  {
    cout << "Found" << endl;
  }
  else
  {
    cout << "Not Found" << endl;
  }
  return 0;
}