#include<bits/stdc++.h>
using namespace std;

void solve(){
    int q;cin>>q;
    multiset<int> ms;
    while(q--){
        string s;cin>>s;
        if(s=="add"){
            int x;cin>>x;
            ms.insert(x);
        }else if(s=="erase"){
            int x;cin>>x;
            if(ms.find(x)!=ms.end())ms.erase(ms.find(x));
        }else if(s == "eraseall"){
            int x; cin>>x;
            ms.erase(x);
        }else if(s == "find"){
            int x;cin>>x;
            ms.find(x)!=ms.end() ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        }else if(s == "count"){
            int x;cin>>x;
            cout<<ms.count(x)<<endl;
        }else if(s == "print"){
            for(auto v:ms) cout<<v<<" ";
            cout<<endl;
        }else if( s=="empty"){
            ms.clear();
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t; cin>>t;
    while(t--) solve();
}