#include <iostream>
using namespace std;

int findMissing(int arr[], int n)
{
  int total = (n + 1) * (n + 2) / 2;
  for (int i = 0; i < n; i++)
  {
    total -= arr[i];
  }
  return total;
}

int main()
{
  int a[] = {1, 2, 3, 5, 6};
  int size = sizeof(a) / sizeof(a[0]);
  int result = findMissing(a, size);
  cout << "Missing Number is: " << result << endl;
  return 0;
}