#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int main() {
	int n;
	vector <int> nums;
	while (cin>>n) {
		if (nums.size()==0) 
			nums.push_back(n);
		else {
			bool inserted=false;
			for (int i=0;i<nums.size();i++) {
				if (nums[i]>n) {
					nums.insert(nums.begin()+i,n);
					inserted=true;
					break;
				}
			}
			if (!inserted) 
				nums.push_back(n);
		}
		if (nums.size()%2==0) 
			printf("%lld\n",(long long)(nums[nums.size()/2]+nums[nums.size()/2-1])/2);
		else 
			printf("%d\n",nums[nums.size()/2]);
	}
}