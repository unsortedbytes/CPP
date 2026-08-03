#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    set<int> st;
    for(int i=0;i<n;i++){
        int x;cin>>x;st.insert(x);
    }
    cout<<st.size()<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--) solve();
}