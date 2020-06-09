// determine the median in a list of numbers
// approach -> sort and then print the middle number, I see no other way to do it

#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int n;
	cin>>n;
	vector <int> a(n);
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	sort(a.begin(),a.end());
	printf("%d\n",a[a.size()/2]);
}