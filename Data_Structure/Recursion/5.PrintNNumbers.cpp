#include <iostream>
using namespace std;

void printNToOne(int n)
{
  if (n == 1)
  {
    cout << n << " ";
    return;
  }
  cout << n << " ";
  printNToOne(n - 1);
}

void printOneToN(int n)
{
  if (n == 1)
  {
    cout << n << " ";
    return;
  }
  printOneToN(n - 1);
  cout << n << " ";
}

int main()
{
  int n = 10;
  printOneToN(n);
  cout << endl;
  printNToOne(n);
  cout << endl;
  return 0;
}