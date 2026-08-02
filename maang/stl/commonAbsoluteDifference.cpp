#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    unordered_map<int,int> s;
    int cnt=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(k==0){
            if(s.count(x)) cnt+=s[x];
        }else{

            if(s.count(x-k)) cnt+=s[x-k];
            if(s.count(k+x)) cnt+=s[k+x]; 
        }
        s[x]++;
    }
    cout<<cnt<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--) solve();
}