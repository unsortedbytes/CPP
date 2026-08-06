#include<bits/stdc++.h>
using namespace std;

void solve(){
    stack<char> st;
    string s;cin>>s;
    for(char c:s){
        if(s.empty()) st.push(c);
        else if(c=='(') st.push(c);
        else if(c == ')') {
            if( !st.empty()  && st.top()=='(' ) st.pop();
            else st.push(c);
        }
    }
    cout<<st.size()<<endl;
}
// TODO -> Not possible

void threedepth(){
    int square_depth = 0;
    int curl_depth = 0;
    int depth = 0;
    string s; cin>>s;

    for(char c:s){
        
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;cin>>t;
    while(t--) solve();
}