#include<cstring>
#include<iostream>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	int len=0;
	bool correct=true;
	for (int i=0;i<s.size();i++) {
		if (s[i]==' ') {
			if (len==3 && correct==true) {
				s[i-1]='*',s[i-2]='*',s[i-3]='*';
			}
			len=0;
			correct=true;
		}
		else len++;
		if (len==1) {
			if (s[i]<'a'||s[i]>'z') 
				correct=false;
		}
		else if (len==2) {
			if (s[i]<'0'||s[i]>'9')
				correct=false;
		}
		else if (len==3) {
			if (s[i]<'0'||s[i]>'9')
				correct=false;
		}
		else if (len>3) {
			correct=false;
		}
	}
	cout<<s;
}