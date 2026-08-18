#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a, b;cin>>a>>b;
	bool nine = false;
	if(a+b==9) nine=true;
	if(a-b==9) nine = true;
	if(a*b==9) nine = true;
	if(a/b==9 && a%b==0) nine = true;
	
	nine ? cout<<"Nine"<<endl: cout<<"Nein"<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	solve();
}