#include<bits/stdc++.h>
using namespace std;

void solve(){
    int q;cin>>q;
    map<string, int> m;
    while(q--){
        string s; cin>>s;
        if(s=="add"){
            string x;int y;cin>>x>>y;
            m[x] = y;
        }else if(s=="erase"){
            string x;cin>>x;
            m.erase(x);
        }else if(s=="print"){
            string x;cin>>x;
            cout<<m[x]<<endl;
        }
    }
}

signed main(){
    int t;cin>>t;
    while(t--) solve();
}