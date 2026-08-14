#include<bits/stdc++.h>
using namespace std;

void solve(){
    // long long n;cin>>n;
    // vector<long long> a(n),b(n);
    // for(auto &x:a)cin>>x;
    // for(auto &x:b)cin>>x;
    // priority_queue<pair<long long, long long>>pqa, pqb;
    // for(long long i=0;i<n;i++){
    //     pqa.push({a[i], i});pqb.push({b[i],i});
    // }
    // long long ap=0,bp=0;
    // vector<bool> vis(n, false);
    // while(!pqa.empty() && !pqb.empty()){
    //     while(!pqa.empty() && vis[pqa.top().second]) pqa.pop();
    //     if(!pqa.empty()){
    //         ap+=pqa.top().first;
    //         vis[pqa.top().second]=true;
    //     }

    //     while(!pqb.empty() && vis[pqb.top().second]) pqb.pop();
    //     if(!pqb.empty()){
    //         bp+=pqb.top().first;
    //         vis[pqb.top().second]=true;
    //     }
    // }

    // if(ap>bp){
    //     cout<<"Alice"<<endl;
    // }else if(ap<bp){
    //     cout<<"Bob"<<endl;
    // }else{
    //     cout<<"Tie"<<endl;
    // }

    /*
        This fails because if the other have max the playner intedt to draw so we differnet plan

    */


    int n;cin>>n;
    vector<int> a(n),b(n);
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    priority_queue<pair<int, int>> pq;
    for(int i=0;i<n;i++){
        pq.push({a[i]+b[i], i});
    }
    bool turn = false;
    int at=0,bt=0;
    while(!pq.empty()){
        if(turn){
            bt+=b[pq.top().second];
            pq.pop();
        }else{
            at+=a[pq.top().second];
            pq.pop();
        }
        turn = !turn;
    }
    

    if(at>bt){
        cout<<"Alice";
    }else if(bt>at){
        cout<<"Bob";
    }else{
        cout<<"Tie";
    }
    cout<<endl;

}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    long long t;cin>>t;
    while(t--)solve();
}