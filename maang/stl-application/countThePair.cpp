#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,x;cin>>n>>x;
    vector<long long>v(n);
    for(auto &val:v) cin>>val;
    sort(v.begin(),v.end());
    long long l=0;
    long long r = n-1;
    long long cnt=0;
    while(l<r){
        long long sum = v[l]+v[r];
        if(sum>x) r--;
        else {
            cnt+=2*(r-l);
            l++;
        }
    }

    cout<<cnt<<endl;
}


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);


    long long t;cin>>t;
    while(t--) solve();
}