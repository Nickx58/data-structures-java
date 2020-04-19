/*
* Problem Statement
* https://www.hackerrank.com/challenges/cpp-sets/problem
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int> s;
    int query;
    cin >>query;
    for(int i = 0; i<query;i++) {
        int type;
        cin >>type;
        int number;
        cin>>number;
        if (type == 1) {
            s.insert(number);
        } else if (type == 2) {
            if (s.count(number) == 1) {
                s.erase(number);
            }
        } else if (type == 3) {
            if(s.count(number) == 1) {
                cout<<"Yes"<<'\n';
            } else {
                cout<<"No"<<'\n';
            }
        }
    }
    return 0;
}
