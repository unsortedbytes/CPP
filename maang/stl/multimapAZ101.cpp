#include<bits/stdc++.h>
using namespace std;

void solve(){
    int q;cin>>q;
    multimap<string, int>m;
    while(q--){
        string s; cin>>s;
        if(s=="add"){
            string x;int y;cin>>x>>y;
            m.insert({x, y});
        }else if(s=="erase") {
            string x;cin>>x;
            auto it = m.find(x);
            if(it!=m.end())m.erase(it);
        }else if(s=="eraseall"){
            string x;cin>>x;
            m.erase(x);
        }else if(s=="print"){
            string x;cin>>x;
            if(m.count(x)){
                auto it = m.find(x);
                cout<<it->second<<endl;
            }else{
                cout<<0<<endl;
            }
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--) solve();
}