#include <iostream>
using namespace std;
 
int main() {
  int num;
  int can = 0;
  int yes = 0;
  int p,v,t;
  cin >>num;
  int i;
  for (i = 0; i<num; i++) {
    cin >>p>>v>>t;
    if (p == 1|| v == 1 || t == 1) {
      can = p + v + t;
      if(can == 2 || can == 3) {
        yes++;
      }
    } 
  }
  cout<<yes<<'\n';
  return 0;
}