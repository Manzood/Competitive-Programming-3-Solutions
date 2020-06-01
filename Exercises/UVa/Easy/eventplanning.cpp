#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, b, h, w;
	while (scanf("%d",&n)!=EOF) {
		cin>>b>>h>>w;
		vector <int> p;
		vector <int> a[h];
		int temp;
		for (int i=0;i<h;i++) {
			scanf("%d",&temp);
			p.push_back(temp);
			for (int j=0;j<w;j++) {
				scanf("%d",&temp);
				a[i].push_back(temp);
			}
		}
		int min=-1;
		for (int i=0;i<h;i++) {
			for (int j=0;j<w;j++) {
				if (a[i][j]>=n) {
					if (min==-1) {
						min=p[i]*n;
					}
					else {
						if (min>(p[i]*n)) min=p[i]*n;
					}
				}
			}
		}
		if (min>b) cout<<"stay home"<<endl;
		else cout<<min<<endl;
	}
}