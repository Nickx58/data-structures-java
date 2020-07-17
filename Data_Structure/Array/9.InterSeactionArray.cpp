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

void intersectionArray(int a[], int b[], int aa, int bb)
{
  int i, j, k;
  i = j = k = 0;
  while (i < aa && j < bb)
  {
    if (a[i] < b[j])
    {
      i++;
    }
    else if (b[j] < a[i])
    {
      j++;
    }
    else if (a[i] == b[j])
    {
      c[k++] = a[i++];
      j++;
    }
  }
}

int main()
{
  int A[] = {2, 4, 6, 8, 10};
  int B[] = {1, 3, 4, 5, 7, 9, 10};
  int sizeA = sizeof(A) / sizeof(A[0]);
  int sizeB = sizeof(B) / sizeof(B[0]);
  intersectionArray(A, B, sizeA, sizeB);
  int sizeC = sizeof(c) / sizeof(c[0]);
  display(c, sizeC);
  return 0;
}