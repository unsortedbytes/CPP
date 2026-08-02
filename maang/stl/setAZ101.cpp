#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    set<int>st;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        if(s=="add"){
            int x;cin>>x;st.insert(x);
        }else if(s=="erase"){
            int x;cin>>x;st.erase(x);
        }else if(s=="find"){
            int x;cin>>x;
            st.find(x)!=st.end() ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        }else if(s=="print"){
            for(auto x:st){
                cout<<x<<" ";
            }
            cout<<endl;
        }else if(s=="empty"){
            st.clear();
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int t;cin>>t;
    while(t--) solve();
}