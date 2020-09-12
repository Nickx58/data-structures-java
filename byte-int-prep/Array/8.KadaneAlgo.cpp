#include <iostream>
using namespace std;

int maxSubArraySum(int arr[], int size)
{
  int maxSum = arr[0];
  int maxEndingHere = arr[0];
  for (int i = 1; i < size; i++)
  {
    maxEndingHere = max(maxEndingHere + arr[i], arr[i]);
    maxSum = max(maxSum, maxEndingHere);
  }
  return maxSum;
}

int main()
{
  int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
  int size = sizeof(arr) / sizeof(arr[0]);
  int result = maxSubArraySum(arr, size);
  cout << "Max Sub Array is: " << result << endl;
  return 0;
}