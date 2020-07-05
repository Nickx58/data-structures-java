#include <iostream>
using namespace std;

int main()
{
  int A[5] = {2, 4, 6, 8, 10};
  int *P;
  int i;
  P = new int[5];
  P[0] = 1;
  P[1] = 3;
  P[2] = 5;
  P[3] = 7;
  P[4] = 9;
  cout << "Static Array: " << endl;
  for (i = 0; i < 5; i++)
  {
    cout << A[i] << " ";
  }
  cout << endl;
  cout << "Dynamic Array: " << endl;
  for (i = 0; i < 5; i++)
  {
    cout << P[i] << " ";
  }
  cout << endl;
  return 0;
}