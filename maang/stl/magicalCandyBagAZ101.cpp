#include<bits/stdc++.h>
using namespace std;

void solve(){
    priority_queue<int> pq;
    long long cnt=0;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int x;cin>>x; pq.push(x);
    }
    while(k--){
        cnt+=pq.top();
        pq.push(pq.top()/2);
        pq.pop();
    }

    cout<<cnt<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--) solve();
}