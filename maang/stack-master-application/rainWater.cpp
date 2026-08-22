#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    vector<int> left(n), right(n);
    int l= INT_MIN, r = INT_MIN;
    for(int i=0;i<n;i++){
        l = max(l, v[i]);
        left[i]=l;

    }
    for(int i=n-1;i>=0;i--){
        r = max(r, v[i]);
        right[i]=r;
    }

    long long total = 0;
    for(int i=0;i<n;i++){
        if(min(left[i], right[i])-v[i]<0)continue;
        total+=(min(left[i], right[i])- v[i]);
    }

    cout<<total<<endl;
    // stack<pair<int, int>> l,r;
    // for(int i=0;i<n;i++){
    //     if(l.empty()) left[i]=0;
    //     else{
    //         while(!l.empty() && l.top().first<=v[i]) l.pop();
    //         if(l.empty()) left[i]=0;
    //         else left[i]=l.top().second;
    //     }
    //     l.push({v[i],i});
    // }
    // for(int i=n-1;i>=0;i--){
    //     if(r.empty()) right[i]=n-1;
    //     else{
    //         while(!r.empty() && r.top().first<=v[i]) r.pop();
    //         if(r.empty()) right[i]=b-1;
    //         else right[i]=r.top().second;
    //     }
    //     r.push({v[i], i});
    // }

    // long long total = 0;
    // for(int i=0;i<n;i++){
    //     // cout<<(min(left[i], right[i]) - v[i])<<" ";
    //     if((min(left[i], right[i]) - v[i])<=0)continue;
    //     total += 1ll*(min(left[i], right[i]) - v[i]);
    // }
    // cout<<total<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--) solve();
}