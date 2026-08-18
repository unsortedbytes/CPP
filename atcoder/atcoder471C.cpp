#include<bits/stdc++.h>
using namespace std;

// long long init=0;

// bool comprator(long long a, long long b){
// 	long long dis_a = abs(a-init);
// 	long long dis_b = abs(b-init);
// 	if(dis_a> dis_b) init = b;
// 	else init = a;
// 	return dis_a>dis_b;
// }

void solve(){
	long long n;cin>>n;
	vector<int> v(n);
	for(auto &x:v)cin>>x;
	// long long init = 0;
	// sort(v.begin(),v.end(),comprator );
	// long long dis = 0;
	// dis +=abs(v[0]);
    // for(long long i=1;i<n;i++){
    // 	dis +=abs(v[i]-v[i-1]);
    // }
    // cout<<dis<<endl;
	sort(v.begin(), v.end());

	vector<bool> vis(n, false);
	long long last = 0;
	long long last_index = 0;
	long long step = 0;
	long long dis = 0;
	while(step<n){
		long long candidate = last;
		long long m = LLONG_MAX;

		for(long long i = 0; i < n; i++){
		    if(vis[i]) continue;

		    if(abs(last - v[i]) < m){
		        m = abs(last - v[i]);
		        candidate = v[i];
		        last_index = i;
		    }
		}

		last = candidate;
		vis[last_index] = true;
		dis += m;
		step++;
	}

	cout<<dis<<endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	solve();
}