#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<iostream>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int n;
	cin>>n;
	vector <int> a(n);
	set <int> check;
	bool ans=false;
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		if (check.count(a[i]))
			ans=true;
		else 
			check.insert(a[i]);
	}
	printf("%d",ans);
}