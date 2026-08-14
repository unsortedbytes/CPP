#include<bits/stdc++.h>
using namespace std;

// bool comp(long long a, long long b){
// 	return
// }

void solve(){
	long long n;cin>>n;
	vector<long long> arr(n);
	for(auto &x:arr)cin>>x;
	sort(arr.begin(), arr.end());
	
	bool turn = false;
	long long at=0,bt=0;
	while(!arr.empty()){
		if(!turn){
			if(*arr.rbegin()%2==0 ) at+=*arr.rbegin();
		}else{
			if(*arr.rbegin()%2!=0) bt+=*arr.rbegin();
		}
		turn = !turn;
		arr.pop_back();
	}

	if(at>bt){
		cout<<"Alice"<<endl;
	}else if(bt>at){
		cout<<"Bob"<<endl;
	}else{
		cout<<"Tie"<<endl;
	}
}

signed main(){
	ios_base::sync_with_stdio();
	cin.tie(0);cout.tie(0);

	long long t;cin>>t;
	while(t--) solve();
}