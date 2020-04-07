#include <iostream>
using namespace std;
 
int main() {
    int n;
    int a = 0;
    int b = 0;
    char ch;
    cin >>n;
    for(int i = 0; i<n; i++) {
        cin >>ch;
        if(ch == 'A') {
            a++;
        } else {
            b++;
        }
    }
    if(a>b) {
        cout<<"Anton";
    } else if(b > a) {
        cout <<"Danik";
    } else {
        cout <<"Friendship";
    }
    return 0;
}