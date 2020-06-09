// turn on the last zero in a number S

#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int s;
	cin>>s;
	s |= s+1;
	debug(s);
}