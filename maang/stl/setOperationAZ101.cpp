#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;cin>>n>>m;
    set<int>a,b,com;
    for(int i=0;i<n;i++){
        int x;cin>>x;a.insert(x);com.insert(x);
    }
    for(int i=0;i<m;i++){
        int x;cin>>x;b.insert(x);com.insert(x);
    }

    for(auto it:com){
        cout<<it<<" ";
    }
    cout<<endl;
    set<int>ins;
    for(auto it:a){
        if(b.find(it)!=b.end()) ins.insert(it);
    }
    for(auto it:b){
        if(a.find(it)!=a.end()) ins.insert(it);
    }
    for(auto it:ins){
        cout<<it<<" ";
    }
    cout<<endl;
    set<int>diff;
    for(auto it:b){
        if(com.find(it)!=com.end()) com.erase(it);
    }

    for(auto it:com){
        cout<<it<<" ";
    }
    cout<<endl;
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--) solve();
}