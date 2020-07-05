/*
Reverse array using swaping the element
*/
#include <iostream>
using namespace std;

void print(int a[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main()
{
  int a[] = {1, 2, 3, 4, 5};
  int size = sizeof(a) / sizeof(a[0]);
  cout << "Before Reverse" << endl;
  print(a, size);
  int left = 0;
  int right = size - 1;
  while (left < right)
  {
    swap(a[left], a[right]);
    left++;
    right--;
  }
  cout << "After reverse" << endl;
  print(a, size);
  return 0;
}