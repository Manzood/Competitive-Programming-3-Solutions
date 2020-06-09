#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n;
		scanf("%d\n",&n);
		map <char, int> mp;
		char c;
		int temp;
		for (int i=0;i<n;i++) {
			scanf("%c %d\n",&c,&temp);
			mp[c]=temp;
		}
		int lines;
		scanf("%d\n",&lines);
		string s;
		long long ans=0;
		for (int i=0;i<lines;i++) {
			getline(cin, s);
			for (auto x: s) {
				if (mp.count(x))
					ans+=mp[x];
			}
			// cout<<s<<endl;
		}
		long long dollars=ans/100;
		int cents=ans%100;
		printf("%lld.%02d$\n",dollars,cents);
	}	
}