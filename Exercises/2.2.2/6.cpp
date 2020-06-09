// turn on the last consecutive zeroes in a number

#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int s;
	cin>>s;
	s |= (s-1);
	cout<<s<<endl;
}