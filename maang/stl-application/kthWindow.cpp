#include<bits/stdc++.h>
using namespace std;

struct monotone_deque{

    deque<int> dq;

    void insert(int x){
        while(!dq.empty() && dq.back()>x) dq.pop_back();
        dq.push_back(x);
    }

    void erase(int x){
        if(dq.front()==x) dq.pop_front();
    }
    
    int getmin(){
        return dq.front();
    }
};

void kth_window_min(){
    monotone_deque dq;
    int n,k;cin>>n>>k;
    vector<int> v(n); for(auto &val:v) cin>>val;
    
    for(int i=0;i<n;i++){
        dq.insert(v[i]);
        if(i-k>=0) dq.erase(v[i-k]);
        if(i+1-k>=0)cout<<dq.getmin()<<" ";
    }
}

signed main(){
    // kth window min
    kth_window_min();
}