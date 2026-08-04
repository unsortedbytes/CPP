#include<bits/stdc++.h>
using namespace std;

void solve(){
    int q;cin>>q;
    deque<int> dq;
    while(q--){
        string s;cin>>s;
        if(s=="insertback"){
            int x;cin>>x;
            dq.push_back(x);
        }else if(s=="insertfront"){
            int x;cin>>x;
            dq.push_front(x);
        }else if(s=="eraseback"){
            if(!dq.empty()) dq.pop_back();
        }else if(s=="erasefront"){
            if(!dq.empty()) dq.pop_front();
        }else if(s=="printfront"){
            dq.empty() ? cout<<0<<endl : cout<<dq.front()<<endl;
        }else if(s=="printback"){
            dq.empty() ? cout<<0<<endl : cout<<dq.back()<<endl;
        }else if(s =="print"){
            int x;cin>>x;
             dq.size()>x ? cout<<dq[x]<<endl : cout<<0<<endl;
        }
    }
}

signed main(){
    int t;cin>>t;
    while(t--) solve();
}