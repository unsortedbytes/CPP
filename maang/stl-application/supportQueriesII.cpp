#include<bits/stdc++.h>
using namespace std;
int k;

struct custom_database{
    multiset<int> ms, temp;
    long long sum =0;

    void balance(){
        while(ms.size()<k && !temp.empty()){
            ms.insert(*temp.rbegin());
            sum+=*temp.rbegin();
            temp.erase(*temp.rbegin());
        }

        while(ms.size()>k){
            temp.insert(*ms.begin());
            sum-=*ms.begin();
            ms.erase(ms.find(*ms.begin()));
        }
    }

    // funtion
    void add(int x){
        if(ms.size()<k){
            ms.insert(x);
            sum+=x;
        }else if(*ms.begin()<x){
            ms.insert(x);sum+=x;
        }else{
            temp.insert(x);
        }
        balance();
    }

    void remove(int x){
        if(temp.find(x)!=temp.end()){
            temp.erase(temp.find(x));
        }else if(ms.find(x)!=ms.end()){
            ms.erase(ms.find(x));
            sum-=x;
            if(!temp.empty()){
                ms.insert(*temp.rbegin());
                sum+=*temp.rbegin();
                temp.erase(temp.find(*temp.rbegin()));
            }
        }
        balance();
    }

    long long total(){
        return sum ;
    }
};

void solve(){
    int q;cin>>q>>k;

    custom_database ddb;
    while(q--){
        int x;cin>>x;
        if(x==1){
            int y;cin>>y;
            ddb.add(y);
        }else if(x==2){
            int y;cin>>y;
            ddb.remove(y);
        }else if (x==3){
            char c;cin>>c;
            cout<<ddb.total()<<endl;
        }
    }
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    solve();
}


// #include<bits/stdc++.h>
// using namespace std;
// int k;

// struct custom_database{
//     priority_queue<int, vector<int>, greater<int>>pq;
//     priority_queue<int> temp;
//     long long sum=0;

//     void balance(){
//         while(!temp.empty() && pq.size()<k){
//             pq.push(temp.top());
//             sum+=temp.top();
//             temp.pop();
//         }

//         while(!pq.empty() && pq.size()>k){
//             temp.push(pq.top());
//             sum-=pq.top();
//             pq.pop();
//         }
//     }

//     void add(int x){

//         if(pq.size()<k){
//             pq.push(x);
//             sum+=x;
//         }else if(x>pq.top()){
//             temp.push(pq.top());
//             sum-=pq.top();
//             pq.pop();

//             pq.push(x);
//             sum+=x;
//         }else {
//             temp.push(x);
//         }
//         // balance();

//     }

//     void remove(int x){
    
//         if(!pq.empty()&& pq.top()<=x){
//             while(!pq.empty() && pq.top()<x){
//                 temp.push(pq.top());
//                 sum-=pq.top();
//                 pq.pop();
//             }
//             if(!pq.empty() && pq.top()==x){
//                 sum-=pq.top();
//                 pq.pop();
//             }
//         }
//         else {
//             while(!temp.empty() && temp.top()>x){
//                 pq.push(temp.top());
//                 sum+=temp.top();
//                 temp.pop();
//             }
//             if(!temp.empty() && temp.top()==x) temp.pop();
//         }
    
//         // balance();
//     }

//     long long total(){

//         balance();
//         return sum;
//     }
// };

// void solve(){
//     int q;cin>>q>>k;

//     custom_database ddb;
//     while(q--){
//         int x;cin>>x;
//         if(x==1){
//             int y;cin>>y;
//             ddb.add(y);
//         }else if(x==2){
//             int y;cin>>y;
//             ddb.remove(y);
//         }else if (x==3){
//             char c;cin>>c;
//             cout<<ddb.total()<<endl;
//         }
//     }
    
// }

// signed main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);cout.tie(0);

//     solve();
// }