#include <iostream>
using namespace std;

bool hasFourNumbers(int arr[], int size, int sum)
{
  int l, r;
  for (int i = 0; i < size - 3; i++)
  {
    for (int j = i + 1; j < size - 2; j++)
    {
      l = j + 1;
      r = size - 1;
      while (l < r)
      {
        if (arr[i] + arr[j] + arr[l] + arr[r] == sum)
        {
          cout << arr[i] << " " << arr[j] << " " << arr[l] << " " << arr[r] << endl;
          l++;
          r--;
        }
        else if (arr[i] + arr[j] + arr[l] + arr[r] < sum)
        {
          l++;
        }
        else
        {
          r--;
        }
      }
    }
  }
  return false;
}

int main()
{
  int arr[] = {1, 4, 6, 10, 12, 45};
  int sum = 21;
  int size = sizeof(arr) / sizeof(arr[0]);
  hasFourNumbers(arr, size, sum);
  return 0;
}