#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int n=s.size();
	int foz = n;
	int loo = n;
	for(int i=0;i<n;i++){
		if(s[i]== '0' && foz>i) foz=i;
		else if(s[i]=='1' && loo>i) loo=i;
	}
	string new_s="";
	for(int i=0;i<n;i++){
		if(i==foz || i==loo) continue;
		new_s+=s[i];
	}

	cout<<new_s<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}