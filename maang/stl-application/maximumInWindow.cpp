#include<bits/stdc++.h>
using namespace std;

struct monotoic_deque{
    deque<int> dq;
    
    void insert(int x){
        while(!dq.empty() && dq.back()<x) dq.pop_back();
        dq.push_back(x);
    }

    void remove(int x){
        if(dq.front()==x) dq.pop_front();
    }

    int getmax(){
        return dq.front();
    }
};

void solve(){
    monotoic_deque dq;
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(auto &val:v) cin>>val;
    for(int i=0;i<n;i++){
        dq.insert(v[i]);
        if(i-k>=0) dq.remove(v[i-k]);
        if(i+1>=k) cout<<dq.getmax()<<" ";
    }
    cout<<endl;
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--) solve();
}