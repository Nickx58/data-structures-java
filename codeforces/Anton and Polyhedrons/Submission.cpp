#include<iostream>
using namespace std;
 
int main() {
  int n;
  int number = 0;
  string side;
  cin >>n;
  for (int i = 0; i < n; i++)
  {
    cin >>side;
    if(side == "Tetrahedron") {
      number = number + 4;
    } else if(side == "Cube") {
      number = number + 6;
    } else if(side == "Octahedron") {
      number = number + 8;
    } else if(side == "Dodecahedron") {
      number = number + 12;
    } else {
      number = number + 20;
    }
  }
  cout<<number;
  return 0;
}