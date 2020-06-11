#include <iostream>
using namespace std;

int Sum(int num)
{
  if (num == 0)
    return 0;
  return Sum(num - 1) + num;
}

int main()
{
  int num = 5;
  int r = Sum(num);
  cout << "Sum of " << num << " numbers is: " << r << endl;
  return 0;
}