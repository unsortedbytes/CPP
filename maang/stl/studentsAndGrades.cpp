#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
    set<int>st;
    for(int i=0;i<n;i++){
        int x;cin>>x;st.insert(x);
    }
    for(int i=0;i<m;i++){
        int x;cin>>x;
        if(st.find(x)!=st.end()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
            st.insert(x);
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--) solve();
}