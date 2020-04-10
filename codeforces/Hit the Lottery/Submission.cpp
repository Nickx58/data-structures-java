#include <bits/stdc++.h> 
using namespace std; 
 
int deno[] = { 1, 5, 10, 20, 100 }; 
int n = sizeof(deno) / sizeof(deno[0]); 
 
int findMin(int V) 
{ 
	vector<int> ans; 
	for (int i = n - 1; i >= 0; i--) { 
		while (V >= deno[i]) { 
			V -= deno[i]; 
			ans.push_back(deno[i]); 
		} 
	} 
    return ans.size();
} 
 
int main() 
{ 
	long long int n;
	cin>>n;
    int ss = findMin(n);
    cout<<ss;
	return 0; 
} 