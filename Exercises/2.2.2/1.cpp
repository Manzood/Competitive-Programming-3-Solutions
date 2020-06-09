// obtain the remainder of a number when divided by a power of two
#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int s, n;
	cin>>s>>n; // here n is the power of two	
	int rem=s^n;
	cout<<rem<<endl;
}