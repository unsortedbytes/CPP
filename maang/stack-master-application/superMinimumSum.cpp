#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(auto &x:v)cin>>x;
    sort(v.begin(), v.end());
    long long total =0;
    for(int i=0;i<n;i++){
        total +=1LL*(v[i])*(n-i);
    }
    cout<<total<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--) solve();
}