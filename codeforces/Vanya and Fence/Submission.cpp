#include <iostream>
using namespace std;
 
int main() {
    int height; // height of fence
    int number; // number of friend
    int width = 0; // total width needed
    int fh;
    cin >>number>>height;
    for(int i = 0; i<number; i++) {
        cin>>fh;
        if(fh > height) {
            width = width + 2;
        } else {
            width++;
        }
    } 
    cout<<width;
    return 0;
}