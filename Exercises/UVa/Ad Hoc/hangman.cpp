#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int round;
	cin>>round;
	while (round!=-1) {
		int state=0;
		string soln;
		string inp;
		cin>>soln>>inp;
		set <char> guessed;
		set <char> rem;
		for (int i=0;i<soln.size();i++) {
			rem.insert(soln[i]);
		}
		int wrong=0;
		for (int i=0;i<inp.size();i++) {
			if (rem.count(inp[i])>0) {
				rem.erase(inp[i]);
				guessed.insert(inp[i]);
				if (rem.size()==0) {
					state=1;
					break;
				}
			}
			else if (guessed.count(inp[i]) == 0) {
				wrong++;
				if (wrong>=7) {
					state=-1;
					break;
				}
			}
		} 
		printf("Round %d\n",round);
		if (state==1) printf("You win.\n");
		else if (state==0) printf("You chickened out.\n");
		else printf("You lose.\n");
		cin>>round;
	}
}
