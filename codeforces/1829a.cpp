#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	string og = "codeforces";
	while(t--){
		string s;
		cin>>s;
		int count =0;
		for(int i=0;i<s.size();i++){
			if(s[i]!=og[i]) count++;
		}
		cout<<count<<endl;
	}
}