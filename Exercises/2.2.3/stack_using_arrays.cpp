// an attempt to implement a stack using just arrays

#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

int st[100000];
int ind=-1;

void push(int n) {
	st[++ind]=n;
}

void pop() {
	if (ind>=0) {
		st[ind]=-1;
		ind--;
	}
}

int top() {
	if (ind>=0)
		return st[ind];
	return -1;
}

void empty() {
	ind=-1;
}

int main() {
	push(4);
	push(3);
	debug(top());
	pop();
	debug(top());
	push(6);
	push(7);
	debug(top());
	empty();
	debug(ind);
}