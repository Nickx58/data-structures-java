#include<iostream>
using namespace std;
 
int main() {
  int p,pen,note;
  cin>>p>>pen>>note;
  if(pen >= p && note >= p) {
    cout <<"Yes";
  } else {
    cout <<"No";
  }
  return 0;
}
