#include<bits/stdc++.h>
using namespace std;

void solve(){
    int q; cin>>q;
    stack<int> que, temp;
    while(q--){
        string s; cin>>s;
        if(s=="push"){
            int x;cin>>x;
            que.push(x);
            // if(temp.empty()) temp.push(x);
        }else if(s=="pop"){
            // temp.empty() ? cout<<0<<endl : cout<<temp.top()<<endl;

            // if(!temp.empty()) temp.pop();

            // while(!que.empty()){
            //     temp.push(que.top());
            //     que.pop();
            // }
            // // if(temp.empty()) 
            // // cout<<temp.top()<<endl;
            // // temp.pop();
            // while(!temp.empty()){
            //     que.push(temp.top());
            //     temp.pop();
            // }

            if(temp.empty()){
                while(!que.empty()){
                    temp.push(que.top());que.pop();
                }
            }
            // !temp.empty() ? cout<<temp.top()<<endl : cout<<0<<endl;
            if(!temp.empty()){
                cout<<temp.top()<<endl;
                temp.pop();
            }else{
                cout<<0<<endl;
            }
        }else if(s=="front"){
            // while(!que.empty()){
            //     temp.push(que.top());
            //     que.pop();
            // }
            if(temp.empty()){
                while(!que.empty()){
                    temp.push(que.top());que.pop();
                }
            }
            temp.empty() ? cout<<0<<endl : cout<<temp.top()<<endl;
            // temp.pop();
            // while(!temp.empty()){
            //     que.push(temp.top());
            //     temp.pop();
            // }
        }
    }
}

signed main(){
    int t; cin>>t;
    while(t--) solve();
}