// determine if a given number S is a power of two

#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int S;
	cin>>S;
	long long num=1;
	int count=0;
	while (num<=S) {
		if (num & S) 
			count++;
		if (count>1) 
			break;
		num = num << 1;
	}
	if (count==1) cout<<"YES\n";
	else cout<<"NO\n";
}