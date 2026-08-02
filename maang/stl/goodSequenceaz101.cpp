#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    map<int, int> m;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        m[x]++;
    }

    int cnt=0;
    for(auto [x,y]:m){
        if(y>=x) cnt+=y-x;
        else cnt+=y;
    }
    cout<<cnt<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--)solve();
}