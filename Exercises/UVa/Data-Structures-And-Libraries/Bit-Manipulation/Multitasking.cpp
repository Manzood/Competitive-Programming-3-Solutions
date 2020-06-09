#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int n,m;
	cin>>n>>m;
	while (n!=0||m!=0) {
		vector <bool> times (1000000);
		for (int i=0;i<1000000;i++) {
			times[i]=false;
		}
		bool ans=true;
		int start,end,rep;
		for (int i=0;i<n;i++) {
			scanf("%d %d",&start,&end);
			for (int j=start;j<end;j++) {
				if (times[j])
					ans=false;
				times[j]=true;
			}
		}
		for (int i=0;i<m;i++) {
			scanf("%d%d%d",&start,&end,&rep);
			int j=start;
			int temp=end-start;
			while (j<1000000) {
				if (times[j])
					ans=false;
				times[j]=true;
				j++;
				temp--;
				if (temp==0) {
					j-=(end-start);
					j+=rep;
					temp=end-start;
				}
			}					
		}
		if (ans) 
			printf("NO CONFLICT\n");
		else
			printf("CONFLICT\n");
		cin>>n>>m;
	}
}