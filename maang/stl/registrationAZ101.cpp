#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    map<string, int> m;
    while(n--){
        string s;cin>>s;
        if(m[s]==0){
            cout<<"OK"<<endl;
        }else{
            cout<<s<<m[s]<<endl;
        }
        m[s]++;
    }   
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--) solve();
}