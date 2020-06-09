// turn off the last consecutive set of ones in number S (for example, 39 (100111) becomes 32 (100000))

#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int s;
	cin>>s;
	int n=0;
	while (s & (1<<n)) {
		s=s^(1<<n);
		n++;
	}
	debug(s);	
}