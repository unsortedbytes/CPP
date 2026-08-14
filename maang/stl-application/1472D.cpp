#include<bits/stdc++.h>
using namespace std;

// bool comp(int a, int b){
// 	return
// }

void solve(){
	int n;cin>>n;
	vector<int> arr(n);
	for(auto &x:arr)cin>>x;
	sort(arr.begin(), arr.end());
	
	bool turn = false;
	int at=0,bt=0;
	while(!arr.empty()){
		if(!turn){
			at+=*arr.rbegin();
		}else{
			bt+=*arr.rbegin();
		}
		turn = !turn;
		arr.pop_back();
	}

	if(at>bt){
		cout<<"Alice"<<endl;
	}else if(bt>at){
		cout<<"Bob"<<endl;
	}else{
		cout<<"Tie"<<at<<" " <<bt<<endl;
	}
}

signed main(){
	ios_base::sync_with_stdio();
	cin.tie(0);cout.tie(0);

	int t;cin>>t;
	while(t--) solve();
}