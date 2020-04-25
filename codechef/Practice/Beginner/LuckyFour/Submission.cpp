#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        int countFour = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '4')
            {
                countFour++;
            }
        }
        cout <<countFour<< endl;
    }
    return 0;
}