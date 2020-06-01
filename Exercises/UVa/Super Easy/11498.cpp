#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int k;
	while (scanf("%d",&k)!=EOF && k!=0) {
		int x, y, t1, t2;
		scanf("%d %d",&x,&y);
		for (int i=0;i<k;i++) {
			scanf("%d %d",&t1, &t2);
			if (t1==x || t2==y)
				printf("divisa");
			else if (t1<x && t2>y) 
				printf("NO");
			else if (t1>x && t2>y)
				printf("NE");
			else if (t1>x && t2<y)
				printf("SE");
			else 
				printf("SO");
			printf("\n");
		}
	}
}