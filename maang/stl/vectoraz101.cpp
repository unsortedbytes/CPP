#include<bits/stdc++.h>
using namespace std;

void solve(){
    int q;
    cin>>q;
    // cout<<q;
    cin.ignore();

    vector<int>v;
    while(q--){
        string s;
        getline(cin,s);
        int subspace = s.find(' ');
        string first  = s.substr(0,subspace);
        string second = s.substr(subspace+1);

        if(first =="add"){
            int value = stoi(second);
            v.push_back(value);
        }else if(first == "remove"){
            if(!v.empty()) v.pop_back();
        }else if(first == "print"){
            int value = stoi(second);
            if(value >= 0 && value<(int)v.size()){
                cout<<v[value]<<endl;
            }else{
                cout<<0<<endl;
            }
        }else if(first == "clear"){
            v.clear();
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}