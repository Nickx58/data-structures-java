#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >>a>>b;
    int years = 0;
    for(int i = 0; i<=b; i++) {
        a = a*3;
        b = b*2;
        years++;
        if(a > b) {
            break;
        }
    }
    cout<<years;
    return 0;
}
