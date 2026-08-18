#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    stack<pair<int,int>>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && st.top().first>=v[i]) st.pop();
        if(st.empty()) cout<<"0 ";
        else{
            cout<<st.top().second+1<<" ";
        }

        st.push({v[i],i});
    }

    cout<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--) solve();
}