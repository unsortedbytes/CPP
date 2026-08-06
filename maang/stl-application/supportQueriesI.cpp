#include<bits/stdc++.h>
using namespace std;

struct required{
    map<long long, long long> mp;
    long long cur_sum=0;

    void insert(long x){
        mp[x]++;
        cur_sum+=x;
    }

    void remove(long x){
        if(mp.find(x) != mp.end()){
            if(mp[x] == 1 ) {
                mp.erase(mp.find(x));
            }else{
                mp[x]-- ;
            }
            cur_sum-=x;
        }
    }

    void minimum(){
        mp.size() > 0 ? cout<<mp.begin()->first<<endl : cout<<-1<<endl;
    }

    void maximum(){
        mp.size()>0 ? cout<<mp.rbegin()->first << endl: cout<<-1<<endl;
    }

    void sumation(){
        mp.size() != 0 ? cout<<cur_sum<<endl : cout<<0<<endl;
    }
};

void solve(){
    required r;
    long q;cin>>q;
    while(q--){
        long long x;cin>>x;
        if(x==1){
            long long y;cin>>y; r.insert(y);
        }else if(x==2){
            long long y;cin>>y; r.remove(y);
        }else if(x==3){
            char c;cin>>c;
            r.minimum();
        }else if(x==4){
            char c;cin>>c;
            r.maximum();
        }else if(x==5){
            char c;cin>>c;
            r.sumation();
            // cout<<r.cur_sum<<endl;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    solve();
}