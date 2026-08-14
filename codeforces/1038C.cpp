#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long n;cin>>n;
	vector<long long> a(n),b(n);
	for(auto &x:a)cin>>x;
	for(auto &x:b)cin>>x;

	priority_queue<long long>pqa, pqb;
	for(long long i=0;i<n;i++){
		pqa.push(a[i]);
		pqb.push(b[i]);
	}
	long long at=0, bt=0;
	bool turn = false;
	while(!pqa.empty() || !pqb.empty()){
		long long ea =long LLONG_MIN;
		long long eb = long LLONG_MIN;
		if(!pqa.empty()) ea = pqa.top();
		if(!pqb.empty()) eb = pqb.top();
		if(!turn){
			if(ea>=eb && ea!=long LLONG_MIN){
				at+=ea;
				pqa.pop();
			}else if(eb>ea && eb!=long LLONG_MIN){
				pqb.pop();
			} 
		}else{
			if(eb>=ea && eb!=long LLONG_MIN){
				bt+=eb;
				pqb.pop();
			}else if(ea>eb && ea!=long LLONG_MIN){
				pqa.pop();
			}
		}
		turn = !turn;
	}
	cout<<at-bt<<endl;

}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	solve();
}