#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int n;
	cin>>n;
	while (n!=0) {
		int x=0;
		int a=0,b=0;
		int count=0;
		while ((1LL<<x)<=n) {
			if (n & (1LL<<x)) {
				if (count%2==1)
					a+=(1LL<<x);
				else
					b+=(1LL<<x);
				count++;
			}
			x++;
		}
		printf("%d %d\n",b,a);
		cin>>n;
	}
}