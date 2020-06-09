// given an integer array and two integers a and b, print the all the values int range [a...b] in sorted order
#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

//TEST THIS SOLUTION, YOU HAVEN'T TESTED IT YET

int main() {
	int n, a, b;
	scanf("%d%d%d",&n,&a,&b);
	vector <int> arr(n);
	vector <int> x;
	for (int i=0;i<n;i++) {
		scanf("%d",&arr[i]);
		if (arr[i]>=a && arr[i]<=b) {
			x.push_back(arr[i]);
		}
	}
	sort(x.begin(),x.end());
	for (auto y: x) {
		debug(y);
	}
}