#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void solve(){
    int q;cin>>q;
    // set<int> st;
    pbds st;
    while(q--){
        string s;cin>>s;
        if(s=="add"){
            int x;cin>>x;
            st.insert(x);
        }else if(s == "remove"){
            int x;cin>>x;
            if(st.find(x) != st.end() ) st.erase(x) ;
        }else if(s == "find"){
            int x;cin>>x;
            if(st.size()<=x){
                cout<<-1<<endl;
                // cout<< *st.find_by_order(x)<<endl;

            }else{
                cout<< *st.find_by_order(x)<<endl;
                // int cnt=0;
                // for(auto v:st){
                //     if(x==v) break;
                //     cnt++;
                // }
                // cout<<cnt<<endl;
            }
        }else if(s == "findpos"){
            int x;cin>>x;

            cout<<st.order_of_key(x)<<endl;
            // int val =0;

            // if(st.find(x)!=st.end()){

            //     for(auto v:st){
            //         if(x==v){
            //             break;
            //         }
            //         val++;
            //     }
            // }else {
            //     for(auto v:st){
            //         if(x>v){
            //             cout<<val<<endl;
            //             break;
            //         }
            //         val++;
            //     }
            // }
        }
    }
}

signed main(){
    int t; cin>>t;
    while(t--) solve();
}