#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	map<string, int> mp;
	for(int i=0;i<n;i++){
		string s;cin>>s;
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		mp[s]++;
	}
	int maxi = -1;
	// string st = "";

	for(auto it:mp){
		if(it.second>maxi){
			maxi = it.second;
			// st = it;
		}
	}
	cout<<maxi<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	solve();
}