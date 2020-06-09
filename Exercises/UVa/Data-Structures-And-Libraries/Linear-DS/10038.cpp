// uva 10038: Jolly Jumpers

#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int n;
	while (cin>>n) {
		vector <int> a(n);
		bool good=true;
		set <int> found;
		int cnt=0;
		for (int i=0;i<n;i++) {
			scanf("%d",&a[i]);
			if (i>0) {
				int temp=abs(a[i]-a[i-1]);
				if (found.count(temp)==0) {
					found.insert(temp);
					cnt++;
				}
				if (temp>=n)
					good=false;
			}
		}
		if (cnt==n-1 && good) printf("Jolly\n");
		else printf("Not jolly\n");
	}
}