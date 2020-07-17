#include <iostream>
using namespace std;

int c[10];

void display(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void unionArray(int a[], int b[], int aa, int bb)
{
  int i, j, k;
  i = j = k = 0;
  while (i < aa && j < bb)
  {
    if (a[i] < b[j])
    {
      c[k++] = a[i++];
    }
    else if (b[j] < a[i])
    {
      c[k++] = b[j++];
    }
    else
    {
      c[k++] = a[i++];
      j++;
    }
  }
  while (i < aa)
  {
    c[k++] = a[i++];
  }
  while (j < bb)
  {
    c[k++] = b[j++];
  }
}

int main()
{
  int A[] = {2, 4, 6, 8, 10};
  int B[] = {1, 3, 4, 5, 7, 9, 10};
  int sizeA = sizeof(A) / sizeof(A[0]);
  int sizeB = sizeof(B) / sizeof(B[0]);
  unionArray(A, B, sizeA, sizeB);
  int sizeC = sizeof(c) / sizeof(c[0]);
  display(c, sizeC);
  return 0;
}