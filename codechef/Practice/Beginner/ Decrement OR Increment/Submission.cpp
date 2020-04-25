#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;cin>>n;
	if(n%4 == 0) {
	    n += 1;
	} else {
	    n -= 1;
	}
	cout<<n<<'\n';
	return 0;
}
