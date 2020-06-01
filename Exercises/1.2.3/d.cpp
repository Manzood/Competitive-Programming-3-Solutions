#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n,prev;
	scanf("%d",&n);
	vector <int> a(n);
	for (int i=0;i<n;i++) 
		scanf("%d",&a[i]);
	sort(a.begin(),a.end());
	prev=-1;
	for (int i=0;i<n;i++) {
		if (a[i]!=prev) {
			printf("%d ",a[i]);
			prev=a[i];
		}
	}
}