/*
* TWO number sum
* Assuming Array is sorted If not then sort the array first
*/
#include <iostream>
using namespace std;

bool hasArray(int a[], int size, int sum)
{
  int left = 0;
  int right = size - 1;
  while (left < right)
  {
    int currentSum = a[left] + a[right];
    if (currentSum == sum)
    {
      return 1;
    }
    else if (currentSum < sum)
    {
      left++;
    }
    else
    {
      right--;
    }
  }
  return 0;
}

int main()
{
  int A[] = {-1, 1, 3, 5, 7, 10, 12};
  int sum = 5;
  int size = sizeof(A) / sizeof(A[0]);
  if (hasArray(A, size, sum))
  {
    cout << "Array has two element with the given sum";
  }
  else
  {
    cout << "Array doesn't have two elements with given sum";
  }
  cout << endl;
  return 0;
}
