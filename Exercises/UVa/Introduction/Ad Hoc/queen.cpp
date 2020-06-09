#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main() {
	int x1, y1, x2, y2;
	cin>>x1;
	while (x1!=0) {
		cin>>y1>>x2>>y2;
		if (x1==x2 && y1==y2) {
			printf("0\n");
		}
		else {
			if (x1==x2 || y1==y2 || abs(x2-x1)==abs(y2-y1)) {
				printf("1\n");
			}
			else {
				printf("2\n");
			}
		}
		cin>>x1;
	}
}
