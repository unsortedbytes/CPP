#include<bits/stdc++.h>
using namespace std;

const int M = 1e9+7;

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    long long product = 1;
    for(auto x:v) product = (product*x)%M;

    cout<<product<<endl;
}


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;
    if(cin>>t){
        while(t--){
            solve();
        }
    }
}