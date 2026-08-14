#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;
    while(n--) {
        string s;int x;cin>>s>>x;
        pq.push({x,s});
    }
    while(!pq.empty()){
        cout<<pq.top().second<<" "<<pq.top().first<<endl;
        pq.pop();
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--) solve();
}