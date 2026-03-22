#include<bits/stdc++.h>
using namespace std;

vector<long long> dp(100007, -1);
long long fib(int n){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = fib(n-1)+fib(n-2);
}

void solve(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }

}   