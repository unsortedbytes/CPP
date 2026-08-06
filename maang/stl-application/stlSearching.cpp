#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,q;cin>>n>>q;
    vector<long long> v(n);
    for(auto &x:v ) cin>>x;
    sort(v.begin(),v.end());
    // for(int i=1;i<n;i++) v[i]+=v[i-1];
    while(q--){
        int t, x;cin>>t>>x;
        if(t==1)lower_bound(v.begin(),v.end(),x)!=v.end() ? cout<<*lower_bound(v.begin(),v.end(),x)<<" " : cout<<-1<<" ";
        else if(t==2) upper_bound(v.begin(),v.end(),x)!=v.end() ? cout<<*upper_bound(v.begin(),v.end(),x)<<" ": cout<<-1<<" ";
        else if(t==3) cout<<upper_bound(v.begin(),v.end(),x)-v.begin()<<" ";
        else if(t==4) cout<<lower_bound(v.begin(),v.end(),x) - v.begin()<<" ";
    }
    cout<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--)solve();
}