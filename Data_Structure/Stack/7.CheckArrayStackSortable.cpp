#include <iostream>
#include <stack>
using namespace std;

bool check(int A[], int N)
{
  stack<int> S;

  int B_end = 0;

  for (int i = 0; i < N; i++)
  {
    if (!S.empty())
    {
      int top = S.top();
      while (top == B_end + 1)
      {
        B_end = B_end + 1;
        S.pop();
        if (S.empty())
        {
          break;
        }

        top = S.top();
      }
      if (S.empty())
      {
        S.push(A[i]);
      }
      else
      {
        top = S.top();
        if (A[i] < top)
        {
          S.push(A[i]);
        }
        else
        {
          return false;
        }
      }
    }
    else
    {
      S.push(A[i]);
    }
  }

  return true;
}

int main()
{
  int A[] = {4, 1, 2, 3};
  int N = sizeof(A) / sizeof(A[0]);
  check(A, N) ? cout << "YES" : cout << "NO";
  return 0;
}
