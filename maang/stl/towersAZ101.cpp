#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x; v.push_back(x);
    }

    vector<vector<int>> pile;

    for(int i=0;i<n;i++){
        bool put = false;
        for(auto &p:pile){
            if(pile.size()==0) {
                pile.push_back(vector<int>{v[i]});
                put = true;
                break;
            }
            if(p[p.size()-1]>v[i]){
                p.push_back(v[i]);
                put = true;
                break;

            }else{
                // pile.push_back(vector<int>{v[i]});
                // continue;
            }

            
        }
        if(!put) pile.push_back(vector<int>{v[i]});
    }

    cout<<pile.size()<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int t;cin>>t;
    while(t--) solve();
}