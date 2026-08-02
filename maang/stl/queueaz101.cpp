#include<bits/stdc++.h>
using namespace std;

void solve(){
    int q; cin>>q;
    queue<int> qu;
    while(q--){
        string s; cin>>s;
        if(s=="add"){
            int x; cin>>x;
            qu.push(x);
        }else if (s=="remove"){
            if(!qu.empty()) qu.pop();
        }else if(s=="print"){
            qu.empty()? cout<<0<<endl : cout<<qu.front()<<endl;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t; cin>>t;
    while(t--) solve();
}