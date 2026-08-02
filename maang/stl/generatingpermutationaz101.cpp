#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n; cin>>n;
    vector<int> v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    do{
        for(auto val:v) cout<<val<<" ";
        cout<<endl;
    }while(next_permutation(v.begin(),v.end()));
    
}