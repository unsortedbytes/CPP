#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for(int i=0;i<n;i++){
        long long x;cin>>x;pq.push(x);
    }

    long long cnt=0;
    while(pq.size()!=1){
        long  a = pq.top();pq.pop();
        long b= pq.top();pq.pop();
        cnt+=a+b;
        pq.push(a+b);
    }

    cout<<cnt<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--)solve();
}