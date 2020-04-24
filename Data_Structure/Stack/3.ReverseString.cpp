#include <iostream>
#include <stack>
using namespace std;

void Reverse(char *c, int n)
{
    stack<char> S;
    // Loop for Push
    for (int i = 0; i < n; i++)
    {
        S.push(c[i]);
    }
    // Loop for Pop
    for (int i = 0; i < n; i++)
    {
        c[i] = S.top();
        S.pop();
    }
}

int main()
{
    char c[51];
    printf("Enter a string: ");
    gets(c);
    Reverse(c, strlen(c));
    cout << "Output: " << c << endl;
    return 0;
}
