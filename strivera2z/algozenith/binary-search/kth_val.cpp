#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, q;
    cin>>n>>m>>q;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> feq(n+1,0);
    
    vector<int>s;
    for(int i=1;i<=m;i++){
        int l,r;
        cin>>l>>r;
        // for(int f=l-1;f<r;f++){
        //     s.push_back(a[f]);
        // }
        feq[l-1]+=1;
        feq[r]=-1;
        
    }

    for(int i=1;i<n;i++){
        feq[i]+=feq[i-1];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<feq[i];j++){
            s.push_back(a[i]);
        }
    }

    sort(s.begin(), s.end());

    for(int i=0;i<q;i++){
        int k;
        cin>>k;
        if(k>s.size()){
            cout<<"-1 ";
        }else{
            cout<<s[k-1]<<" ";
        }
    }
    cout<<endl;


}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    if(cin>>t){
        while(t--){
            solve();
        }
    }
}