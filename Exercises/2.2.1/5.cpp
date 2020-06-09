// determine the length of the longest increasing contiguous subarray in an array

#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int n;
	cin>>n;
	vector <int> a(n);
	int ans=0;
	int l=0;
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);	
		if (i==0) {
			ans=1;
			l=1;
		}
		else {
			if (a[i]>=a[i-1]) {
				l++;
			}
			else {
				ans=max(l,ans);
				l=1;
			}
		}
	}
	debug(ans);
}