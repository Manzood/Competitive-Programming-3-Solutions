#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	string s;
	while (cin>>s && s!="#") {
		//sort(s.begin(),s.end());
		if (next_permutation(s.begin(),s.end()))
			cout<<s<<endl;
		else 
			cout<<"No Successor\n";
	}
}