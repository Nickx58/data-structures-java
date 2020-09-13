#include <iostream>
using namespace std;

bool hasThreeNumbers(int arr[], int size, int sum)
{
  int l, r;
  for (int i = 0; i < size - 2; i++)
  {
    l = i + 1;
    r = size - 1;
    while (l < r)
    {
      if (arr[i] + arr[l] + arr[r] == sum)
      {
        cout << "The Triplets is: " << arr[i] << " " << arr[l] << " " << arr[r] << endl;
        return true;
      }
      else if (arr[i] + arr[l] + arr[r] < sum)
      {
        l++;
      }
      else
      {
        r--;
      }
    }
  }
  return false;
}

int main()
{
  int arr[] = {1, 4, 6, 8, 10, 45};
  int sum = 22;
  int size = sizeof(arr) / sizeof(arr[0]);
  hasThreeNumbers(arr, size, sum);
  return 0;
}