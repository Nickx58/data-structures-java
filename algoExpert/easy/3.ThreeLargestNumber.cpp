#include <iostream>
#include <climits>
using namespace std;

void print3largest(int arr[], int size)
{
  int first, second, third = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > first)
    {
      third = second;
      second = first;
      first = arr[i];
    }
    else if (arr[i] > second)
    {
      third = second;
      second = arr[i];
    }
    else if (arr[i] > third)
    {
      third = arr[i];
    }
  }
  cout << "The three largest Number is : " << first << " " << second << " " << third << endl;
}

int main()
{
  int arr[] = {12, 13, 1, 10, 34, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  print3largest(arr, n);
  return 0;
}