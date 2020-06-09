//given a sorted array, and an integer v find two integers a & b such that a+b=v

#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int n, v;
	cin>>n>>v;
	vector <int> a(n);
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	//two pointer approach
	int start=0;
	int end=n-1;
	while (start<end) {
		if (a[start]+a[end]>v) {
			end--;
		}
		else if (a[start]+a[end]<v) {
			start++;
		}
		else {
			break;
		}
	}
	debug(a[start]);
	debug(a[end]);
}