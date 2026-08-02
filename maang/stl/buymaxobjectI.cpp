#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    int sum =0;
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        sum+=x;
        pq.push(x);
        if(sum>m) {
            sum-=pq.top();pq.pop();
        } 
    }
    cout<<pq.size()<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t; cin>>t;
    while(t--) solve();
}