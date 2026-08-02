#include<bits/stdc++.h>
using namespace std;

void solve(){
    int q;cin>>q;
    priority_queue<int> pq;
    while(q--){
        string s;cin>>s;
        if(s=="add"){
            int x;cin>>x;
            pq.push(x);
        }else if(s=="remove"){
            if(!pq.empty()) pq.pop();
        }else if(s=="print"){
            pq.empty() ? cout<<0 : cout<<pq.top();
            cout<<endl;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--) solve();
}