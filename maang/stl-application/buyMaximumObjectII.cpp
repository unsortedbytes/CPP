#include<bits/stdc++.h>
using  namespace std;

void solve(){
    int n, q;cin>>n>>q;
    vector<long long> v(n);
    for(auto &val:v) cin>>val;
    sort(v.begin(), v.end());
    for(int i=1;i<n;i++) v[i]+=v[i-1];
    while(q--){
        int m;cin>>m;
        cout<<upper_bound(v.begin(),v.end(),m)-v.begin()<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    // int t;cin>>t;
    // while(t--) solve();
    solve();
}