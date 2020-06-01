#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int ans=0, v; char c;
	while (scanf("%d",&v)!=EOF) {
		while (scanf("%c",&c)) {
			ans+=v;
			if (c=='\n') {
				printf("%d\n",ans);
				ans=0;
				v=0;
				break;
			}
			else 
				scanf("%d",&v);
		}
	}
}