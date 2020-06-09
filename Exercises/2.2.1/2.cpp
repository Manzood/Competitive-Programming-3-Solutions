#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<iostream>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int n, v;
	cin>>n>>v;
	vector <int> a(n);
	set <int> nums;
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		nums.insert(a[i]);
	}
	pair <int, int> ans;
	for (int i=0;i<n;i++) {
		if (nums.count(v-a[i])) {
			ans.first=a[i];
			ans.second=v-a[i];
		}
	}
	debug (ans.first);
	debug (ans.second);
}
