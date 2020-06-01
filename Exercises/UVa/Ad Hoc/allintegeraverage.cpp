#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int n;
	cin>>n;
	while (n>0) {
		vector <int> a(n);
		int sum=0;	
		for (int i=0;i<n;i++) {
			scanf("%d",&a[i]);
			sum+=a[i];	
		}
		int state=0;
		int a,b,c;
		if (sum<0) state=2;
		if (sum/n>=1) {
			a=sum/n;
		}
		else a=0;
		b=sum-(a*n);
		if (b>0) {
			for (int i=0;i<state;i++) {
				printf(" ");
			}
			printf("")
		cin>>n;
	}
}