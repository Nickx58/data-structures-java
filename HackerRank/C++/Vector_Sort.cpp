/*
* Problem Statement
* https://www.hackerrank.com/challenges/vector-sort/problem
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int>v; //empty vector;
    int n;cin>>n;
    for (int i = 0;i<n;i++) {
        int num;cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    for(auto x: v) {
        cout<<x<<" ";
    }
    return 0;
}
