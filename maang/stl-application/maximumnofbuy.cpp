#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, b;cin>>n>>b;
    int cnt =0;
    int sum = 0;
    priority_queue<int> pq;
    while(n--){
        int x;cin>>x;
        pq.push(x);
        sum+=x;cnt++;
        if(sum>b){
            sum-=pq.top();pq.pop();
            cnt--;
        }
    }
    cout<<cnt<<endl;
}

void both(){
    int n, m;cin>>n>>m;
    vector<int> v(n);
    for(auto &val:v) cin>>val;
    sort(v.begin(), v.end());
    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
    }
    while(m--){
        int b;cin>>b;
        auto it = upper_bound(v.begin(),v.end(), b);
        // int low = 0;int high=n-1;
        // while(low<high){
        //     int mid = (high-low)/2 + low+1;
        //     if(v[mid]>b) high = mid-1;
        //     else if(v[mid]<=b) low = mid;
        // }
        // cout<<low<<endl;
    }
}

signed main(){
    int t; cin>>t;
    while(t--) both();
}