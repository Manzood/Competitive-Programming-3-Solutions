// implement a stack using a vector in c++

#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

vector <int> st;

void push (int n) {
	st.push_back(n);
}

void pop() {
	st.pop_back();
}

int top() {
	return (st[st.size()-1]);
}

void empty() {
	st.resize(0);
}

int main() {
	push(4);
	push(3);
	debug(top());
	pop();
	debug(top());
	push(6);
	push(7);
	empty();
	debug(st.size());
}