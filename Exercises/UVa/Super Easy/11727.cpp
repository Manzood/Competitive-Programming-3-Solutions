#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (int i=1;i<=t;i++) {
		int a,b,c;
		scanf("%d %d %d",&a, &b, &c);
		printf("Case %d: %d\n",i,(a+b+c)-max(max(a,b),c)-min(min(a,b),c));
	}
}