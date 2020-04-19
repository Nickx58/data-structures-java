/*
* Problem Statement Link
* https://www.hackerrank.com/challenges/cpp-maps/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main()
{
    map<string, int> m;
    int queries;
    int type;
    string name;
    int marks;
    cin >> queries;
    for (int i = 0; i < queries; i++)
    {
        cin >> type;
        cin >> name;
        if (type == 1)
        {
            cin >> marks;
            m[name] += marks;
        }
        else if (type == 2)
        {
            m.erase(name);
        }
        else if (type == 3)
        {
            if (m.count(name))
            {
                cout << m[name] << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
    }
    return 0;
}
