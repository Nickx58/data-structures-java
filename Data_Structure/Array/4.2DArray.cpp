#include <iostream>
using namespace std;

int main()
{
  int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}};
  int i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 4; j++)
    {
      cout << A[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}