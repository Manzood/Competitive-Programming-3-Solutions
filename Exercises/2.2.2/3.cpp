// turn off the first on bit in a number S

#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int s;
	cin>>s;
	int n=0;
	while (!(s & (1<<n)))	
		n++;
	s=s&(~(1<<n));
	debug(s);
}