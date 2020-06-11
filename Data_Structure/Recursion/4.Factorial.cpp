#include <iostream>
using namespace std;

int Fact(int num)
{
  if (num == 0)
    return 1;
  return Fact(num - 1) * num;
}

int main()
{
  int num = 5;
  int r = Fact(num);
  cout << "Factorial " << num << " numbers is: " << r << endl;
  return 0;
}