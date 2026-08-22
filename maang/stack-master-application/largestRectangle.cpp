#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(auto &x:v)cin>>x;

    vector<int>left(n), right(n);
    stack<pair<int, int>>sl, sr;

    for(int i=0;i<n;i++){
        if(sl.empty()) left[i] =0;
        else {
            while(!sl.empty() && sl.top().first>=v[i])sl.pop();
            if(sl.empty()) left[i]=0;
            else left[i]=sl.top().second+1;
        }
        sl.push({v[i],i});
    }

    for(int i=n-1;i>=0;i--){
        if(sr.empty()) right[i] = n-1;
        else{
            while(!sr.empty() && sr.top().first>=v[i])sr.pop();
            if(sr.empty()) right[i]=n-1;
            else right[i]=sr.top().second-1;
        }
        sr.push({v[i],i});
    }

    long long max_area =-1;
    for(int i=0;i<n;i++){
        long long current_area = ((right[i] - 1ll*left[i]+1 )*v[i]);
        // cout<<right[i]<<" " <<left[i]<<" "<< v[i]<<" "<<current_area<<endl;
        max_area = max(max_area, current_area );
    }

    cout<<max_area<<endl;


}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--) solve();
}