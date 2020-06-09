#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (int test=1;test<=t;test++) {
		int n;
		cin>>n;
		vector <int> a(n);
		int m;
		for (int i=0;i<n;i++) {
			scanf("%d",&a[i]);
			if (i==0) m=a[i];
			else m=max(a[i],m);
		}
		printf("Case %d: %d\n",test,m);
	}
}