#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c;cin>>a>>b>>c;
	cout<<min(abs(a-b), min(abs(b-c), abs(c-a)))<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	int t; cin>>t;
	while(t--) solve();
}