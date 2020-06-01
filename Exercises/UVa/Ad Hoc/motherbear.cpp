#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	string s;
	while (true) {
		getline(cin,s);
		if (s=="DONE")
			break;
		bool ispalindrome=true;	
		for (int i=0;i<s.size();i++) {
			if (s[i]>='A' && s[i]<='Z') 
				s[i]+=('a'-'A');
			if (s[i]<'a' || s[i]>'z') {
				s.erase(i,1);
			}
		}
		int next=s.size()-1;
		for (int i=0;i<s.size()/2;i++) {
			// debug(s[i]);
			// debug(s[next]);
			if (s[i]>='a' && s[i]<='z' && s[next]>='a' && s[next]<='z') {
				if (s[i]!=s[next]) {
					// debug(s[i]);
					// debug(s[next]);	
					ispalindrome=false;
					break;
				}
			}
			next--;
		}
		if (ispalindrome)
			printf("You won't be eaten!\n");
		else 
			printf("Uh oh..\n");
	}
}