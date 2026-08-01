#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string s;
	cin>>n>>s;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(s[i]=='x'){
			int cond1 = true;
			if(i>=1 && s[i-1]=='o') cond1=false;
			if(i<n-1 && s[i+1]=='o') cond1 = false;
			if(cond1) cnt++;
		}
	}
	cout<<cnt;
}